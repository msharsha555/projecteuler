#include <iostream>

#include <math.h>
using namespace std;

int main()
{ int a,b,max=580085;
    for(int i=999;i>99;i--)
     for(int j=999;j>99;j--)
       {
          a=i*j;b=a;
         int sum=0;
         while(a>0)
         {
             sum=10*sum+a%10;
             a/=10;
          }
        if(b==sum)
        if(b>max) max=b;

       }cout<<max<<endl;
    
    return 0;}