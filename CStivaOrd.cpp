#include "CStivaOrd.h"
#include "CException.h"
#include <iostream>
#include<cstring>
using namespace std;

CStivaOrd::CStivaOrd() :CStiva()
{
    cout<<"const_stiva_ord\n";
}
void CStivaOrd:: push(const CSir &ob)
{  if(this->get_nr()==this->get_max()-1)
         throw(CException("stack overflow"));

    if(this->get_nr()==-1)
    {
        this->set_nr(this->get_nr()+1);
        this->set_val(0,ob);
    }
    else
    {
        int i=0;
        while(i<=this->get_nr() && comparare(ob, this->get_val(i))>0)
            i+=1;
        this->set_nr(this->get_nr()+1);
        for(int j=this->get_nr(); j>i; j--)
            this->set_val(j,this->get_val(j-1));
        this->set_val(i,ob) ;
    }

}

CStivaOrd::~CStivaOrd()
{
    cout<<"cdestr";
}


