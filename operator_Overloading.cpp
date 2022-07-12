#include<iostream>
using namespace std;
class loc
{
    int logitude,latitude;
    public:
    loc() 
    {
        logitude=0;
        latitude=0;
    }
    loc(int lg,int lt)
    {
        logitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout<<"\n Logitude:"<<logitude<<"";
        cout<<"\t Latitude:"<<latitude<<"";
    }
    loc operator+(loc);
};
loc loc :: operator+(loc op2)
{
    loc temp;
    temp.logitude =++logitude+op2.logitude;
    temp.latitude =++latitude+op2.latitude;
    return temp;
}
int main()
{
    loc ob1(10,20),ob2(5,30),ob3;
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    ob3.show();
    return 0;
}
