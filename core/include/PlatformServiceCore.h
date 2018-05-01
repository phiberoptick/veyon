/*
 * PlatformServiceCore.h - declaration of PlatformServiceCore class
 *
 * Copyright (c) 2018 Tobias Junghans <tobydox@users.sf.net>
 *
 * This file is part of Veyon - http://veyon.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef PLATFORM_SERVICE_CORE_H
#define PLATFORM_SERVICE_CORE_H

#include "VeyonCore.h"

// clazy:excludeall=copyable-polymorphic

class VEYON_CORE_EXPORT PlatformServiceCore
{
public:
	static constexpr int SessionIdMax = 99;

	int allocateSessionId();
	void freeSessionId( int sessionId );

	static QString sessionIdEnvironmentVariable();

private:
	QList<int> m_sessionIds;

};

#endif // PLATFORM_SERVICE_CORE_H