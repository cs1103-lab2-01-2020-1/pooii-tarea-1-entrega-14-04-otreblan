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

#include <cstdlib>
#include <iostream>

namespace utec
{

class vector
{
private:
	int* data;

	size_t _size;
	size_t _capacity;
public:
	vector();
	vector(vector& other);
	vector(size_t size);

	vector& operator=(vector& other);

	~vector();

	void push_back(int value);
	void pop_back();

	int* insert(size_t index, int value);
	int* erase(size_t index);

	vector operator+(vector& other);

	inline size_t size()
	{
		return _size;
	}

	inline size_t capacity()
	{
		return _capacity;
	}

	inline int& operator[](size_t index)
	{
		return data[index];
	}

	void reserve(size_t size);
};

};
