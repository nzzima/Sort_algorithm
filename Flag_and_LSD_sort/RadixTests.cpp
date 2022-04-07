#include "pch.h"
#include "LSDSort.hpp"

TEST(RadixTests, Sort_strings_with_equal_length_simple)
{
	list<string> strList{ "aaa", "ccc", "bbb" };

	cout << "--------------------------------------------------------------------" <<endl;
	cout << "Before sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;
	
	RadixSort(strList.begin(), strList.end());

	cout << endl;
	cout << "After sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl;

	EXPECT_TRUE(is_sorted(strList.begin(), strList.end()));
}

TEST(RadixTests, Sort_strings_with_equal_length_medium)
{
	list<string> strList{ "bac", "acb", "cab" };

	cout << "--------------------------------------------------------------------" << endl;
	cout << "Before sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;

	RadixSort(strList.begin(), strList.end());

	cout << endl;
	cout << "After sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl;

	EXPECT_TRUE(is_sorted(strList.begin(), strList.end()));
}

TEST(RadixTests, Sort_strings_with_equal_length_hard)
{
	list<string> strList{ "aaabca", "cbfdsc", "babhgb" };

	cout << "--------------------------------------------------------------------" << endl;
	cout << "Before sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;

	RadixSort(strList.begin(), strList.end());

	cout << endl;
	cout << "After sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl;

	EXPECT_TRUE(is_sorted(strList.begin(), strList.end()));
}

TEST(RadixTests, Sort_strings_with_different_length)
{
	list<string> strList{ "hello", "world", "another", "time", "ok" };

	cout << "--------------------------------------------------------------------" << endl;
	cout << "Before sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;

	RadixSort(strList.begin(), strList.end());

	cout << endl;
	cout << "After sorting: ";
	for (auto it = strList.begin(); it != strList.end(); ++it)
		cout << *it << " ";
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl;

	EXPECT_TRUE(is_sorted(strList.begin(), strList.end()));
}