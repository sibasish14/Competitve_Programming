#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	cin>>n;
	int a[n],sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	float mn=n*4.5;
	int ans=0;
	if(sum >= mn)
		cout<<0;
	else
	{
		float diff=mn-sum;
		i=0;
		while(diff > 0)
		{
			if(a[i] == 5)
			{
				i++;
				continue;
			}
			else
			{
				sum+=(5-a[i]);
				diff=mn-sum;
				ans++;
				i++;
			}
		}
		cout<<ans;
	}
	return 0;
}
