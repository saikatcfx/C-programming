#include <stdio.h>
struct employee
{
    int id;
    char name[60];
    float salary;
};
void main()
{
    struct employee e[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter  id:");
        scanf("%d", &e[i].id);
        fflush(stdin);
        printf("enter  name:");
        gets(e[i].name);
        printf("enter salary:");
        scanf("%f", &e[i].salary);
    }
    printf("_______________________\n");

    for (i = 0; i < 3; i++)
    {
        printf("id %d\n", e[i].id);
        printf(" name %s\n", e[i].name);
        printf("salary %.2f\n", e[i].salary);
    }
}