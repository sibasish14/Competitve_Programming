#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	string s;
   	cin>>s;
   	ll i,c1=0,c2=0;

   	for(i=0;i<s.size();i++)
   	{
   		if(s[i] == '-')
   			c1++;
   		else
   			c2++;
   	}
   	if(c2==0 || c2==1)
   	{
   		cout<<"YES";
   		return 0;
   	}
   	if(c1%c2 == 0)
   		cout<<"YES";
   	else
   		cout<<"NO";
	return 0;
}
