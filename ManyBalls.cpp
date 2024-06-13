#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<char>ans;
    while(n>0){
            if(n==0){
                break;
            }
        if(n%2==1){
                n--;
            ans.push_back('A');
        }
        else{
            n=n/2;
            ans.push_back('B');
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }

}
int main()
{
    solve();
}
