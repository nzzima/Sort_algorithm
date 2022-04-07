#include "pch.h"
#include "TestFixture.hpp"
#include "Algorithms.hpp"

namespace AlgorithmMain
{
	TEST_F(AlgorithmFixture, HeapTest_Random1000)
	{
		auto data = RandomData_with_elements(1000);
		const clock_t start = clock();
		HeapSort(data, 1000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}
	
	TEST_F(AlgorithmFixture, HeapTest_Random10000)
	{
		auto data = RandomData_with_elements(10000);
		const clock_t start = clock();
		HeapSort(data, 10000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Random100000)
	{
		auto data = RandomData_with_elements(100000);
		const clock_t start = clock();
		HeapSort(data, 100000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Random1000000)
	{
		auto data = RandomData_with_elements(1000000);
		const clock_t start = clock();
		HeapSort(data, 1000000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Ascend1000)
	{
		auto data = AscendingData_with_elements(1000);
		const clock_t start = clock();
		HeapSort(data, 1000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Ascend10000)
	{
		auto data = AscendingData_with_elements(10000);
		const clock_t start = clock();
		HeapSort(data, 10000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Ascend100000)
	{
		auto data = AscendingData_with_elements(100000);
		const clock_t start = clock();
		HeapSort(data, 100000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Ascend1000000)
	{
		auto data = AscendingData_with_elements(1000000);
		const clock_t start = clock();
		HeapSort(data, 1000000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Descend1000)
	{
		auto data = DescendingData_with_elements(1000);
		const clock_t start = clock();
		HeapSort(data, 1000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Descend10000)
	{
		auto data = DescendingData_with_elements(10000);
		const clock_t start = clock();
		HeapSort(data, 10000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Descend100000)
	{
		auto data = DescendingData_with_elements(100000);
		const clock_t start = clock();
		HeapSort(data, 100000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, HeapTest_Descend1000000)
	{
		auto data = DescendingData_with_elements(1000000);
		const clock_t start = clock();
		HeapSort(data, 1000000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, HeapTest_RandomRetry1000)
	{
		auto data = RandomRetryData_with_elements(1000);
		const clock_t start = clock();
		HeapSort(data, 1000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}

	TEST_F(AlgorithmFixture, HeapTest_RandomRetry10000)
	{
		auto data = RandomRetryData_with_elements(10000);
		const clock_t start = clock();
		HeapSort(data, 10000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, HeapTest_RandomRetry100000)
	{
		auto data = RandomRetryData_with_elements(100000);
		const clock_t start = clock();
		HeapSort(data, 100000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, HeapTest_RandomRetry1000000)
	{
		auto data = RandomRetryData_with_elements(1000000);
		const clock_t start = clock();
		HeapSort(data, 1000000);

#ifdef _DEBUG
		cout << "HeapSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Random1000elements)
	{
		auto vec = RandomVec_with_elements(1000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;		
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Random10000elements)
	{
		auto vec = RandomVec_with_elements(10000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Random100000elements)
	{
		auto vec = RandomVec_with_elements(100000);
		
		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Random1000000elements)
	{
		auto vec = RandomVec_with_elements(1000000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Ascend1000elements)
	{
		auto vec = AscendingVec_with_elements(1000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Ascend10000elements)
	{
		auto vec = AscendingVec_with_elements(10000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Ascend100000elements)
	{
		auto vec = AscendingVec_with_elements(100000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Ascend1000000elements)
	{
		auto vec = AscendingVec_with_elements(1000000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Descend1000elements)
	{
		auto vec = DescendingVec_with_elements(1000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Descend10000elements)
	{
		auto vec = DescendingVec_with_elements(10000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Descend100000elements)
	{
		auto vec = DescendingVec_with_elements(100000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_Descend1000000elements)
	{
		auto vec = DescendingVec_with_elements(1000000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_RandomRetry1000elements)
	{
		auto vec = RandomRetryVec_with_elements(1000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_RandomRetry10000elements)
	{
		auto vec = RandomRetryVec_with_elements(10000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_RandomRetry100000elements)
	{
		auto vec = RandomRetryVec_with_elements(100000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, Time__STL_on_RandomRetry1000000elements)
	{
		auto vec = RandomRetryVec_with_elements(1000000);

		const clock_t start = clock();
		make_heap(vec.begin(), vec.end());
		sort_heap(vec.begin(), vec.end());

#ifdef _DEBUG
		cout << "STLSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(vec.begin(), vec.end()));
	}

	TEST_F(AlgorithmFixture, HeapAfter_Border)
	{
		cout << endl;
		cout << "<--------------------------------------------------------------------------------------------------------------->" << endl;
		cout << endl;
	}
}