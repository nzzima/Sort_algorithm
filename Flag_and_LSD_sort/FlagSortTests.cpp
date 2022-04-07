#include "pch.h"
#include "FlagSort.hpp"
#include "TestFixture.hpp"

namespace AlgorithmMain
{
	TEST_F(AlgorithmFixture, FlagSort_Random1000)
	{
		auto data = RandomData_with_elements(1000);
		const clock_t start = clock();
		FlagSort(data, data + 1000);

		cout << "FlagSort time:  " << clock() - start << " ms" << endl;
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, FlagSort_Random10000)
	{
		auto data = RandomData_with_elements(10000);
		const clock_t start = clock();
		FlagSort(data, data + 10000);

		cout << "FlagSort time:  " << clock() - start << " ms" << endl;
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, FlagSort_Random100000)
	{
		auto data = RandomData_with_elements(100000);
		const clock_t start = clock();
		FlagSort(data, data + 100000);

		cout << "FlagSort time:  " << clock() - start << " ms" << endl;
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, FlagSort_Random1000000)
	{
		auto data = RandomData_with_elements(1000000);
		const clock_t start = clock();
		FlagSort(data, data + 1000000);

		cout << "FlagSort time:  " << clock() - start << " ms" << endl;
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}
}
