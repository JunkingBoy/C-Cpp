# include<stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.1439; // 科学计数法
    long double dip = 5.32e-5;
    
    printf("%f 能被写成: %e\n", aboat, aboat);
    printf("%a ...\n", aboat);
    printf("%f 能被写成: %e\n", abet, abet);
    printf("%Lf 能被写成: %Le\n", dip, dip);

    getchar();

    return 0;
}