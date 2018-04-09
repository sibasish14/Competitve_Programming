#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,i;
	cin>>n;
	if(n<6)
		cout<<"-1\n";
	else
	{
		for(i=2;i<=4;i++)
			cout<<"1 "<<i<<"\n";
		for(i=5;i<=n;i++)
			cout<<"2 "<<i<<"\n";
	}
	for(i=2;i<=n;i++)
		cout<<"1 "<<i<<"\n";
	return 0;
}