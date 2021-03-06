/*
 * $Id: GHOST_SystemPathsCarbon.h 40837 2011-10-06 22:02:50Z campbellbarton $
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version. 
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2010 Blender Foundation.
 * All rights reserved.
 *
 * 
 * Contributor(s): Damien Plisson 2010
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file ghost/intern/GHOST_SystemPathsCarbon.h
 *  \ingroup GHOST
 */


#ifndef _GHOST_SYSTEM_PATHS_CARBON_H_
#define _GHOST_SYSTEM_PATHS_CARBON_H_

#ifndef __APPLE__
#error Apple OSX only!
#endif // __APPLE__

#include <Carbon/Carbon.h>

#include "GHOST_SystemPaths.h"

/**
 * OSX/Carbon Implementation of GHOST_SystemPaths class.
 * @see GHOST_System.
 * @author	Andrea Weikert
 * @date	Aug 1, 2010
 */
class GHOST_SystemPathsCarbon : public GHOST_SystemPaths {
public:
	/**
	 * Constructor.
	 */
	GHOST_SystemPathsCarbon();

	/**
	 * Destructor.
	 */
	~GHOST_SystemPathsCarbon();

	/**
	 * Determine the base dir in which shared resources are located. It will first try to use
	 * "unpack and run" path, then look for properly installed path, not including versioning.
	 * @return Unsigned char string pointing to system dir (eg /usr/share/blender/).
	 */
	virtual const GHOST_TUns8* getSystemDir() const;

	/**
	 * Determine the base dir in which user configuration is stored, not including versioning.
	 * If needed, it will create the base directory.
	 * @return Unsigned char string pointing to user dir (eg ~/.blender/).
	 */
	virtual const GHOST_TUns8* getUserDir() const;

	/**
	  * Determine the directory of the current binary
	  * @return Unsigned char string pointing to the binary dir
	  */
	virtual const GHOST_TUns8* getBinaryDir() const;

	/**
	  * Add the file to the operating system most recently used files
	  */
	void addToSystemRecentFiles(const char* filename) const;
};

#endif // _GHOST_SYSTEM_CARBON_H_



