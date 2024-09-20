
#include <sys/types.h>

#define EI 9  /* typically 10..13 */
#define EJ  4  /* typically 4..5 */
#define P   1  /* If match length <= P then output one character */
#define N (1 << EI)  /* buffer size */
#define F ((1 << EJ) + 1)  /* lookahead buffer size */

static __inline unsigned char* getbit(unsigned char *in, unsigned int n, unsigned int *x) /* get n bits */
{
    unsigned int i;
    static unsigned int buf, mask = 0;
    
    *x = 0;
    for (i = 0; i < n; i++)
	{
        if (mask == 0)
		{
			buf = *in++;
            mask = 128;
        }
        *x <<= 1;
        if (buf & mask) *x|=1;
        mask >>= 1;
    }

    return in;
}

unsigned int decode_olz(unsigned char *in, unsigned char *out)
{
	unsigned int c, i, j, k, r, dec_size, dec_pos;
	unsigned char* buffer=(unsigned char*)0x1f800000;
    
    for (i = 0; i < N - F; i++) buffer[i] = 0;
    r = N - F;

	dec_size=*(unsigned int*)&in[0];
	dec_pos=0;

	in+=4;

    while (dec_pos < dec_size)
	{
		in = getbit(in,1,&c);
        if (c)
		{
            in = getbit(in,8,&c);
            *out++=c;
			dec_pos++;
            buffer[r++] = c;
			r &= (N - 1);
        }
		else
		{
			in = getbit(in,EI,&i);
            in = getbit(in,EJ,&j);
            for (k = 0; k <= j + 1; k++)
			{
                c = buffer[(i + k) & (N - 1)];
                *out++=c;
				dec_pos++;
                buffer[r++] = c;
				r &= (N - 1);
            }
        }
    }

	return dec_size;
}