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
#include <number.hpp>
#include <vector.hpp>

int main()
{

	utec::vector vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);

	utec::vector vec2;
	vec.push_back(2);
	vec.push_back(2);
	vec.push_back(2);
	vec.push_back(2);

	utec::vector vec3(vec + vec2);

	vec3.pop_back();
	for(size_t i = 0; i < 100; ++i)
	{
		vec3.insert(1, i);
	}

	for(size_t i = 0; i < 10; ++i)
	{
		vec3.erase(1);
	}

	for(size_t i = 0; i < vec3.size(); ++i)
	{
		std::cout << vec3[i] << '\n';
	}

	return 0;
}
