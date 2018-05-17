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
    int a[n],b[n],chk[1005];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    	chk[a[i]]=0;
    }
    int j=0;
    for(i=n-1;i>=0;i--)
    {
    	if(chk[a[i]]==0)
    	{
    		chk[a[i]]=1;
    		b[j++]=a[i];
    	}
    }
    cout<<j<<"\n";
    for(i=j-1;i>=0;i--)
    	cout<<b[i]<<" ";
	return 0;
}
