#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,i,sum=1000000100,a=1000100,b=1000100;
	cin>>n;
	ll c[n],t[n];
	for(i=0;i<n;i++)
		cin>>c[i];
	for(i=0;i<n;i++)
	{
		cin>>t[i];
		if(t[i] == 1)
			a=min(a,c[i]);
		else if(t[i] == 2)
			b=min(b,c[i]);
		else
			sum=min(sum,c[i]);
	}
	cout<<min(a+b,sum)<<"\n";
	return 0;
}