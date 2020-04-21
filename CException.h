#ifndef CEXCEPTION_H_INCLUDED
#define CEXCEPTION_H_INCLUDED
#include <cstring>
 class CException{
 private:
     char* mesaj;
 public:
     CException (const char*);
     void PrintErrMesaj( );
     ~CException();

 };


#endif // CEXCEPTION_H_INCLUDED
