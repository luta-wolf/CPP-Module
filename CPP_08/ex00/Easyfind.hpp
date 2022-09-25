#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <array>

template <typename T>

bool easyfind(T &cont, int to_find)
{
	typename T::iterator i;

	i = std::find(cont.begin(), cont.end(), to_find);
	if (i == cont.end())
		return (false);
	else
		return (true);
}

#endif
