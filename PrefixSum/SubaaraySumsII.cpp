using namespace std;
#include<bits/stdc++.h>
void solve()
{
    long long n;
    long long x;
    cin>>n>>x;
    vector<long long> arr(n);
    for(auto &i:arr) cin>>i;
    long long sum=0;
    long long cnt=0;
    unordered_map<long long ,long long> mp;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(mp.find(sum-x)!=mp.end()){
            cnt+=mp[sum-x];
        }
        mp[sum]++;
    }
    cout<<cnt;
}
int main()
{
    solve();

}
