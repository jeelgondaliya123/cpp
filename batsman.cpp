#include<iostream>
#include<string>
using namespace std;
class batsman{
   
    
    int bcode, inning, notout, runs, batavg;
    string bname;
    public:
    batsman();65
    void calcavg(){
        batavg=runs/(inning-notout);
    }
    
    void readdata(string h){
        cout<<"Enter Batsman Code : ";
        cin>>bcode;
        bname = h;
        cout<<"Enter Played Inning : ";
        cin>>inning;
        cout<<"Enter Not-Out Inning : ";
        cin>>notout;
        cout<<"Enter Batsman Runs : ";
        cin>>runs;
        calcavg();
    }
    void displaydata(){
        cout<<"Batsman Code : "<<bcode<<endl;
        cout<<"Batsman Name : "<<bname<<endl;
        cout<<"Played Inning : "<<inning<<endl;
        cout<<"Not-Out Inning : "<<notout<<endl;
        cout<<"Batsman Runs : "<<runs<<endl;
        cout<<"Average : "<<batavg<<endl;
    }
};
int main(){
    batsman b;
    
}