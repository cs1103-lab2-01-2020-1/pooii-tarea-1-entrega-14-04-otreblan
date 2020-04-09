// Integer
// Copyright © 2020 otreblan
//
// integer is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// integer is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with integer.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <iostream>

class Integer
{
private:
	int value;
public:
	Integer();
	Integer(int value);
	Integer(const Integer& other);
	Integer operator=(const Integer& other);
	Integer operator+(int value);
	operator int();
	friend std::ostream& operator <<(std::ostream& os, const Integer& i);
	friend std::istream& operator >>(std::istream& is, Integer& i);
};
