#ifndef ALGOTEST_HPP
#define ALGOTEST_HPP

#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
#include <iostream>
#include <string>

template <typename T>
inline
void INSERT_ELEMS (T& coll, int first, int last)
{
	for (int i=first; i<=last; ++i)
		coll.insert(coll.end(), i);
}

// PRINT_ELEMENTS()
// - prints optional string optcstr followed by
// - all elements of the collection coll
// - separated by spaces
template <typename T>
inline
void PRINT_ELEMS (const T& coll, const std::string& wtf="")
{
	std:: cout << wtf;
	for (auto elem : coll)
	{
		std:: cout << elem << ' ';
	}
	std:: cout << std:: endl;
}

// PRINT_MAPPED_ELEMENTS()
// - prints optional string optcstr followed by
// - all elements of the key/value collection coll
// - separated by spaces
template <typename T>
inline
void PRINT_MAPPED_ELEMS (const T& coll,
	                       const std:: string& optscr="")
{
	std:: cout << optscr;
	for (auto elem : coll)
	{
		std:: cout << '[' << elem.first
		           << ',' << elem.second << "] ";
	}
	std:: cout << std:: endl;
}

#endif
