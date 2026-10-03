//area
#include<iostream>
using namespace std;
inline double square(double x){return x*x;} //square function
double area (double r){return 3.14*r*r;} //circle function
int area(int l,int b) {return l*b;} //rectangle function
double area(double b,double h){return 0.5*b*h;} //triangle function
int main(){
    cout<< "square(6.5): "<<square(6.5)<<endl;
    cout<<"circle(r=2)"<<area(2)<<endl;
    cout<<"rectangle(l=5,b=3): "<<area(5,3)<<endl;
    cout<<"triangle(b=4,h=6): "<<area(4,6)<<endl;
    return 0;
}