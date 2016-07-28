
#include<iostream>
using namespace std;

int main()
{
  int x,y,z,a,b,c,d,e,f=0;
    for(e=0;e<2;e++)
     for(d=0;d<3;d++)
       for(c=0;c<5;c++)
         for(b=0;b<11;b++)
           for(a=0;a<21;a++)
             for(z=0;z<41;z++)
               for(y=0;y<101;y++)
                 for(x=0;x<201;x++)
                  { 
                      if(x+2*y+5*z+10*a+20*b+50*c+100*d+200*e ==200)
                      f++;
                          }cout<<f<<endl;
    return 0;}