#include<iostream>
using namespace std;
double avg1(int *val,int siz);
double avg2(int val[5],int siz);
double avg3(int val[],int siz);
int main()
{
    int valu[5]={5,10,15,20,25};
    cout<<"passing array to function in three methods"<<endl;
    double average;
    average=avg1(valu,5);
    cout<<average<<endl;
    average=avg2(valu,5);
    cout<<average<<endl;
    average=avg2(valu,5);
    cout<<average<<endl;
    return 0;
}
double avg1(int *val, int siz)
{
    int sum=0;
    double avg;
    for(int i=0;i<siz;i++)
    {
        sum+=*(val++);
    }
    cout<<"sum is "<<sum<<endl;
    avg=sum/siz;
    return avg;

}
double avg2(int val[5], int siz)
{
    int sum=0;
    double avg;
    for(int i=0;i<siz;i++)
    {
        sum+=val[i];
    }
    cout<<"sum is "<<sum<<endl;
    avg=sum/siz;
    return avg;

}
double avg3(int val[], int siz)
{
    int sum=0;
    double avg;
    for(int i=0;i<siz;i++)
    {
        sum+=val[i];
    }
    cout<<"sum is "<<sum<<endl;
    avg=sum/siz;
    return avg;

}
