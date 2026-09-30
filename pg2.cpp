#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j;
    string s;
    cout <<"enter a word:";
    cin >>s;
    cout<<"length:"<<s.len();
    cout<<"upper:";
    for(char c:s)
    cout<< to upper(c);
cout<<endl;
bool pal=true;
for(size_t ;i=0;j=(s.size()-1);i<j;i++;j--);
if(s[i]!=s[j]){
    pal=false;
    break;
}
}
cout<<s<<(pal?"is":"isnot")<<"a palindrome\n";
size_t pos=s.find("an");
if(pos!=string :: npos)
cout<<"An found at index "<<pos<<endl;
else
cout<<"an not found\n";
return 0;
}