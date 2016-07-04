#include<iostream>
void fun(void);
static int count = 10;
main()
{
    while(count--)
    {
        fun();
    }
    return 0;
}
void fun(void)
{
    static int i = 5;
    i++;
    std::cout<<"i is "<< i;
    std::cout<<"and count is " << count<< std::endl;
}
