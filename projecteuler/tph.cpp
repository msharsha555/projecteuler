#include <iostream>
#include <math.h>
using namespace std;
int main()
{   int i;
	for(i=40756;i>40755;i++)
	{
		double a=sqrt(1+8*i);double b=sqrt(1+24*i);
		double x=(-1+a)/2;double y=(1+b)/6; double z=(1+a)/4;

		if(a==(int)(a))
			if(b==(int)(b))
				if(x==(int)(x))
					if(y==(int)(y))
						if(z==(int)(z))
						   break;
	}cout<<i<<endl;
}