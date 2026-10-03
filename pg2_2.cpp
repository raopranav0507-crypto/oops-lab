//simple intrest 
#include<iostream>
#include<string>
using namespace std;
void logMsg(const string &Msg, int level =1){
    const string tag[]={" ","INFO","WARNING","ERROR"};
    cout<<"["<< tag[level]<<"]"<<Msg<<endl;
}
double simpleIntrest(double principal,double years,double rate=7.5)
{return (principal*years*rate)/100;}

int main(){
    logMsg("system started");
    logMsg("low memory",2);
    cout<<" simple intrest="<<simpleIntrest(10000,2)<<endl;
    cout<<" simple intrest="<<simpleIntrest(10000,2,9.5)<<endl;
    return 0;
}
