#include "pch.h"
#include "TestFixture.hpp"
#include "Algorithms.hpp"

namespace AlgorithmMain
{
	TEST_F(AlgorithmFixture, QuickSort_Random1000)
	{
		auto data = RandomData_with_elements(1000);
		const clock_t start = clock();
		QuickSort(data, 1000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Random10000)
	{
		auto data = RandomData_with_elements(10000);
		const clock_t start = clock();
		QuickSort(data, 10000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}
	
	TEST_F(AlgorithmFixture, QuickSort_Random100000)
	{
		auto data = RandomData_with_elements(100000);
		const clock_t start = clock();
		QuickSort(data, 100000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}
	
	TEST_F(AlgorithmFixture, QuickSort_Random1000000)
	{
		auto data = RandomData_with_elements(1000000);
		const clock_t start = clock();
		QuickSort(data, 1000000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Ascend1000)
	{
		auto data = AscendingData_with_elements(1000);
		const clock_t start = clock();
		QuickSort(data, 1000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Ascend10000)
	{
		auto data = AscendingData_with_elements(10000);
		const clock_t start = clock();
		QuickSort(data, 10000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Ascend100000)
	{
		auto data = AscendingData_with_elements(100000);
		const clock_t start = clock();
		QuickSort(data, 100000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Ascend1000000)
	{
		auto data = AscendingData_with_elements(1000000);
		const clock_t start = clock();
		QuickSort(data, 1000000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Descend1000)
	{
		auto data = DescendingData_with_elements(1000);
		const clock_t start = clock();
		QuickSort(data, 1000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Descend10000)
	{
		auto data = DescendingData_with_elements(10000);
		const clock_t start = clock();
		QuickSort(data, 10000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Descend100000)
	{
		auto data = DescendingData_with_elements(100000);
		const clock_t start = clock();
		QuickSort(data, 100000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, QuickSort_Descend1000000)
	{
		auto data = DescendingData_with_elements(1000000);
		const clock_t start = clock();
		QuickSort(data, 1000000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, QuickSort_RandomRetry1000)
	{
		auto data = RandomRetryData_with_elements(1000);
		const clock_t start = clock();
		QuickSort(data, 1000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, QuickSort_RandomRetry10000)
	{
		auto data = RandomRetryData_with_elements(10000);
		const clock_t start = clock();
		QuickSort(data, 10000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, QuickSort_RandomRetry100000)
	{
		auto data = RandomRetryData_with_elements(100000);
		const clock_t start = clock();
		QuickSort(data, 100000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, QuickSort_RandomRetry1000000)
	{
		auto data = RandomRetryData_with_elements(1000000);
		const clock_t start = clock();
		QuickSort(data, 1000000);

#ifdef _DEBUG
		cout << "QuickSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}
	
	TEST_F(AlgorithmFixture, QuickAfter_Border)
	{
		cout << endl;
		cout << "<--------------------------------------------------------------------------------------------------------------->" << endl;
		cout << endl;
	}
}