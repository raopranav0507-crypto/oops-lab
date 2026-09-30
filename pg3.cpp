#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string s="verification";
cout<< "first 4: " << s.substr(0,4) << endl;
cout<<"from 4:"<< s.substr(4) << endl;
int c=s.compare("verifiy");
cout<<"compare vs 'verifiy': "<<(c<0?"<":c>0?">":"=")<<endl;
int freq[26]={0};
for(char ch:5)
if(isalpha(unsigned char)ch)
freq[tolower(ch)-'a']++;
cout<<"letter counts:";
for(int i=0;i<26;i++)
if(freq[i])
cout<<char('a'+i)<<"!"<<freq[i]<<" ";
cout<<endl;
return 0;
}