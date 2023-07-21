#include<iostream>
using namespace std;
class marksheet
{
    public:
    int english,hindi,gujrati,total;
    float per;
    char studentname;
   
    
    marksheet()
    {
        cout<<"english marks:"<<endl;
        cin>>english;
        cout<<"hindi marks:"<<endl;
        cin>>hindi;
        cout<<"gujrati marks:"<<endl;
        cin>>gujrati;
        total=(english+hindi+gujrati);
        
    }
     void result()
     {
        cout<<"english:"<<english<<endl;
        cout<<"hindi:"<<hindi<<endl;
        cout<<"gujrati:"<<gujrati<<endl;
        cout<<"total"<<total<<endl;
        cout<<"per"<<per<<endl;
     }
    
};
    int main()
    {
        marksheet m;
    }


