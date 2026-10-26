//deeep copy assignment operator
#include <iostream>
#include <cstring>

class text{
    char *buf;
    public:
    text(const char *s = ""){buff = new char[strlen(s)+1];strcpy(buff.s);}
    text(const text &o) {buff  = new char[strlen(o.buff)+1];strcpy(buff, o.buff);}
    text& operator=(const text &o ){
        if (this!=&o){
        delete[] buf;
        buf = new char[strlen(o.buf)+1];
        strcpy(buf,o.buf);
    }
    return *this;
}
`text() {delete[] buf;}
void show()const { cout << buf<<endl;}
};
int main(){
    text a("alpha"),b("beta");
    b=a;
    a.show();b.show();
    return 0;
}



