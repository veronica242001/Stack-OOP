#include "CStiva.h"
#include "CException.h"
#include <iostream>
#include <cstring>
using namespace std;
CStiva::CStiva()
{
    st= new CSir[max];
    curr_nr=-1;

}
CStiva::CStiva( const CStiva& S){
    this->curr_nr=S.curr_nr;
    st= new CSir[max];
    for(int i=0;i<=this->curr_nr;i++)
    this->st[i]=S.st[i];
}
void CStiva::push(const CSir &s)
{
    if(curr_nr==max-1)
        throw(CException("stack overflow"));/// " stack overflow"
    curr_nr++;
    st[curr_nr]=s;
}
int CStiva::isempty()
{
    if( curr_nr==-1)
        return 1;
    return 0;
}
void CStiva ::set_nr(int x)
{
    curr_nr=x;
}
int CStiva::get_nr()
{
    return curr_nr;
}
CSir CStiva::get_val(int i)
{
    return this->st[i];
}
void CStiva::set_val(int i, const CSir&ob)
{
    st[i]=ob;
}
int CStiva::get_max(){
 return max;
}
void CStiva:: pop()
{
    if(this->isempty()) throw(CException("stack underflow"));//"stack underflow"
    curr_nr-=1;

}
void CStiva::list()
{  if(this->isempty()) throw(CException("Stiva goala, nu aveti ce afisa"));
    for(int i=0; i<=curr_nr; i++)
        cout<<this->st[i]<<" ";
}
bool CStiva::operator==(const CStiva&s)const
{
    if(this->curr_nr!=s.curr_nr)
        return 0;
    for(int i=0; i<curr_nr; i++)
        if(!(this->st[i]==s.st[i]))
            return 0;
    return 1;
}
CStiva & CStiva:: operator=(const CStiva&s)
{
    this->curr_nr=s.curr_nr;
    for(int i=0; i<=curr_nr; i++)
        this->st[i]=s.st[i];

    return *this;

}
CStiva& operator+(const CStiva &s, const CStiva &s1)
{
    CStiva* s2=new CStiva;

    for(int i=0; i<=s.curr_nr; i++)
        s2->push(s.st[i]);

    for(int i=0; i<=s1.curr_nr; i++)
        s2->push(s1.st[i]);

    return *s2;

}
void CStiva::verificare(const char *x)
{
    CStiva S;
    int ok=1;
    for(int i=0; i<strlen(x) && ok; i++)
    {
        if(x[i]==')')
            {if(S.isempty())
            {
                ok=0;
                break;
            }
            else
            {if( comparare(S.get_val(S.get_nr()),"(")==0)
                S.pop();
               else
                S.push(")");
            }}
        if(x[i]=='(') S.push("(");

    }

    if(ok==1 && S.isempty())
        cout<<"Sir corect\n";
    else
        cout<<"Sir incorect\n";
}


CStiva::~CStiva()
{
    curr_nr=-1;
    delete []st;

}
