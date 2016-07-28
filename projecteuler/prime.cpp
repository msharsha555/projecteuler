#include <iostream>
#include <math.h>
using namespace std;

int prime(int k)
{
     int p=0;
for(int j=2;j<=sqrt(k);j++)
    {
        if(k%j==0)
               p++;

         }
return p;
}
int main()
{ const int max=2000000;int sum=0;

  for(int i=2;i<max;i++)
    {
    int l=prime(i);
    if(l==0) sum=sum+i;}
    cout<<sum<<endl;
    return 0;
}