#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	int *p;

    printf("Input number of elements: ");
    scanf("%d", &n);
    p = (int*)calloc(n, sizeof(int));

    for(i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("The values of elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }


    free(p);
}