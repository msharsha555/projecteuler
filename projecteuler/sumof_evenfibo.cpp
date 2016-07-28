#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp=boost::multiprecision;
using namespace mp;
int main()
{ 
    cpp_int a=1;cpp_int b=2;cpp_int c=4000000;cpp_int p=1;cpp_int sum=2;
    while(a<=c&&b<=c)
    {
        a=a+b;if(a<=c){if(a%2==0) sum=sum+a;}
        
        b=a+b;if(b<=c){if(b%2==0) sum+=b;}
        
        } cout<<sum<<endl;
    
    return 0;}