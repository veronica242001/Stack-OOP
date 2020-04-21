#include "CException.h"
#include <iostream>
#include <cstring>
using namespace std;
CException::CException( const char *x)
{  mesaj= new char[strlen(x)];
    strcpy(this->mesaj,x);}
void CException::PrintErrMesaj( )
{ cout<<mesaj;}
CException::~CException()
{ delete [] mesaj;
}
