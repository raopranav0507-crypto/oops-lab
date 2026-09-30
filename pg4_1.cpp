//constructor &destructor
#include<iostream>
using namespace std;
class tracer{
    int i;
    public:
    tracer(int i)id(i){
        cout<<"Constructing #"<<id<<endl;
    }
    ~tracer(){
        cout<<"Destructing #"<<id<<endl;
    }
};
int main(){
    cout<<"enter block\n";
    {tracer a(1),b(2);
    cout<<".....working....\n";}
    cout<<"left block\n";
    return 0;

}