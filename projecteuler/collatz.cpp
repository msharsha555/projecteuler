#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int i=999999;
   int max=10;int num;
     for(int j=i;j>1;j--)
   { 
   	int p=1;int k=j;
      while(k!=1)
      {
      	if(k%2==0) k=k/2;
      	else k=3*k+1;
        p++;
      }
     if(p>max) {max=p;num=j;}
   }
   cout<<num<<endl;
	return 0;
}