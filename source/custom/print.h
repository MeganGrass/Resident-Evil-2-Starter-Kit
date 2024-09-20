

#include "../bio2/print.h"

#if GAME_REGION
#define ASCII_CONFIRM	ASCII_X						// [Menu] Confirm
#define ASCII_CANCEL	ASCII_CIRCLE				// [Menu] Cancel
#else
#define ASCII_CONFIRM	ASCII_SQUARE				// [Menu] Confirm
#define ASCII_CANCEL	ASCII_X						// [Menu] Cancel
#endif
