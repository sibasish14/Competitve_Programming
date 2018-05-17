#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,c=0,j;
    string s;
    cin>>n>>s;
    for(i=0;i<n-2;i++)
    	if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
    		c++;
    cout<<c<<"\n";
	return 0;
}
