#pragma once
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


class ClntN
{
    bool s; int n; int *arr;
public:
    ClntN(){SetZero();}
    ClntN(const ClntN &b){CopyOnly(b);}
    ~ClntN(){Clean();}
    ClntN &operator=(const ClntN&b){if(this!=&b){Clean(); CopyOnly(b);} return *this;}
    void Clean(){delete[] arr; SetZero();}
    void SetZero(){arr=NULL; s=NULL; n=0;}
    void CopyOnly(const ClntN &b){n=b.n; s=b.s; arr=new int[n]; for(int i=0; i<n; i++){if(b.arr[i]>=0 && b.arr[i]<10)arr[i]=b.arr[i];else throw 2;}}
    ClntN operator+(const ClntN&b);
    ClntN operator-(const ClntN&b);
    void CopyOnly(const bool r,const int m, const int* brr){n=m; s=r; arr=new int[n]; for(int i=0; i<n; i++){if(brr[i]>=0 && brr[i]<10)arr[i]=brr[i]; else throw 4;}}
    ClntN(const bool r,const int m, const int* brr){CopyOnly(r,m,brr);}
    int &operator[](int i){if(i<0 || i>=n) throw 3; return arr[i];}
    bool sign(){return s;}
    void print();
};


void Autotest(void);
ostream &operator<<(ostream &cout,  ClntN &s);
ClntN FuncVvoda(const char t);













































































































































































































































#define int_r cout<<"Daschan opyat spisivaesh!"<<endl;
