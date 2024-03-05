/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-26 17:24:02
 * @Description: 
 */
/**
 * 通过缩短对比将字符数组不匹配部分置空
*/
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
        return "";
    
    /**
     * 第一个字符串作为比较对象
     * 如果第二个字符串有一位字符不相等,则置空
    */

    for (int i = 0; i < strlen(strs[0]); i++)
    {
        /* 第一位字符串 */
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[0][i] != strs[j][i])
                /** 置空 */
                strs[0][i] = '\0';
        }
    }
    
    return strs[0];
}