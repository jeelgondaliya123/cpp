#include<iostream>
#include<string>
using namespace std;
class test
{
    int testcode,nocandidate,centerreqd;
    char  description;
    void CALCNTR()
    {
        centerreqd = (nocandidate/100+1);
        
    }
    public:
    void SCHEDULE()
    {
        cout<<"enter value of testcode"<<endl;
        cin>>testcode;
        cout<<"enter description"<<endl;
        cin>>description;
        cout<<"enter nocandidate"<<endl;
        cin>>nocandidate;
        CALCNTR();
    }  
         
        
        
    void DISPTEST()
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"centerreqd:"<<centerreqd<<endl;

    }
};
int main()
{
    test t;
    t.SCHEDULE();
    t.DISPTEST();
}







    





