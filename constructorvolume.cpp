#include<iostream>
using namespace std;
class volum 
{
    public:
    int cal(int l)
    {
        return l*l*l;
    }
    double cal(double a)
    {
        return 4/3*3.14*a*a*a;
    }
    float cal(float r,float l)
    {
        return 3.14*r*l;
    }
    int cal(int l,int b,int h)
    {
        return l*b*h;
    }
};
int main()
{
    volum v;
    cout<<"volume of cabe is:"<<v.cal(8)<<endl;
    cout<<"volume of sphre is:"<<v.cal(2.5)<<endl;
    cout<<"volume of cone is:"<<v.cal(6,5)<<endl;
    cout<<"volume of rectangle is:"<<v.cal(5,4,7)<<endl;
}

