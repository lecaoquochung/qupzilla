/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2014  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#include "qzcommon.h"

namespace Qz
{
const int sessionVersion = 0x0003;
const int sessionVersionQt5 = 0x0003 | 0x050000;
const int bookmarksVersion = 1;

const char* APPNAME = "QupZilla";
const char* VERSION = QUPZILLA_VERSION;
const char* BUILDTIME =  __DATE__" "__TIME__;
const char* AUTHOR = "David Rosca";
const char* COPYRIGHT = "2010-2014";
const char* WWWADDRESS = "http://www.qupzilla.com";
const char* WIKIADDRESS = "https://github.com/QupZilla/qupzilla/wiki";
}