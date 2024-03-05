/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-03-02 21:17:22
 * @Description: 
 */
#include <stdlib.h>

int* ListCopy(int* arr, int size);

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int index = digitsSize - 1;
    int pos = 1;

    while (index >= 0)
    {
        digits[index] += 1;
        if (digits[index] == 10)
        {
            digits[index] == 0;
            index--;
        }
        else
            break;
    }

    if (index == -1)
    {
        int *arr = ListCopy(digits, digitsSize);

        *returnSize = digitsSize + 1;

        return arr;
    }
    
    *returnSize = digitsSize;

    return digits;
}

int* ListCopy(int* targetArr, int size)
{
    int *ansArr = (int*)malloc(sizeof(int)*(size + 1));

    ansArr[0] = 1;

    for (int i = 1; i <= size; i++)
    {
        ansArr[i] = targetArr[i - 1];
    }

    return ansArr;
}