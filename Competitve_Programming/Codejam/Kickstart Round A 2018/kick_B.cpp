#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	cout.tie(NULL);
   	freopen("B-large-practice.in","r",stdin);
   	freopen("output_b.txt","w",stdout);
	ll t,z=1;
	cin>>t;
	while(t--)
	{		
		ll n,k,i,j;
		cin>>n>>k;
		long double v[n+1],sum=0.0;
		for(i=0;i<n;i++)
		{
			cin>>v[i];
			sum+=v[i];
		}
		long double avg=sum/n, e[k+1]={0.0};
		e[0]=avg;
		for(i=1;i<=k;i++)
		{
			long double tmp=0.0;
			for(j=0;j<n;j++)
			{
				tmp+=max(v[j],e[i-1]);
			}
			e[i]=tmp/n;
		}
		cout<<fixed;
		cout<<"Case #"<<z<<": "<<setprecision(6)<<e[k]<<"\n";
		z++;
	}
	return 0;
}