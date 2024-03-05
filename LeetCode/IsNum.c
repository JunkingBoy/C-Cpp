/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-23 21:46:45
 * @Description: 判断回文数
 */
# include<stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 ==0 && x != 0))
    {
        return false;
    }

    /**
     * 一次缩短目标值倍数 -> 10倍
    */
    int revertedNumber = 0;
    while (x > revertedNumber)
    {
        /**
         * 缩短回文数,x % 10为翻转过来的第一位数 -> 原数最后一位
        */
       revertedNumber = revertedNumber * 10 + x % 10;
       /* 缩小原数 */
       x /= 10;
    }
    
    return x == revertedNumber || x == revertedNumber / 10;
    /**
     * 结果的第二个判断用于去除位数为奇数个数的数 -> 将半翻转的数缩小十倍
    */
}