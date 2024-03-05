/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-22 11:27:17
 * @Description: LeetCode简单题两数之和之暴力枚举
 */
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    /**
     * 循环找到目标值
    */
   for (int i = 0; i < numsSize; i++)
   {
    for (int j = i + 1; j < numsSize; j++)
    {
        if (nums[i] + nums[j] == target)
        {
            /** 创建数组.malloc为动态分配内存区域 -> 找到以后再分配内存区域.找到之前不分配内存区域 */
            int * ret = malloc(sizeof(int) * 2);
            ret[0] = i;
            ret[1] = j;
            * returnSize = 2;
            return ret;
        }
    }
   }

    * returnSize = 0;
}