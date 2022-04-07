#include "pch.h"
#include "TestFixture.hpp"
#include "Algorithms.hpp"

namespace AlgorithmMain
{
	TEST_F(AlgorithmFixture, Distributive_sort100)
	{
		long temp[100];
		long data[100];

		for (long& i : data)
			i = rand() % 100;
		
		const clock_t start = clock();
		distributive_sort(data, temp, 100);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "DistributiveSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100));
	}

	TEST_F(AlgorithmFixture, Distributive_sort1000)
	{
		long temp[1000];
		long data[1000];

		for (long& i : data)
			i = rand() % 1000;

		const clock_t start = clock();
		distributive_sort(data, temp, 1000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "DistributiveSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Distributive_sort10000)
	{
		long temp[10000];
		long data[10000];

		for (long& i : data)
			i = rand() % 10000;

		const clock_t start = clock();
		distributive_sort(data, temp, 10000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "DistributiveSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Distributive_sort_Str1)
	{
		char data[10] = {'5', '4', '6', '3', '7', '2', '8', '1', '9', '0'};
		char temp[10];
		
		const clock_t start = clock();
		distributive_sort(data, temp, 10);
		const clock_t finish = clock();
		ShowData(data, 10);

#ifdef _DEBUG
		cout << "DistributiveSort time:  " << finish - start << " ms" << endl;
#endif
	}

	TEST_F(AlgorithmFixture, DistributiveAfter_Border)
	{
		cout << endl;
		cout << "<--------------------------------------------------------------------------------------------------------------->" << endl;
		cout << endl;
	}
}
