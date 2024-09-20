

#include "../bio2/controller.h"

#define PAD_DEBUG			PAD_TRIANGLE			// [In-game] Debug Menu (DEBUG.BIN)
#define PAD_ANTI_FREEZE		(PAD_L1 | PAD_SQUARE)	// [In-game] G.Stop_flg = 0, for use when the game gets softlocked by debug options (not all softlocks are fixable!)

#if GAME_REGION
#define PAD_CONFIRM			PAD_X					// [Menu] Confirm
#define PAD_CANCEL			PAD_CIRCLE				// [Menu] Cancel
#else
#define PAD_CONFIRM			PAD_SQUARE				// [Menu] Confirm
#define PAD_CANCEL			PAD_X					// [Menu] Cancel
#endif
