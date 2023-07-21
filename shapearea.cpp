#include<iostream>
using namespace std;


class area 
{
    public:
    area()
    {
         int l=23;
            cout<<" area of cricle :"<<3.14*l*l<<endl;
    }

    area (int b)
    {
        cout<<" area of square :"<<b*b<<endl;
    }


    area(int leanth ,int  width)
    {
        cout<<"area of rectuangle :"<<leanth*width<<endl;
    }

    area ( double b,double h)
    {
        cout<<"area of triangle :"<<(b*h)/2<<endl;

    }
    
    area ( int a,int b, int c)
    {
        cout<<"simple interst :"<<(a*b*c)/100<<endl; 
    }
};

int main ()
{
    area a,b(5),c(6,6),d(7,8),e(3,45,4);    
}