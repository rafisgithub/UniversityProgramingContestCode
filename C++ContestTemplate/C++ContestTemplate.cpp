#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
#include<cmath>
#include<bitset>
#include<queue>

using namespace std;

#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mx 1000001
vector<int>gr[10000];
int ar[10000];
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,m,a,b,cnt=0;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            gr[a].pb(b);
            gr[b].pb(a);
            ar[a]++;
            ar[b]++;
            ///cout<<i<<"\n";
        }
    ///input done
    //cout<<"done\n";
    while(1)
        {

            bool cntFlg=false;
            vector<int>temp;
            for(int i=1;i<=n;i++)
                {
                    if(ar[i]==1)
                        {
                            //int child = gr[i][0];
                            temp.pb(i);
                            //temp.pb(child);
                            //ar[child]--;
                            //ar[i]--;
                            cntFlg= true;
                        }
                }
            if(!cntFlg)
                break;
            cnt++;
            for(int i=0;i<temp.size();i++)
                {
                    int child = gr[temp[i]][0];
                    ar[temp[i]]--;
                    ar[child]--;
                    //cntFlg = true;
                }
            
            
        }
    cout<<cnt<<"\n"; 

    return 0;
}
