//encapsulation using class & object
#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
    string owner;
    double balance;
    public:
    void open(const string& name,double initial){
        owner=name;
        balance=initial>0?initial:0;
    }
    void deposit(double amount){
        if(amount>0)
        balance+=amount;
    }
    bool withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            return true;
        }
        else
        return false;
    }
    double getbalance()const{
        return balance;
    }
    string getowner()const{
        return owner;
    }
    
};
int main(){
    bankaccount a;
    a.open("pranav",1000);
    a.deposit(500);
    if(!a.withdraw(2000))
    cout<<"withdraw denied\n";
    a.withdraw(700);
    cout<<a.getowner()<<"balance="<<a.getbalance()<<endl;
    return 0;
    
}