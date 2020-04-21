#include <iostream>
#include <cstring>
#include "CStiva.h"
#include "CSir.h"
#include "CStivaOrd.h"
#include "CException.h"
using namespace std;

int main()
{
   try{

     CStiva St1;
     CSir S1("sir1");

     St1.push(S1);
     St1.push("sir2");
     //St1.push("sir3");
     St1.pop();
     //St1.pop();
     St1.list();
     cout<<"\n";
     CStivaOrd  StOrd;
     StOrd.push(S1);
     StOrd.push("sir3");
     StOrd.push("sir2");
     StOrd.list();
     cout<<"\n";
     CStiva St2;
     St2=St1;
     if(St2==St1)
       cout<<"stive identice\n";
    else
       cout<<"stive diferite\n";

       CStiva St3=St1+St2;
       St3.list();

    cout<<"\n";
    char x[]="(+()(67)-()()=1()())";
    CStiva::verificare(x);
   }
  catch( CException& e)
  { e.PrintErrMesaj();
  }
}
