#ifndef  PESTILENCE_H
# define PESTILENCE_H

// ---
// Includes
// ---



// ---
// Defines
// ---

#define PESTILENCE_SIGN "Pestilence version 1.0 (c)oded by ale-boud - amassias"
#define PESTILENCE_SIGN_LEN (sizeof(PESTILENCE_SIGN))

// ---
// Typedefs
// ---



// ---
// Function declartions
// ---

void	pestilence(
			const char *stub32_start,
			const char *stub32_end,
			const char *stub64_start,
			const char *stub64_end,
			const char *packer32_start,
			const char *packer32_end,
			const char *packer64_start,
			const char *packer64_end);

#endif
