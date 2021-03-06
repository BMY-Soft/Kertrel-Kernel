/*	A part of kestrel
	Kestrel Kernel Project
	Copyright 2007-2014 BMY-Soft
	Copyright 2007-2014 PC GO Ld.

	This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#ifndef _KESTREL_KEYMAPS_H
#define _KESTREL_KEYMAPS_H

//#define dovrak


#if defined _KEYMAP_en_US
/*************************************
* en_US Keyboard
**************************************/

#define L_SHIFT_P	0x2a
#define R_SHIFT_P	0x36
#define L_SHIFT_R	0xAA
#define R_SHIFT_R	0xB6

#define KEYMAP1 "	qwertyuiop[]\r"
#define KEYMAP2 "asdfghjkl;'`"
#define KEYMAP3 "\\zxcvbnm,./"
#define KEYMAP4 "-="

#define KEYMAP1_UP "	QWERTYUIOP{}\r"
#define KEYMAP2_UP "ASDFGHJKL:\"~"
#define KEYMAP3_UP "|ZXCVBNM<>?"
#define KEYMAP4_UP "_+"
#define KEYMAP5_UP "!@#$%^&*()"

#define KEYMAP_EXTRA_NUMBER "789-456+1230."


#elif defined _KEYMAP_dovrak

/*************************************
* Dovrak Keyboard
**************************************/

#define L_SHIFT_P	0x2a
#define R_SHIFT_P	0x36
#define L_SHIFT_R	0xAA
#define R_SHIFT_R	0xB6

#define KEYMAP1 "	',.pyfgcrl/=\r"
#define KEYMAP2 "aoeuidhtns-`"
#define KEYMAP3 "\\;qjkxbmwvz"
#define KEYMAP4 "[]"

#define KEYMAP1_UP "	\"<>PYFGCRL?+\r"
#define KEYMAP2_UP "AOEUIDHTNS_~"
#define KEYMAP3_UP "|:QJKXBMWVZ"
#define KEYMAP4_UP "{}"
#define KEYMAP5_UP "!@#$%^&*()"
#define KEYMAP_EXTRA_NUMBER "789-456+1230."

// end of dovrak


#else
#error "Unknown KEYMAP type"
#endif

#endif
