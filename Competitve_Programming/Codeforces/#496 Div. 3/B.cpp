#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    ll i,c=0;
    ll z=max(s1.size(),s2.size());
    ll y=min(s1.size(),s2.size());
    for(i=0;i<y;i++)
    {
        if(s1[i]==s2[i])
            c++;
        else break;
    }
    cout<<(z+y-(2*c));
	return 0;
}
