#include<iostream>
using namespace std;
class Number{
    int real,img;
    public:
    void SetData(int a,int b)
    {
        real = a ,img = b;
    }
    void getdata()
    {
        cout<<"Number is:"<<real<<"-"<<img<<"i"<<endl;
    }
    Number operator--(int){
        Number t;
        t.real = real--;
        t.img = img--;
        img = img--;
        return t;
    }
};
int main()
{
    Number n,m;
    n.SetData(2,5);
    n.getdata();
    n--;
    m=n;
    m.getdata();
    
}