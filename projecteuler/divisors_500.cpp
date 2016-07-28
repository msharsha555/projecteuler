#include<iostream>

using namespace std;

int main()
{ 
    int i=1;
    int s=i*(i+1)/2;
    int p=0;
    for(int j=1;j<=s;j++)
    {if(s%j==0) p++;}
    i++;
    
    while(p<3)
    {
    int s=i*(i+1)/2;
    int p=0;
    for(int j=1;j<=s;j++)
    {if(s%j==0) p++;}
    i++;
    }
    cout<<i<<endl;
    
    return 0;}