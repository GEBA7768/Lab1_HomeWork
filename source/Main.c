//25�L�r���D



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




//26���ƧP�_



#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("�п�J��Ӿ�ơA�ڷ|�i�D�A�Ĥ@�ӼƬO���O�ĤG�Ӽƪ�����\n");

    int num1;
    int num2;
    scanf_s("%d%d", &num1, &num2);

    if (num2 == 0)
    {
        printf("�����J0��!\n");
    }
    else
    {
        if (num1 % num2 == 0)
        {
            printf("�Ĥ@�ӼƬO�ĤG�Ӽƪ����Ƴ�!\n");
        }
        else
        {
            printf("�Ĥ@�ӼƤ��O�ĤG�Ӽƪ�����!\n");
        }
    }

    return 0;
}



//33���O���D





/*:�ݭn�i�H��J�����e:
a) �@��Ѫ��`���{��
b) �T�o�@���� / �[�ڦh�ֿ�
c) �����@���� / �[�گ��p�h�֤���
d) �@�Ѫ������O
e) �@�Ѫ��q��O(�L���O)*/
/*:�p���k:a��c(�[�ڼ�)��b(�o��h�[�ڭn�h�ֿ�)+d+e(��˩T�w�����O)*/


#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("�Ш̧ǿ�J�U�����Ӽ�:\n", "a) �@��Ѫ��`���{��\n", "b) �T�o�@���� / �[�ڦh�ֿ�\n", "c) �����@���� / �[�گ��p�h�֤���\n", "d) �@�Ѫ������O\n", "e) �@�Ѫ��q��O(�L���O)/n");
    printf("a �@��Ѫ��`���{��\n");
    printf("b �T�o�@���� / �[�ڦh�ֿ�\n");
    printf("c �����@���� / �[�گ��p�h�֤���\n");
    printf("d �@�Ѫ������O\n");
    printf("e �@�Ѫ��q��O(�L���O)\n");

    float num1;
    float num2;
    float num3;
    float num4;
    float num5;
    float total;

    scanf_s("%f%f%f%f%f", &num1, &num2, &num3, &num4, &num5);

    total = num1 / num3 * num2 + num4 + num5;

    printf("�A�}���@�ѻݭn��@ %f ��", total);



    return 0;
}



//21 �L��

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



//27 �L���r��

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



//31 ����ߤ�

#include <stdio.h>

int main() {
    int i;

    printf("number\tsquare\tcube\n");

    for (i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}



//23 �T�Ӿ�Ƥ�j�p

#include <stdio.h>

int main()
{
    int a, b, c;
    int max, min;

    printf("�п�J�T�Ӿ�ơA�H�Ů���j�G");
    scanf_s("%d %d %d", &a, &b, &c);

    // ��l�� max �M min ���Ĥ@�Ӽ�
    max = min = a;

    // ����ĤG�Ӽ�
    if (b > max)
    {
        max = b;
    }
    if (b < min)
    {
        min = b;
    }

    // ����ĤT�Ӽ�
    if (c > max)
    {
        max = c;
    }
    if (c < min)
    {
        min = c;
    }

    printf("�̤j�ȬO�G%d\n", max);
    printf("�̤p�ȬO�G%d\n", min);

    return 0;
}



//24 �_�ư��ƧP�_

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



//32 BMI���q


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
