#ifndef CSTIVA_H_INCLUDED
#define CSTIVA_H_INCLUDED
#include "CSir.h"
class CStiva
{
private:
    static const int max=100;
    CSir *st;
    int curr_nr;

public:
    CStiva();
    CStiva( const CStiva& S);
    ~CStiva();
    void push(const CSir& s);
    void pop();
    void list();
    int isempty();
    bool operator==(const CStiva& s)const;
    void set_nr(int x);
    int get_nr();
    void set_val(int i, const CSir&ob);
    CSir get_val(int i) ;
    int get_max();
    CStiva & operator=(const CStiva&s);
    friend CStiva& operator+(const CStiva &s, const CStiva &s1) ;
    static void verificare(const char *x);

};


#endif // CSTIVA_H_INCLUDED
