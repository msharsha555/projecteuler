#include<iostream>
#include<math.h>
using namespace std;
long long int x[100005];
char c[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int sum=0;
		int n ;
		cin>>n;
		for(int i=1;i<=n;i++)
		cin>>c[i];
		for(int i=1;i<=n;i++)
		cin>>x[i];
		int j=1;
		if(c[j]!='1'){                     // first village doesnt have electricity 
			for(int i=2;i<=n;i++ ){
				if(c[i]=='1')
				{ j=i;
				break;}
			}
			sum=sum+x[j]-x[1];           // give all villages electricity from 1 to j 
		}
		int k =n;
		if(c[k]!='1'){                    // if last village doent have electricity
			for(int i=n-1;i>=1;i--){
					if(c[i]=='1')
				{ k=i;
				break;}
			}
			sum=sum+x[n]-x[k];           //give all villages from end to village having electricity
			}
			int l;
		while(j!=k){
			for(int i=j+1;i<=k;i++){
				if(c[i]=='1')
				{
					l=i;
					break;
				}
			}
				if(l-j>1){                                   // if there exists a village not having ele.btw villages having ele.
					sum=sum+min(x[l]-x[j+1],x[l-1]-x[j]);
				}
				j=l;
			}
			
		cout<<sum<<endl;
	}
	
	return 0;
}