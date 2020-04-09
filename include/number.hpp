// Number
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
#include <cmath>

template <typename T>
class Number
{
private:
	T value;
public:
	Number(){};

	Number(T value):
		value(value)
	{};

	Number(const Number<T>& other):
		value(other.value)
	{};

	Number<T>& operator=(const Number<T>& other)
	{
		value = other.value;
		return *this;
	}

	Number<T> operator+(Number<T> other)
	{
		return value + other.value;
	}

	Number<T> operator-(Number<T> other)
	{
		return value - other.value;
	}

	Number<T> operator*(Number<T> other)
	{
		return value * other.value;
	}

	Number<T> operator/(Number<T> other)
	{
		return value / other.value;
	}

	Number<T> operator^(Number<T> other)
	{
		return std::pow(value,other.value);
	}


	bool operator>(const Number<T>& other)
	{
		return value > other.value;
	}

	bool operator<(const Number<T>& other)
	{
		return value < other.value;
	}

	bool operator==(const Number<T>& other)
	{
		return value == other.value;
	}


	inline bool operator>=(const Number<T>& other)
	{
		return !(*this < other);
	}

	inline bool operator<=(const Number<T>& other)
	{
		return !(*this > other);
	}

	inline bool operator!=(const Number<T>& other)
	{
		return !(*this == other);
	}

	operator T()
	{
		return value;
	}

	template <typename T2>
	friend std::ostream& operator <<(std::ostream& os, const Number<T2>& i)
	{
		return os << i.value;
	}

	template <typename T2>
	friend std::istream& operator >>(std::istream& is, Number<T2>& i)
	{
		return is >> i.value;
	}

	inline Number<T>& operator+=(const Number<T>& other)
	{
		return *this = *this + other;
	}

	inline Number<T>& operator-=(const Number<T>& other)
	{
		return *this = *this - other;
	}

	inline Number<T>& operator*=(const Number<T>& other)
	{
		return *this = *this * other;
	}

	inline Number<T>& operator/=(const Number<T>& other)
	{
		return *this = *this / other;
	}

	inline Number<T>& operator^=(const Number<T>& other)
	{
		return *this = *this ^ other;
	}

};
