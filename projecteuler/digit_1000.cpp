#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp=boost::multiprecision;
using namespace mp;
int main()
{
    cpp_int ten=1;
    for(int i=1;i<4;i++){ten*=10;}
    int a=1; int b=1;int i=2;
    while(b/ten==0&&a/ten==0)
    {a=a+b;
     i++;
     b=a+b;
     i++;
    }
    if(a/ten>0) cout<<i-1<<endl;
    else if(b/ten>0) cout<<i<<endl;
    
    }