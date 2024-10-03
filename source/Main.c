//25印字問題



#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("PPPPPPPPP\n");
    printf("    P   P\n");
    printf("    P   P\n");
    printf("    P   P\n");
    printf("     P P\n");

    printf("\n");


    printf("  ]]\n");
    printf(" ]\n");
    printf("]\n");
    printf(" ]\n");
    printf("  ]]]]]]]\n");

    printf("\n");

    printf("DDDDDDDDD\n");
    printf("D       D\n");
    printf("D       D\n");
    printf(" D     D \n");
    printf("  DDDDD \n");


    return 0;
}




//26倍數判斷



#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("請輸入兩個整數，我會告訴你第一個數是不是第二個數的倍數\n");

    int num1;
    int num2;
    scanf_s("%d%d", &num1, &num2);

    if (num2 == 0)
    {
        printf("不能輸入0喔!\n");
    }
    else
    {
        if (num1 % num2 == 0)
        {
            printf("第一個數是第二個數的倍數喔!\n");
        }
        else
        {
            printf("第一個數不是第二個數的倍數!\n");
        }
    }

    return 0;
}



//33車費問題





/*:需要可以輸入的內容:
a) 一整天的總里程數
b) 汽油一公升 / 加侖多少錢
c) 平均一公升 / 加侖能行駛多少公里
d) 一天的停車費
e) 一天的通行費(過路費)*/
/*:計算方法:a除c(加侖數)乘b(這麼多加侖要多少錢)+d+e(兩樣固定的雜費)*/


#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("請依序輸入下面五個數:\n", "a) 一整天的總里程數\n", "b) 汽油一公升 / 加侖多少錢\n", "c) 平均一公升 / 加侖能行駛多少公里\n", "d) 一天的停車費\n", "e) 一天的通行費(過路費)/n");
    printf("a 一整天的總里程數\n");
    printf("b 汽油一公升 / 加侖多少錢\n");
    printf("c 平均一公升 / 加侖能行駛多少公里\n");
    printf("d 一天的停車費\n");
    printf("e 一天的通行費(過路費)\n");

    float num1;
    float num2;
    float num3;
    float num4;
    float num5;
    float total;

    scanf_s("%f%f%f%f%f", &num1, &num2, &num3, &num4, &num5);

    total = num1 / num3 * num2 + num4 + num5;

    printf("你開車一天需要花共 %f 元", total);



    return 0;
}



//21 印圖

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("*********       ***         *           *\n");
    printf("*       *      *   *       ***         * *\n");
    printf("*       *     *     *     *****       *   *\n");
    printf("*       *     *     *       *        *     *\n");
    printf("*       *     *     *       *       *       *\n");
    printf("*       *     *     *       *        *     *\n");
    printf("*       *     *     *       *         *   *\n");
    printf("*       *      *   *        *          * *\n");
    printf("*********       ***         *           *\n");



    printf("\n");




    return 0;
}



//27 印金字塔型

#include <stdio.h>

int main() {
    printf("Using 5 printf statements:\n");
    // Using exactly 5 printf statements
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");

    printf("\nUsing 1 printf statement:\n");
    // Using a single printf statement
    printf("    *\n   ***\n  *****\n *******\n*********\n");

    return 0;
}



//31 平方立方

#include <stdio.h>

int main() {
    int i;

    printf("number\tsquare\tcube\n");

    for (i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}



//23 三個整數比大小

#include <stdio.h>

int main()
{
    int a, b, c;
    int max, min;

    printf("請輸入三個整數，以空格分隔：");
    scanf_s("%d %d %d", &a, &b, &c);

    // 初始化 max 和 min 為第一個數
    max = min = a;

    // 比較第二個數
    if (b > max)
    {
        max = b;
    }
    if (b < min)
    {
        min = b;
    }

    // 比較第三個數
    if (c > max)
    {
        max = c;
    }
    if (c < min)
    {
        min = c;
    }

    printf("最大值是：%d\n", max);
    printf("最小值是：%d\n", min);

    return 0;
}



//24 奇數偶數判斷

#include <stdio.h>

int main()
{
    int num;

    printf("請輸入一個整數：");
    scanf_s("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d 是偶數。\n", num);
    }
    else
    {
        printf("%d 是奇數。\n", num);
    }

    return 0;
}



//32 BMI測量


#include <stdio.h>

int main() {
    int choice;
    float weight, height, bmi;

    printf("請選擇單位制：\n");
    printf("1. 磅和英寸\n");
    printf("2. 公斤和米\n");
    printf("輸入您的選擇（1或2）：");
    scanf_s("%d", &choice);

    if (choice == 1)
    {
        printf("請輸入體重（磅）：");
        scanf_s("%f", &weight);
        printf("請輸入身高（英寸）：");
        scanf_s("%f", &height);

        bmi = (weight * 703) / (height * height);
    }
    else if (choice == 2)
    {
        printf("請輸入體重（公斤）：");
        scanf_s("%f", &weight);
        printf("請輸入身高（米）註：(輸入單位須為米Ex:1.72)：");
        scanf_s("%f", &height);

        bmi = weight / (height * height);
    }
    else
    {
        printf("無效的選擇。\n");
        return 1;
    }

    printf("您的 BMI 是：%.2f\n", bmi);

    return 0;
}
