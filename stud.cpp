#include<iostream>
using namespace std;
class student
{
    int x,m1,m2,m3,total;
    float per;
    public:
    student()
    {
        cout<<"\nEnter m1 m2 m3:";
        cin>>m1>>m2>>m3;
        total=m1+m2+m3;
        cout<<"\nTotal:"<<total;
        per=total/3;
        cout<<"\nPercentage:"<<per;
    }
    student(int a)
    {
        x=a;
        cout<<"\nEnter m1 m2 m3:";
        cin>>m1>>m2>>m3;
        total=m1+m2+m3;
        cout<<"\nTotal:"<<total;
        per=total/3;
        cout<<"\nPercentage:"<<per;
    }
};
int main()
{
    student s1[3];
}
