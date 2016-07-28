#include <iostream>

#include <math.h>
using namespace std;

int main()
{   
    for(int c=334;c<=997;c++)
      for(int b=1;b<c;b++)
        for(int a=1;a<b;a++)
           if(a+b+c==1000)
            if(a*a+b*b==c*c) cout<<a*b*c<<" "<<a<<" "<<b<<" "<<c<<endl;
    return 0;}