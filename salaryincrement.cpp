#include<iostream>
#include<iomanip>
using namespace std;

inline void netsalary(int x,float y)
{
    cout<<"net salary="<<setw(5)<<x+x*y/100<<endl;
}
int main()
{
    int a=35000;
    int b=25000;
    int c=24000;
    int d=18000;

    cout<<"salary of chief executive officer" <<a<<endl;
    cout<<"salary of information officer" <<b<<endl;
    cout<<"salary of system analyst" <<c<<endl;
    cout<<"salary of programmer" <<d<<endl;
    netsalary(a,9);
    netsalary(b,10);
    netsalary(c,12);
    netsalary(d,12);
    return 0;
}

