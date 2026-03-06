#include <stdio.h>
#include <stdlib.h>
struct arrayADT
{
    int total_size;
    int use_size;
    int *ptr;
};
void createarray(struct arrayADT *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->use_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}
void show(struct arrayADT *a)
{

    for (int i = 0; i < a->use_size; i++)
    {
        printf("%d", (a->ptr)[i]);
    }
}
void setval(struct arrayADT *a)
{
    int n;
    for (int i = 0; i < a->use_size; i++)
    {
        printf("Enter the value: %d\n",i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct arrayADT marks;
    createarray(&marks, 10, 2);
    printf("We are running set values\n");
    setval(&marks);
    printf("Values are:\n");
    show(&marks);
}