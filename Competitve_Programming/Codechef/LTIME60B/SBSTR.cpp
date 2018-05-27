#include<bits/stdc++.h>
#define mod 1000000007
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
   		string s;
   		int k,i,j,ans=0,mx=0,c=0;
   		cin>>s>>k;

   		for(i=0;i<s.size();i++)
   		{
   			int a[26]={0};
   			mx=0,c=0;
   			for(j=i;j>=0;j--)
   			{
   				if(a[s[j]-97]==0)
   					c++;
   				mx=max(mx,++a[s[j]-97]);
   				if(c>=k && mx*c==i-j+1)
   					ans++;
   			}
   		}
   		cout<<ans<<"\n";
   	}
	return 0;
}
