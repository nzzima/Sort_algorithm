#pragma once
#include "pch.h"

template<typename Type>
void setMedian(Type begin, Type end)
{
    int n = end - begin;
	
    if (n < 2)
        return;
	
    int middle = n / 2;
    auto median = begin[middle];
	
    if (*begin > median && median > *end)
    {
        begin[middle] = *begin;
        *begin = median;
    }
    else if (!(*begin > *end && median > *begin))
    {
        median = *begin;
        *begin = *end;
        *end = median;
    }
}

template<typename Type>
void swapIt(Type left, Type right)
{
    auto temp = *left;
    *left = *right;
    *right = temp;
}

template<typename Type>
void SwapKeyElements(Type itP, Type leqv, Type reqv, int countLeft, int countRight)
{
    Type itLeft = itP - 1, itRight = itP + 1;
    --leqv;
    ++reqv;
	
    while (countLeft != 0)
    {
        swapIt(leqv, itLeft);
        --leqv;
        --itLeft;
        --countLeft;
    }

    while (countRight != 0)
    {
        swapIt(reqv, itRight);
        ++reqv;
        ++itRight;
        --countRight;
    }
}

template<typename Type>
void FlagSort(Type begin, Type end)
{
    std::stack<Type> stack;
    stack.push(end);
    stack.push(begin);
	
    Type itL, itP, leqv, reqv;
	
    auto temp = *begin, current = *begin;
	
    while (!stack.empty())
    {
        begin = stack.top();
        stack.pop();
        end = stack.top();
        stack.pop();
    	
        setMedian(begin, end);
    	
        if (end <= begin)
            continue;
    	
        itL = begin + 1;
        itP = end;
    	
        int countLeft = 0, countRight = 0;
    	
        leqv = itL;
        reqv = itP;
        current = *begin;
    	
        while (true)
        {
            while (itL < itP && *itL <= current)
            {
                if (*itL == current)
                {
                    swapIt(leqv, itL);
                    ++countLeft;
                    ++leqv;
                }
                ++itL;
            }

            while (itP >= itL && *itP >= current)
            {
                if (*itP == current)
                {
                    swapIt(itP, reqv);
                    ++countRight;
                    --reqv;
                }
                --itP;
            }


            if (itL < itP)
                swapIt(itL++, itP--);
        	
            else break;
        }
        *begin = *itP;
        *itP = current;

        SwapKeyElements(itP, leqv, reqv, countLeft, countRight);

        stack.push(itP - 1 - countLeft);
        stack.push(begin);
        stack.push(end);
        stack.push(itP + 1 + countRight);
    }
}