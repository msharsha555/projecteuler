#include <iostream>
#include<math.h>
using namespace std;

int main()
{int t;cin>>t;
    for(int i=0;i<t;i++){
        int m,n;
        cin>>m>>n;
       if(m==1) m=m+1;  
        for(int k=m;k<=n;k++){
                int p=0;
        for(int j=2;j<=sqrt(k);j++){
            if(k%j==0) p++;
        }
        if(p==0) cout<<k<<endl;
        }
cout<<endl;    }
    return 0;
}
