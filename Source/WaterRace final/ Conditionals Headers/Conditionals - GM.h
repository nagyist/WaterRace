/*****************************************************************************
 * Copyright (c) 1998-2001, French Touch, SARL
 * http://www.french-touch.net
 * info@french-touch.net
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/


#ifndef __WATERRACE_CONDITIONALS_GM__
#define __WATERRACE_CONDITIONALS_GM__

#include	"Conditionals.h"


/********** OPTIONNAL CONDITIONALS **********/

//Play logo animation at game startup
#define	__PLAY_DEMO__	1

//Use CD protection - check for WaterRace CD at startup
#define	__CD_PROTECTION__	0

//Network only if no CD found
#define	__NETWORK_ONLY_IF_CD_FAILURE__	1

//Use audio CD tracks
#define	__USE_AUDIO_CD_TRACKS__		1


#endif
