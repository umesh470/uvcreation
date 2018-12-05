//To pass the structure to the function and print the date
#include<iostream>
#include<iomanip>
using namespace std;
struct date
{
    int yy,mm,dd;
};
inline void read(date d)
{
    cout<<d.mm<<"/"<<d.dd<<"/"<<d.yy<<endl;
}
int main()
{
    date d;
    cout<<setw(100)<<"enter the year,month,day"<<endl;
    cin>>d.yy;
    cin>>d.mm;
    cin>>d.dd;
    read(d);
    return 0;
}
