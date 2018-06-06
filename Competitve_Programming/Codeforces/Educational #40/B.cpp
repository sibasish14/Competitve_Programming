#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,j;
	cin>>n;
	string s;
	cin>>s;
	ll z=s.size(),c=0;
	if(z==1)
	{
		cout<<1;
		return 0;
	}
	while(1)
	{
		ll f=1;
		if(z%2==0)
		{
			for(i=0,j=z/2;i<z/2 && j<z && i<j;i++,j++)
			{
				if(s[i]!=s[j])
				{
					c+=2;
					f=0;
					z-=2;
					break;
				}
			}
		}
		else
		{
			c++;
			z--;
			for(i=0,j=z/2;i<z/2 && j<z && i<j;i++,j++)
			{
				if(s[i]!=s[j])
				{
					c+=2;
					z-=2;
					f=0;
					break;
				}
			}
		}
		if(f)
		{
			c+=(z/2+1);
			break;
		}
		if(z==0)
			break;
	}
	cout<<c;
	return 0;
}