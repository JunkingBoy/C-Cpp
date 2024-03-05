/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-23 21:45:23
 * @Description: 
 */

# include<stdlib.h>
# include<uthash/uthash.h>
/**
 * 创建hashTable,存储数组的值作为key,值得索引作为value
*/
struct hashTable
{
    int key;
    int value;
    /**
     * 定义指针箭头指向结构体
    */
    UT_hash_handle hh;
};

/* 返回结构体指针 */
struct hashTable * hashTable;

/**
 * 提供给结构体使用的方法
*/
struct hashTable * find(int iKey)
{
    struct hashTable * temp;
    HASH_FIND_INT(hashTable, &iKey, temp);
    return temp;
}

/**
 * 修改结构体的方法
*/
void insert(int iKey, int iVal)
{
    struct hashTable * it = find(iKey);
    if (it == NULL)
    {
        /**
         * malloc在stdlib.h宏中定义了.为动态分配内存的函数
        */
        struct hashTable * temp = malloc(sizeof(struct hashTable));
        temp->key = iKey, temp->value = iVal;
        HASH_ADD_INT(hashTable, key, temp);
    }else
    {
        it->value = iVal;
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    hashTable = NULL;
    for (int i = 0; i < numsSize; i++)
    {
        struct hashTable * it = find(target - nums[i]);
        if (it != NULL)
        {
            int * ret = malloc(sizeof(int) * 2);
            ret[0] = it->value, ret[1] = i;
            * returnSize = 2;
            return ret;
        }
        insert(nums[i], i);
    }

    * returnSize = 0;
    return NULL;
}
