#include <stdio.h>
// #define LOW 1
// #define HIG 9
int main()
{
    // for循环嵌套打印九九乘法表
    // int i;
    // int j;
    // for(i = LOW; i <= HIG; i++){
    //     for(j = LOW; j <= (i + 1); j++){
    //         printf("%d * %d = %2d", j, i, (i * j));
    //         printf(" ");
    //     }
    //     printf("\n");
    // }

    // n的阶乘
    // int i = 0, n = 0;
    // int sum = 1;
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++){
    //     sum *= i;
    // }
    // printf("%d\n", sum);
    

    // 1! + 2! + 3! + ... + 10!
    int i = 0, n = 0, num = 0;
    int sum = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        sum *= i;
        num += sum;
    }
    printf("%d\n", num);
    
    return 0;


}