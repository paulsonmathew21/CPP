#include <stdio.h>
struct name{
   int a;
   float b;
};
int main(){
    struct name *ptr,p;
    ptr=&p;            /* Referencing pointer to memory address of p */
    printf("Enter integer: ");
    //scanf("%d",&(*ptr).a);
    scanf("%d",&ptr->a);
    printf("Enter number: ");
    //scanf("%f",&(*ptr).b);
    scanf("%f",&ptr->b);
    printf("Displaying: ");
    //printf("%d%f",(*ptr).a,(*ptr).b);
    printf("%d%f",ptr->a,ptr->b);
    return 0;
}
