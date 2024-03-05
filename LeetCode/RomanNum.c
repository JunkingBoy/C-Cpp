/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-22 11:24:52
 * @Description: 罗马数映射数字,注意在C当中如何使用ASCII码来表示字符
 */
# include<string.h>

int romanToInt(char* s) {
    int sValue[26];
    /**
     * 由于罗马数有对应的字符.最小字符'I'在罗马数当中表示1,在ASCII码当中为66,所以声明的数组空间为26,使用的存储位置从数组第8位开始
    */
   sValue['I' - 'A'] = 1;
   sValue['V' - 'A'] = 5;
   sValue['X' - 'A'] = 10;
   sValue['L' - 'A'] = 50;
   sValue['C' - 'A'] = 100;
   sValue['D' - 'A'] = 500;
   sValue['M' - 'A'] = 1000;

   int ans = 0;
   int n = strlen(s);
   for (int i = 0; i < n; i++)
   {
        int value = sValue[s[i] - 'A'];
        if (i < n - 1 && value < sValue[s[i + 1] - 'A'])
            ans -= value;
        else
            ans += value;
   }

   return ans;  
}