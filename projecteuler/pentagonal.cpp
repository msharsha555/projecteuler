#include <iostream>
#include <math.h>

using namespace std;
int main(){

for(int x=1;x<1001;x++)
{
	for(int y=1;y<1001;y++)
	{
		int j=x*(3*x-1)/2;int k=y*(3*y-1)/2;

		int sum=j+k; float a=sqrt(1+24*sum);float b=(1+a)/6;int c=int(b);
		if(b==c)
		{
			int sub;if(j-k>0) sub=j-k; else sub=k-j;
			float d=sqrt(1+24*sub); float e=(1+d)/6; int f=int(e);
			if(e==f) cout<<sub<<endl;
		}

	}
}


	return 0;
}