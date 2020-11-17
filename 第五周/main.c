#include <stdio.h>
#include <stdlib.h>

int n;

struct Struct
{
    int id;
    double grades;
};

void struct_sort(struct Struct *student)
{
    double a;
    int b;
    for(int j = 0; j < n - 1; j++)
    {
        for(int i = j + 1; i < n; i++)
        {
            if(student[j].grades < student[i].grades)
            {
                a = student[j].grades;
                student[j].grades = student[i].grades;
                student[i].grades = a;
                b = student[j].id;
                student[j].id = student[i].id;
                student[i].id = b;
            }
        }
    }
}

int main(void)
{
    printf("������ѧ��������");
    scanf("%d", &n);
    struct Struct student[n];

    printf("������ѧ�ţ�");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &student[i].id);
    }

    printf("������ɼ���");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &student[i].grades);
    }

    struct_sort(student);

    printf("��������\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d %lf\n", student[i].id, student[i].grades);
    }

    system("pause");
    return 0;
}
