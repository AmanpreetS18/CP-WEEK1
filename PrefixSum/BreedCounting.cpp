#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    vector<vector<int>> p(3,vector<int>(n,0));
    for(int type=0;type<3;type++){
        p[type][0]=((arr[0]-1)==type);
    }
    for(int i=1;i<n;i++){
        if((arr[i]-1)==0) {
            p[0][i]=p[0][i-1]+1;
            p[1][i]=p[1][i-1];
            p[2][i]=p[2][i-1];
        }
        else if((arr[i]-1)==1){
            p[1][i]=p[1][i-1]+1;
            p[0][i]=p[0][i-1];
            p[2][i]=p[2][i-1];
        }else{
            p[2][i]=p[2][i-1]+1;
            p[1][i]=p[1][i-1];
            p[0][i]=p[0][i-1];
        }
    }

    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0){
            cout<<p[0][r]<<" "<<p[1][r]<<" " <<p[2][r]<<endl;
        }else{
        cout<<p[0][r]-p[0][l-1]<<" "<<p[1][r]-p[1][l-1]<<" "<<p[2][r]-p[2][l-1]<<endl;
        }
     }
}

int main() {

    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);

    solve();
    return 0;
}
