/*
  MODIFIED FILE!
  This file was modified by coderx3, this is not the original file!

  VitaShell
  Copyright (C) 2015-2018, TheFloW

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef FILE_H
#define FILE_H

enum FileMoveFlags {
  MOVE_INTEGRATE  = 0x1, // Integrate directories
  MOVE_REPLACE    = 0x2, // Replace files
};

int hasEndSlash(const char *path);
int copyFile(const char *src_path, const char *dst_path);
int copyPath(const char *src_path, const char *dst_path);
int movePath(const char *src_path, const char *dst_path, int flags);
#endif