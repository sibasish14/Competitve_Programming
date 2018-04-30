#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(int a,int b)
{
	if(a == 0)
		return b;
	else
		return gcd(b%a,a);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,i,ans;
    	cin>>n>>k;
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		while(a[i]%k == 0 && k!=1)
    			a[i]/=k;
    	}
    	ans=a[0];
    	for(i=1;i<n;i++)
    		ans=gcd(ans,a[i]);
		if(k >= ans)
			cout<<"YES\n";
		else
			cout<<"NO\n";
    }
	return 0;
}
