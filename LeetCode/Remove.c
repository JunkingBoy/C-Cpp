/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-23 23:40:48
 * @Description: 移除数组中重复元素
 */
/**
 * 双索引夹逼
*/

int removeDuplicates(int* nums, int numsSize) {
    // 空数组返回0 -> numsSize为数组长度
    if (numsSize == 0)
        return 0;
    
    // 设置双索引
    int first = 1;
    int last = 1;

    while (first < numsSize)
    {
        /**
         * 如果当前索引值不等于上一个索引值.那么保留当前索引值的值.并且当前索引增大
        */
       if (nums[first] != nums[first - 1])
       {
            nums[last] = nums[first];
            // last递增.指向下一个索引 -> 他始终记录前一个值
            ++last;
       }
       ++first;
    }

    return last;
}
