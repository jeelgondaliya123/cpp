#include<iostream>
using namespace std;
class Rect{
    int l,b;
    friend Rect add(Rect,Rect,Rect);
    public:
    void setData(int x,int y)
    {
        l = x, b = y;
    }
    void getdata()
    {
        cout<<"area is:"<<l*b<<endl;
    }
};
    Rect add(Rect x,Rect y,Rect z)
    {
        Rect t;
        t.l = x.l + y.l + z.l;
        t.b = x.b + y.b + z.b;
        return t;
    }
    int main()
    {
        Rect a,b,c,d;
        a.setData(1,5);
        a.getdata();
        b.setData(3,5);
        b.getdata();
        d.setData(5,5);
        d.getdata();
        c=add(a,b,d);
        c.getdata();
    }