#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,c=0,ans=0,j;
    cin>>n;
    string s[n];
    set<string> ss;
    set<char>::iterator it;
    for(i=0;i<n;i++)
    {
    	cin>>s[i];
   	}
   	for(i=0;i<n;i++)
   	{
   	    set<char> st;
   		for(j=0;j<s[i].size();j++)
   			st.insert(s[i][j]);
   		string z="";
   		for(auto v:st)
   			z+=v;
   		ss.insert(z);
   	}
   	cout<<ss.size()<<"\n";
	return 0;
}
