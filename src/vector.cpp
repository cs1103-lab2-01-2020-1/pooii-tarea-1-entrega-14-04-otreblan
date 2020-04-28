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

#include <vector.hpp>
#include <iostream>

namespace utec
{

vector::vector():
	data(new int[1]()),
	_size(0),
	_capacity(1)
{};

vector::vector(vector& other):
	_size(other._size),
	_capacity(other._capacity)
{
	data = new int[_capacity]();

	for(size_t i = 0; i < _size; ++i)
	{
		data[i] = other[i];
	}
}

vector::vector(size_t size):
	data(new int[size]()),
	_size(size),
	_capacity(size)
{};

vector& vector::operator=(vector& other)
{
	delete[] data;
	data = new int[other._capacity];

	_size = other._size;
	_capacity = other._capacity;

	for(size_t i = 0; i < _size; ++i)
	{
		data[i] = other[i];
	}

	return *this;
}

vector::~vector()
{
	delete[] data;
}

void vector::push_back(int value)
{
	if(_size == _capacity)
	{
		reserve(_capacity*2);
	}

	data[_size++] = value;
}

void vector::pop_back()
{
	--_size;
}

int* vector::insert(size_t index, int value)
{
	if(_size + 1 == _capacity)
	{
		reserve(_capacity*2);
	}
	for(size_t i = _size; i > index; --i)
	{
		data[i] = data[i-1];
	}
	++_size;
	return &(data[index] = value);
}

int* vector::erase(size_t index)
{
	for(size_t i = index; i < _size - 1; ++i)
	{
		data[i] = data[i+1];
	}
	--_size;
	return &data[index];
}

vector vector::operator+(vector& other)
{
	vector new_vector(_size + other.size());

	for(size_t i = 0; i < _size; ++i)
	{
		new_vector[i] = data[i];
	}

	for(size_t i = 0; i < other.size(); ++i)
	{
		new_vector[_size + i] = other[i];
	}

	return new_vector;
}

void vector::reserve(size_t size)
{
	int* new_data = new int[_capacity = size];

	for(size_t i = 0; i < _size; ++i)
	{
		new_data[i] = data[i];
	}
	delete[] data;

	data = new_data;
}

};

