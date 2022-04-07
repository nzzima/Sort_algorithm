#include "pch.h"
#include "TestFixture.hpp"
#include "Algorithms.hpp"

namespace AlgorithmMain
{
	TEST_F(AlgorithmFixture, ShellTest_classic_Random1000)
	{
		auto data = RandomData_with_elements(1000);
		const clock_t start = clock();
		shell_sort_classic(data, 1000);

#ifdef _DEBUG
		cout << "ShellSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000));
	}
	
	TEST_F(AlgorithmFixture, ShellTest_classic_Random10000)
	{
		auto data = RandomData_with_elements(10000);
		const clock_t start = clock();
		shell_sort_classic(data, 10000);

#ifdef _DEBUG
		cout << "ShellSort time:  "<< clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 10000));
	}

	TEST_F(AlgorithmFixture, ShellTest_classic_Random100000)
	{
		auto data = RandomData_with_elements(100000);
		const clock_t start = clock();
		shell_sort_classic(data, 100000);

#ifdef _DEBUG
		cout << "ShellSort time:  " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 100000));
	}

	TEST_F(AlgorithmFixture, ShellTest_classic_Random1000000)
	{
		auto data = RandomData_with_elements(1000000);
		const clock_t start = clock();
		shell_sort_classic(data, 1000000);

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(data, data + 1000000));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Random1000_with_2steps)
	{
		auto vec = RandomVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Random1000_with_3steps)
	{
		auto vec = RandomVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Random10000_with_2steps)
	{
		auto vec = RandomVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Random10000_with_3steps)
	{
		auto vec = RandomVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Ascend1000_with_2steps)
	{
		auto vec = AscendingVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Ascend1000_with_3steps)
	{
		auto vec = AscendingVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Ascend10000_with_2steps)
	{
		auto vec = AscendingVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Ascend10000_with_3steps)
	{
		auto vec = AscendingVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Descend1000_with_2steps)
	{
		auto vec = DescendingVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Descend1000_with_3steps)
	{
		auto vec = DescendingVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Descend10000_with_2steps)
	{
		auto vec = DescendingVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_Descend10000_with_3steps)
	{
		auto vec = DescendingVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_RandomRetry1000_with_2steps)
	{
		auto vec = RandomRetryVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_RandomRetry1000_with_3steps)
	{
		auto vec = RandomRetryVec_with_elements(1000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_RandomRetry10000_with_2steps)
	{
		auto vec = RandomRetryVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 2));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellTest_vector_RandomRetry10000_with_3steps)
	{
		auto vec = RandomRetryVec_with_elements(10000);
		const clock_t start = clock();
		vector<int> sort_vec = shell_sort_vector(vec, steps(20, 3));

#ifdef _DEBUG
		cout << "ShellSort time: " << clock() - start << " ms" << endl;
#endif
		ASSERT_TRUE(is_sorted(sort_vec.begin(), sort_vec.end()));
	}

	TEST_F(AlgorithmFixture, ShellAfter_Border)
	{
		cout << endl;
		cout << "<--------------------------------------------------------------------------------------------------------------->" << endl;
		cout << endl;
	}
}