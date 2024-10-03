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
