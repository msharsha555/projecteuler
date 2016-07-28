#include <iostream>
#include <math.h>
using namespace std;

int sumoffactors(int a)
{    int sum=0;
	for(int j=1;j<a;j++)
	{
        if(a%j==0) sum+=j;
	}
return sum;
}


int main()
{   const long int su=395465626; 

   int a[28123];int b[28123]; int p=0;
   for(int i=2;i<=28123;i++)
   {
   	int x=sumoffactors(i);
    if(x>i) {a[p]=i;p++;}
    }
for(int  m=0;m<p;m++)
	for(int n=m+1;n<p;n++)
	 {
       if
	 }


	return 0;
}