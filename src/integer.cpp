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

#include <integer.hpp>

Integer::Integer(){};

Integer::Integer(int value):
	value(value)
{};

Integer::Integer(const Integer& other):
	value(other.value)
{};

Integer Integer::operator=(const Integer& other)
{
	this->value = other.value;
	return *this;
}

Integer Integer::operator+(int value)
{
	return this->value + value;
}

Integer::operator int()
{
	return this->value;
}

std::ostream& operator <<(std::ostream& os, const Integer& i)
{
	return os << i.value;
}

std::istream& operator >>(std::istream& is, Integer& i)
{
	return is >> i.value;
}
