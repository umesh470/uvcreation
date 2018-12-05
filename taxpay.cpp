#include<iostream>
#include<iomanip>
using namespace std;

inline void netsalary(int x)
{
    cout<<"net salary after tax clearance is"<<setw(5)<<x*0.9<<endl;
}
int main()
{
    int y;
    cout<<"enter the salary"<<endl;
    cin>>y;
    netsalary(y);
    return 0;
}
