#pragma once
#include "pch.h"

template<typename Type>
void MakesortMapap(map<char, deque<Type>>& sortMapap, deque<Type>& deq, int strLen)
{
	while (!deq.empty())
	{
		auto itStr = deq.front();
		sortMapap[(*itStr)[strLen]].push_back(itStr);
		deq.pop_front();
	}
}

template<typename Type>
void makeSortedWork(map<char, deque<Type>>& sortMap, deque<Type>& work)
{
	auto itMap = sortMap.begin();
	while (itMap != sortMap.end())
	{
		auto itDeq = itMap->second;
		while (!itDeq.empty())
		{
			work.push_back(itDeq.front());
			itDeq.pop_front();
		}
		++itMap;
	}
}

template<typename Type>
void CopySorted_To_Result(Type begin, Type end, deque<Type>& work)
{
	deque<iterator_traits<Type>::value_type> valueDeq;
	auto it = work.begin();
	while (it != work.end())
		valueDeq.push_back(*(*it++));

	auto valIt = valueDeq.begin();
	while (valIt != valueDeq.end())
		*begin++ = *valIt++;
}

template<typename Type>
int strLength(Type strIt)
{
	string str(*strIt);
	return str.length();
}

template<typename Type>
void AddStrToDeque(deque<Type>& work, deque<Type>& eqLenStr)
{
	auto deqIt = eqLenStr.begin();
	while (deqIt != eqLenStr.end())
		work.push_back(*deqIt++);
}

template<typename Type>
void RadixSort(Type begin, Type end)
{
	map<int, deque<Type>> diffLenStr;
	Type strIterator = begin;
	while (strIterator != end)
		diffLenStr[strLength(strIterator)].push_back(strIterator++);

	int currentStrLength = diffLenStr.rbegin()->first;
	deque<Type> work;
	AddStrToDeque(work, diffLenStr[currentStrLength]);
	map<char, deque<Type>>sortMap;

	while (--currentStrLength >= 0)
	{
		auto it = diffLenStr.find(currentStrLength);
		if (it != diffLenStr.end())
			AddStrToDeque(work, diffLenStr[currentStrLength]);

		MakesortMapap(sortMap, work, currentStrLength);
		makeSortedWork(sortMap, work);
		sortMap.clear();
	}

	CopySorted_To_Result(begin, end, work);
}