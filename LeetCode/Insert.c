/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-29 18:23:03
 * @Description: 
 */
/**
 * 二分查找
*/
int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int ans = numsSize;
    
    while (left <= right)
    {
        // 确定mid区间
        int mid = ((right - left) >> 1) + left;
        if (target <= nums[mid])
        {
            // 记录当前中间值
            ans = mid;
            // 从区间左边查找,缩小右值
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    
    return ans;
}