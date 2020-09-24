#include "class.h"


void Autotest(void)
{
     cout<<"Starting Autotest:"<<endl;
     int*m=new int[3];
     m[0]=9;
     m[1]=0;
     m[2]=0;
     int*k=new int[3];
     k[0]=0;
     k[1]=0;
     k[2]=1;
     ClntN a(true,3,m),b(false,3,k),d,c,u(true,3,m),h(false,3,k);
     c=a+b;
     d=u-h;
     if (c.sign()==true && c[0]==8 && c[1]==9 && c[2]==9 && d[0]==9 && d[1]==0 && d[2]==1 && d.sign()==true )
     {
         cout<<"Autotest passed! respect+"<<endl;
     }
     else
     {
         cout<<"Autotest failed! Wasted..."<<endl;
     }

    delete[]  m;
    m=NULL;
    delete[]  k;
    k=NULL;

}
