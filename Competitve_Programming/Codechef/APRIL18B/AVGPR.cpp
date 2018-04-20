#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i,j,k;
		cin>>n;
		ll a[2005]={0},c=0,z;
		for(i=0;i<n;i++)
		{
			cin>>z;
			a[z+1000]++;
		}
		for(i=0;i<=2000;i++)
		{
			c+=((a[i]*(a[i]-1))/2);
			for(j=i+1;j<=2000;j++)
			{
				if((i+j)%2 == 0 && a[(i+j)/2] > 0)
				{
					c+=(a[i]*a[j]);
				}
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}