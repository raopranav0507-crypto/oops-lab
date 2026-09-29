#include<iostream>
using namespace std;
void swapref(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void swapptr(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x=10,y=20;
    swapref(x,y);
    cout << "after swap ref:x" << x << "y=" << y << endl;
    swapptr(&x, &y);
    cout << "after swap ptr:x" << x << "y=" << y << endl;
    int &alias = x;
    alias =99;
    cout<<"x via alias +"<< x <<endl;
    return 0;
}
  