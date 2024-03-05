/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-26 17:22:37
 * @Description: 移除重复元素算法题
 */
/**
 * 双索引夹逼
*/


int removeElement(int* nums, int numsSize, int val) {
    // 创建左右索引
    int left = 0;
    int right = 0;

    while (left < numsSize)
    {
        if (nums[left] != val)
        {
            nums[right] = nums[left];
            ++right;
        }
        ++left;
    }

    return right;
}