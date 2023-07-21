#include<iostream>
using namespace std;
class solid{
    int l=10,w=5,h=8;
    public:
    solid()
    {
        cout<<"show that volume of solid"<<endl;
    }

    
    void getdata()
    {
         cout<<"length value is:"<<l<<endl;
   
        cout<<"width value is  :"<<w<<endl;
        
        cout<<"height value is:"<<h<<endl;
        

    } 
    ~solid()
    {
       cout<<"volume of solid shape is :"<<l*w*h;
       
    }  
   
   
   
};
int main()
{
    solid s;
    s.getdata();
}