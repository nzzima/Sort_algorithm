#pragma once
#define MAXSTACK 64
#include "pch.h"

/*---------------------------------------------------------------------S h e l l   s o r t--------------------------------------------------------------------------------*/

template<typename Type>
void shell_sort_classic(Type* data, int size)
{
	int i, j, step;
	int tmp;
	for (step = size / 2; step > 0; step /= 2)
	{
		for(i = step; i < size; ++i)
		{
			tmp = data[i];
			for (j = i; j >= step; j -= step)
			{
				if (tmp < data[j - step])
					data[j] = data[j - step];
				else
					break;
			}
			data[j] = tmp;
		}
	}
}

template<typename Type>
vector<Type> shell_sort_vector (vector<Type> data, vector<int> steps)
{
	auto h = 0;
	auto size = data.size();
	for (auto iter = steps.end() - 1; iter != steps.begin(); --iter)
	{
		if (*iter <= size / 3)
		{
			h = *iter;
			break;
		}
	}
	for (; h > 0; --h)
	{
		for (auto i = 0; i < size - h; ++i)
		{
			for (auto j = i; j >= 0 && data[j] > data[j + h]; --j)
			{
				swap(data[j], data[j + h]);
			}
		}
	}
	return data;
}

/*----------------------------------------------------------------------P y r a m i d   s o r t-----------------------------------------------------------------------------------------*/

template<typename Type>
void HeapDown(Type* data, int size, int i)  //Создание кучи с корнем i. 
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2; 

	if (left < size && data[left] > data[largest])
		largest = left;

	if (right < size && data[right] > data[largest])
		largest = right;

	if (largest != i)
	{
		swap(data[i], data[largest]);
		HeapDown(data, size, largest);
	}
}

template<typename Type>
void HeapSort(Type data, int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		HeapDown(data, size, i);

	for (int i = size - 1; i >= 0; i--)
	{
		swap(data[0], data[i]);
		HeapDown(data, i, 0);
	}
}

/*----------------------------------------------N o n - r e c u r s i v e   Q u i c k   s o r t-----------------------------------------------------------------------------------------*/

template<typename Type>
void QuickSort (Type* data, int size)
{
	long leftBorderStack[MAXSTACK], rightBorderStack[MAXSTACK];		// Стек запросов
																	// Каждый запрос задается парой значений,
																	// левой(leftBorderStack) и правой(rightBorderStack)
																	// границами промежутка
	auto stackpos = 1; // Текущая позиция стека

	leftBorderStack[1] = 0;
	rightBorderStack[1] = size - 1;

	do {
		long leftBorder = leftBorderStack[stackpos];
		long rightBorder = rightBorderStack[stackpos];
		stackpos--;

		do {
			long ppos = (leftBorder + rightBorder) >> 1;		//Середина
			long i = leftBorder;
			long j = rightBorder;
			Type bearing = data[ppos];							// Опорный элемент
			
			do {
				while (data[i] < bearing) 
					i++;
				while (bearing < data[j]) 
					j--;
				if (i <= j) 
				{
					swap(data[i], data[j]);
					i++;
					j--;
				}
			} while (i <= j);

			if (i < ppos) 
			{ 
				if (i < rightBorder) 
				{ 
					stackpos++; 
					leftBorderStack[stackpos] = i;
					rightBorderStack[stackpos] = rightBorder;
				}
				rightBorder = j; 
			}
			else { 
				if (j > leftBorder) 
				{
					stackpos++;
					leftBorderStack[stackpos] = leftBorder;
					rightBorderStack[stackpos] = j;
				}
				leftBorder = i;
			}
		} while (leftBorder < rightBorder); 
	} while (stackpos != 0); 
}

/*-----------------------------------------------------------------------------M e r g e  s o r t---------------------------------------------------------------------------------------*/

template <typename Type>
void descending_merge_sort(Type* data, int left, int right)
{
	if (left == right) return;
	auto middle = (left + right) / 2;

	descending_merge_sort(data, left, middle);
	descending_merge_sort(data, middle + 1, right);

	auto i = left;
	auto j = middle + 1;
	auto* temp = static_cast<int*>(malloc(right * sizeof(int)));

	for (auto step = 0; step < right - left + 1; step++)
	{
		if (j > right || ((i <= middle) && (data[i] < data[j])))
		{
			temp[step] = data[i];
			i++;
		}
		else
		{
			temp[step] = data[j];
			j++;
		}
	}
	for (auto step = 0; step < right - left + 1; ++step)
		data[left + step] = temp[step];
}

template <typename Type>
void ascending_merge_sort(Type* data, const int size)
{
	auto step = 1;  
	auto* temp = static_cast<int*>(malloc(size * sizeof(int)));
	while (step < size)
	{
		auto index = 0;
		auto left = 0;
		auto middle = left + step;
		auto right = left + step * 2;
		do
		{
			middle = middle < size ? middle : size;
			right = right < size ? right : size;
			auto i1 = left, i2 = middle;
			
			for (; i1 < middle && i2 < right; )
			{
				if (data[i1] < data[i2]) 
					temp[index++] = data[i1++];
				else 
					temp[index++] = data[i2++];
			}
			
			while (i1 < middle) 
				temp[index++] = data[i1++];
			
			while (i2 < right) 
				temp[index++] = data[i2++];
			
			left += step * 2; 
			middle += step * 2;
			right += step * 2;
			
		} while (left < size);
		
		for (auto i = 0; i < size; i++)
			data[i] = temp[i];
		step *= 2; 
	}
}

/*------------------------------------------------------------------D i s t r i b u t i v e  s o r t------------------------------------------------------------------------------------*/

template<typename Type>
void distributive (int byte, long N, Type* entrance, Type* sorted)
{
	long count[256]; 

	memset(count, 0, sizeof(count));
	for (int i = 0; i < N; i++) 
		++count[((entrance[i]) >> (byte * 8)) & 0xff];

	long index[256];
	index[0] = 0;

	for (auto j = 1; j < 256; j++) 
		index[j] = index[j - 1] + count[j - 1];
	
	for (auto k = 0; k < N; k++) 
		sorted[index[((entrance[k]) >> (byte * 8)) & 0xff]++] = entrance[k];
}

template<typename Type>
void distributive_sort(Type* entrance, Type* temp, long N)
{
	distributive(0, N, entrance, temp);
	distributive(1, N, temp, entrance);
	distributive(2, N, entrance, temp);
	distributive(3, N, temp, entrance);
}

/*---------------------------------------------------------------A d d i t i o n a l   f u n c t i o n s--------------------------------------------------------------------------------*/

vector<int> inline steps(const int size, const int t)
{
	vector<int> steps;
	for (auto i = 0; steps.size() < size; i = t * i + 1)
		steps.push_back(i);
	return steps;
}

template <typename Type>
void ShowData(Type* data, int size)
{
	std::cout << std::endl;
	for (auto i = 0; i < size; ++i)
	{
		std::cout << " " << data[i];
	}
	std::cout << std::endl;
}

template<typename Type>
void ShowVector(vector<Type> &vec)
{
	std::cout << std::endl;
	for (vector<Type>::iterator it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";
	std::cout << std::endl;
}