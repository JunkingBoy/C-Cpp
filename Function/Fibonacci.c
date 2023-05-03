    /**
     * @Author: Lucifer
     * @Date: 5/3/2023, 5:40:35 PM
     * @LastEditors: Lucifer
     * @LastEditTime: 5/3/2023, 5:40:35 PM
     * Description: 通过斐波那契数列展示双递归使用
     * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
     */
    # include<stdio.h>
    unsigned long Fibonacci(unsigned n);

    int main(void)
    {
        Fibonacci(10);

        return 0;
    }

    unsigned long Fibonacci(unsigned n)
    {
        if (n > 2)
            return Fibonacci(n - 1) + Fibonacci(n - 2);
        else
            return 1;
    }