#include <stdio.h>

int main() 
{
    int num;

    printf("�п�J�@�Ӿ�ơG");
    scanf_s("%d", &num);

    if (num % 2 == 0) 
    {
        printf("%d �O���ơC\n", num);
    }
    else 
    {
        printf("%d �O�_�ơC\n", num);
    }

    return 0;
}
