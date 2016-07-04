#include<iostream>
extern int count;
void ext(void)
{
    int count=5;
    std::cout<< "Count is "<<count<<std::endl;
}
