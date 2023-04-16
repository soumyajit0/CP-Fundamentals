/*
    @author:     soumyajit_0
    @codechef:   https://www.codechef.com/users/soumyajit_0
    @codeforces: https://codeforces.com/profile/soumyajit_0
    @leetcode:   https://leetcode.com/soumyajit_0/
    @linkedin:   https://www.linkedin.com/in/soumyajitds/
    @github:     https://github.com/soumyajit0
*/

#include<bits/stdc++.h>

#define int      long long int
#define print(a) for (auto x : a) cout << x << " "; cout << endl
#define endl     '\n'
#define bug(...) __f (#__VA_ARGS__, __VA_ARGS__)

using namespace std;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int MOD=1e9+7;

void solve(){

    vector<int> arr={1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6};
    vector<int> sum(32,0);
    for(int it:arr){
        for(int i=0;i<32;i++){
            if (it&(1<<i))
                sum[i]++;
        }
    }
    for(int i=0;i<32;i++)
        sum[i]%=3;

    int p=0,n=0;
    for(int i=0;i<32;i++){
        n+=sum[i]*(1<<i);
        //n+=sum[i]*pow(2,p);
        p++;
    }
    
    cout << "The Unique Numbers is : " << n << endl;

}

int32_t main (){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    clock_t start_time=clock();

    int t=1;
    // cin >> t;
    while (t--)
        solve();

    clock_t end_time=clock();

    cerr << "RUN TIME : " << end_time - start_time << "ms ";

    return 0;
}