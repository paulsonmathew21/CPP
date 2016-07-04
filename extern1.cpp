#include<iostream>
#include"extern2.cpp"
int count ;
extern void ext();
main()
{
    count = 5 ;
    ext();
}
