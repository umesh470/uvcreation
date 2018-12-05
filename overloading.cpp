#include<iostream>
#include<iomanip>
using namespace std;
float a=13;
void convert()
{
    float x;
    x=a;
    cout<<"total inches="<<x*12<<endl;
}

void convert(float x)
{
    cout<<"total inches="<<x*12<<endl;
}
inline void convert(float x,float y)
{
  cout<<"total inches="<<x*12+y<<endl;
}
int main()
{

    float b;
    float a;

    cout<<"enter feet"<<endl;
    cin>>a;
    cout<<"enter inch"<<endl;
    cin>>b;
    int c;
    cout<<"enter choice"<<endl;
    cout<<"1.with no argument"<<endl;
    cout<<"2.with one argument"<<endl;
    cout<<"3.with two argument"<<endl;
    cin>>c;
    switch(c)
    {
    case 1:
        convert();
        break;
    case 2:
        convert(a);
        break;
    case 3:
        convert(a,b);
break;
    default:
        cout<<"Dear user your option is unavialable";

    }

    return 0;

}
