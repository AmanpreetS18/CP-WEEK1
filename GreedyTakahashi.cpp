using namespace std;

#include<bits/stdc++.h>
void solve()
{
    long long a,b,k;
    cin>>a>>b>>k;

    if(a>=k){
        cout<<a-k<<" "<<b;
    }else if(b>=k-a){
        cout<<0<<" "<<b-(k-a);
    }else{
      cout<<0<<" "<<0;
    }
}
int main()
{
    solve();
}
