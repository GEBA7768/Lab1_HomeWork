#include <stdio.h>

int main() {
    int choice;
    float weight, height, bmi;

    printf("�п�ܳ���G\n");
    printf("1. �S�M�^�o\n");
    printf("2. ����M��\n");
    printf("��J�z����ܡ]1��2�^�G");
    scanf_s("%d", &choice);

    if (choice == 1) 
    {
        printf("�п�J�魫�]�S�^�G");
        scanf_s("%f", &weight);
        printf("�п�J�����]�^�o�^�G");
        scanf_s("%f", &height);

        bmi = (weight * 703) / (height * height);
    }
    else if (choice == 2) 
    {
        printf("�п�J�魫�]����^�G");
        scanf_s("%f", &weight);
        printf("�п�J�����]�̡^���G(��J��춷����Ex:1.72)�G");
        scanf_s("%f", &height);

        bmi = weight / (height * height);
    }
    else 
    {
        printf("�L�Ī���ܡC\n");
        return 1;
    }

    printf("�z�� BMI �O�G%.2f\n", bmi);

    return 0;
}
