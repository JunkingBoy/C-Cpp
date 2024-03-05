/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-28 20:35:07
 * @Description: 长字符与短字符匹配
 */
#include <string.h>
#include <stdbool.h>

int strStr(char* haystack, char* needle) {
    // 判断字符长度
    int a = strlen(haystack);
    int b = strlen(needle);
    if (a < b)
        return -1;
    
    // 长字符索引一次与短字符索引进行匹配.匹配次数为长短字符索引差值
    for (int i = 0; i <= a - b; i++)
    {
        // i记录长数组索引
        bool ans = true;
        // j记录短数组索引
        for (int j = 0; j < b; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                ans = false;
                break;
            }
        }
        
        if (ans)
            return i;
    }
    
    return -1;
}
