#include "pch.h"
#include "TestFixture.hpp"
#include "Algorithms.hpp"

namespace AlgorithmMain
{
	TEST_F(AlgorithmFixture, Descend_MergeSort_Random1000)
	{
		auto data = RandomData_with_elements(1000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 999);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_Random10000)
	{
		auto data = RandomData_with_elements(10000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 9999);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_Random100000)
	{
		auto data = RandomData_with_elements(100000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 99999);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_Ascend1000)
	{
		auto data = AscendingData_with_elements(1000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 999);
		const clock_t finish = clock();


#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}
	
	TEST_F(AlgorithmFixture, Descend_MergeSort_Ascend10000)
	{
		auto data = AscendingData_with_elements(10000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 9999);
		const clock_t finish = clock();


#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_Ascend100000)
	{
		auto data = AscendingData_with_elements(100000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 99999);
		const clock_t finish = clock();


#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_Descend1000)
	{
		auto data = DescendingData_with_elements(1000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 999);
		const clock_t finish = clock();


#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_Descend10000)
	{
		auto data = DescendingData_with_elements(10000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 9999);
		const clock_t finish = clock();


#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_Descend100000)
	{
		auto data = DescendingData_with_elements(100000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 99999);
		const clock_t finish = clock();


#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_RandomRetry1000)
	{
		auto data = RandomRetryData_with_elements(1000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 999);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Descend_MergeSort_RandomRetry10000)
	{
		auto data = RandomRetryData_with_elements(10000);
		const clock_t start = clock();
		descending_merge_sort(data, 0, 9999);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Random1000)
	{
		auto data = RandomData_with_elements(1000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Random10000)
	{
		auto data = RandomData_with_elements(10000);
		const clock_t start = clock();
		ascending_merge_sort(data, 10000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Random100000)
	{
		auto data = RandomData_with_elements(100000);
		const clock_t start = clock();
		ascending_merge_sort(data, 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Random1000000)
	{
		auto data = RandomData_with_elements(1000000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Ascend1000)
	{
		auto data = AscendingData_with_elements(1000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Ascend10000)
	{
		auto data = AscendingData_with_elements(10000);
		const clock_t start = clock();
		ascending_merge_sort(data, 10000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Ascend100000)
	{
		auto data = AscendingData_with_elements(100000);
		const clock_t start = clock();
		ascending_merge_sort(data, 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Ascend1000000)
	{
		auto data = AscendingData_with_elements(1000000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Descend1000)
	{
		auto data = DescendingData_with_elements(1000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Descend10000)
	{
		auto data = DescendingData_with_elements(10000);
		const clock_t start = clock();
		ascending_merge_sort(data, 10000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_Descend100000)
	{
		auto data = DescendingData_with_elements(100000);
		const clock_t start = clock();
		ascending_merge_sort(data, 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}
	
	TEST_F(AlgorithmFixture, Ascend_MergeSort_Descend1000000)
	{
		auto data = DescendingData_with_elements(1000000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_RandomRetry1000)
	{
		auto data = RandomRetryData_with_elements(1000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_RandomRetry10000)
	{
		auto data = RandomRetryData_with_elements(10000);
		const clock_t start = clock();
		ascending_merge_sort(data, 10000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_RandomRetry100000)
	{
		auto data = RandomRetryData_with_elements(100000);
		const clock_t start = clock();
		ascending_merge_sort(data, 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, Ascend_MergeSort_RandomRetry1000000)
	{
		auto data = RandomRetryData_with_elements(1000000);
		const clock_t start = clock();
		ascending_merge_sort(data, 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "MergeSort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_Random100000)
	{
		auto data = RandomData_with_elements(100000);
		const clock_t start = clock();
		stable_sort(data, data + 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_Descend100000)
	{
		auto data = DescendingData_with_elements(100000);
		const clock_t start = clock();
		stable_sort(data, data + 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_Ascend100000)
	{
		auto data = AscendingData_with_elements(100000);
		const clock_t start = clock();
		stable_sort(data, data + 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_RandomRetry100000)
	{
		auto data = RandomRetryData_with_elements(100000);
		const clock_t start = clock();
		stable_sort(data, data + 100000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_Random1000000)
	{
		auto data = RandomData_with_elements(1000000);
		const clock_t start = clock();
		stable_sort(data, data + 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_Descend1000000)
	{
		auto data = DescendingData_with_elements(1000000);
		const clock_t start = clock();
		stable_sort(data, data + 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_Ascend1000000)
	{
		auto data = AscendingData_with_elements(1000000);
		const clock_t start = clock();
		stable_sort(data, data + 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, STL_stable_sort_RandomRetry1000000)
	{
		auto data = RandomRetryData_with_elements(1000000);
		const clock_t start = clock();
		stable_sort(data, data + 1000000);
		const clock_t finish = clock();

#ifdef _DEBUG
		cout << "STL_Sort time:  " << finish - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}
	
	TEST_F(AlgorithmFixture, MergeAfter_Border)
	{
		cout << endl;
		cout << "<--------------------------------------------------------------------------------------------------------------->" << endl;
		cout << endl;
	}
}