#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,i,j,ans=INT_MAX,tmp;
    cin>>n>>k;
    if(n == 1)
    {
        cout<<"1\n";
        cout<<"1";
        return 0;
    }
    if(k >= n/2)
    {
        cout<<"1\n";
        cout<<((n%2)?(n/2+1):n/2);
        return 0;
    }
    vector<int> v;
    for(i=1;i<=k+1;i++)
    {
        vector<int> vtmp;
        tmp=1;
        j=i+1+(2*k);
        vtmp.push_back(i);
        while(j <= n)
        {
            tmp++;
            vtmp.push_back(j);
            j+=(2*k+1);
        }
        if(ans > tmp && tmp > 1 && (n-vtmp[tmp-1] <= k))
        {
            v.clear();
            ans=tmp;
            for(j=0;j<vtmp.size();j++)
            {
                v.push_back(vtmp[j]);
            }
        }
    }
    cout<<ans<<"\n";
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}