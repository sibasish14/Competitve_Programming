#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,b,i,j;
    cin>>n>>b;
    int a[n],ans=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n == 2)
    {
        cout<<0;
        return 0;
    }
    vector<int> v;
    int cnt=0;
    for(i=0;i<n-2;i++)
    {
        if(a[i]%2==0)
            cnt++;
        else
            cnt--;
        if(i%2==1 && cnt==0)
        {
            int diff=abs(a[i]-a[i+1]);
            v.push_back(diff);
        }
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(auto z:v)
    {
        sum+=z;
        if(sum <= b)
            ans++;
        else
            break;
    }
    cout<<ans;
	return 0;
}