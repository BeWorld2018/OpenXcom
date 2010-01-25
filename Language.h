/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Language
{
private:
	vector<string> _strings;
public:
	Language();
	~Language();
	void loadDat(string filename);
	string getString(int id);
	void addString(string str);
};

#endif __LANGUAGE_H__