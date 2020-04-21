#ifndef CSIR_H_INCLUDED
#define CSIR_H_INCLUDED
#include <iostream>
using namespace std;
class CSir
{
private:
    char *ch;
    int size;
public:
    CSir();
    CSir(const char *x);
    CSir( const CSir &s);//constr de copiere
    ~CSir();
    CSir& operator=(const CSir& s);
    char * get_ch();
    friend ostream& operator <<(ostream & out, const CSir&s);
    bool operator==(const CSir&s)const;
    friend int comparare(const CSir& s,const CSir& s2);


};


#endif // CSIR_H_INCLUDED
