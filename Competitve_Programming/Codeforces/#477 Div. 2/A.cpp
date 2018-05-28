#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	int n,s;
   	cin>>n>>s;
   	int h[n],m[n],i,conv[n];
   	for(i=0;i<n;i++)
   	{
   		cin>>h[i]>>m[i];
   		conv[i]=(m[i]+h[i]*60);
   	}
   	if(s+1<=conv[0])
   	{
   		cout<<"0 0";
   		return 0;
   	}
   	for(i=0;i<n;i++)
   	{
   		if(conv[i]-conv[i-1] >= 2*s+2)
   		{
   			cout<<(conv[i-1]+1+s)/60<<" "<<(conv[i-1]+1+s)%60;
   			return 0;
   		}
   	}
   	i--;
   	cout<<(conv[i]+s+1)/60<<" "<<(conv[i]+s+1)%60;
	return 0;
}
