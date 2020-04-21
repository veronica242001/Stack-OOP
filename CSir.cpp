#include "CSir.h"
#include <iostream>
#include <cstring>
using namespace std;
CSir::CSir()
{
    ch=NULL;
    size=0;
}
CSir::CSir(const char *x)
{
    this->size=strlen(x);
    ch=new char[size+1];
    for(int i=0; i<this->size; i++)
        ch[i]=x[i];

}
CSir::CSir(const CSir &s)
{
    this->size=s.size;
    ch=new char[size+1];
    for(int i=0; i<this->size; i++)
        ch[i]=s.ch[i];

}
ostream& operator <<(ostream & out, const CSir&s)
{
    for(int i=0; i<s.size; i++)
        out<<s.ch[i];
    return out;

}
CSir& CSir::operator=(const CSir& s)
{
    if(this!=&s)
    {
        if(this->size!=s.size)
        {
            delete []this->ch;
            this->size=s.size;
            this->ch=new char[s.size];
        }
        for(int i=0; i<s.size; i++)
            this->ch[i]=s.ch[i];
    }



    return *this;
}
bool CSir::operator==(const CSir&s)const
{
    if(this->size!=s.size)
        return 0;
    for(int i=0; i<size; i++)
        if(this->ch[i]!=s.ch[i])
            return 0;
    return 1;
}
char * CSir:: get_ch()
{
    return ch;
}
CSir::~CSir()
{
    size=0;
    delete []ch;
}
int comparare(const CSir& s,const CSir& s2)
{  if(s==s2)
      return 0;
    for(int i=0;i<s.size&&i<s2.size;i++)
        if( s.ch[i]<s2.ch[i])
              return -1;

          return 1;

}
