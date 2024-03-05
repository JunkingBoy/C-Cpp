/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-03-02 13:49:35
 * @Description: 字符串长度匹配.
 */
#include <string.h>

int lengthOfLastWord(char* s) {
    int ans = 0;

    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            // 判断是否是已经检查完了最后一个单词
            if (ans != 0)
                break;
            
            continue;
        }

        ans += 1;
    }

    return ans;
}