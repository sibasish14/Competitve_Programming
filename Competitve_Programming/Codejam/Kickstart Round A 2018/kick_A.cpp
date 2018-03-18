#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int check(int n)
{
	int r;
	while(n!=0)
	{
		r=n%10;
		if(r%2==1)
			return 0;
		n/=10;
	}
	return 1;
}

int main()
{
	freopen("A-small-attempt1.in","r",stdin);
	freopen("output.txt","w",stdout);
	ll t,k=1;
	cin>>t;
	while(t--)
	{
		ll n,i,j,a,b;
		cin>>n;
		for(i=0;;)
		{
			if(check(n+i))
			{
				a=i;
				break;
			}
			else
			{
				i++;
			}
		}
		for(i=0;;)
		{
			if(check(n-i))
			{
				b=i;
				break;
			}
			else
			{
				i++;
			}
		}
	a=min(a,b);
	cout<<"Case #"<<k<<": "<<a<<"\n";
	k++;
	}
	return 0;
}