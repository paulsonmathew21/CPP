#include <stdio.h>
struct name{
   int a;
   float b;
};
int main(){
    struct name *ptr,p[10];
    ptr=p;            /* Referencing pointer to memory address of p */
    int b,a=10;
    b=a;
    while(a--)
    {
        printf("Enter integer: ");
        scanf("%d",&ptr->a);
        printf("Enter number: ");
        scanf("%f",&ptr->b);
        ptr++;
    }
    while(b--)
    {
        ptr--;
        printf("Displaying: ");
        printf("%d%f",ptr->a,ptr->b);
    }


    return 0;
}
