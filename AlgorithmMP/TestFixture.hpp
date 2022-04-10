#pragma once
#include "pch.h"

namespace AlgorithmMain
{
	class AlgorithmFixture : public ::testing::Test
	{
	protected:

		AlgorithmFixture() = default;

		~AlgorithmFixture() = default;

		void SetUp() override {}
		
		static int* RandomData_with_elements(int size)
		{
			int* data = new int[size];
			for (auto i = 0; i <= size; ++i)
				data[i] = rand() % size;
			return data;
		}

		static int* AscendingData_with_elements(int size)
		{
			int* data = new int[size];
			for (auto i = 0; i <= size; ++i)
				data[i] = i;
			return data;
		}

		static int* DescendingData_with_elements(int size)
		{
			int* data = new int[size];
			for (auto i = 0; i <= size; ++i)
				data[i] = size - i;
			return data;
		}

		static int* RandomRetryData_with_elements(int size)
		{
			int* data = new int[size];
			for (auto i = 0; i <= size; ++i)
				data[i] = rand() % (size / 10); //If the size is set to 100,1000,10000,100000, etc.
			return data;
		}
		
		vector<int> RandomVec_with_elements(int size)
		{
			_randomVector.resize(size);
			for (auto i = 0; i < size; ++i)
				_randomVector[i] = rand() % size;
			return _randomVector;
		}

		vector<int> AscendingVec_with_elements(int size)
		{
			_ascendingVector.resize(size);
			for (auto i = 0; i < size; ++i)
				_ascendingVector[i] = i;
			return _ascendingVector;
		}

		vector<int> DescendingVec_with_elements(int size)
		{
			_descendingVector.resize(size);
			for (auto i = 0; i < size; ++i)
				_descendingVector[i] = size - i;
			return _descendingVector;
		}

		vector<int> RandomRetryVec_with_elements(int size)
		{
			_randomRetryVector.resize(size);
			for (auto i = 0; i < size; ++i)
				_randomRetryVector[i] = rand() % (size / 10); //If the size is set to 100,1000,10000,100000, etc.
			return _randomRetryVector;
		}

		void TearDown() override {}

		vector<int> _randomVector;
		vector<int> _ascendingVector;
		vector<int> _descendingVector;
		vector<int> _randomRetryVector;
	};
}