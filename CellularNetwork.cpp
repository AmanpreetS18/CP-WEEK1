using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> cities(n);
    vector<int> towers(m),dist(n,INT_MAX);
    for(auto &it:cities) cin>>it;
    for(auto &it:towers) cin>>it;

    for(int i=0;i<n;i++){
        auto itr=lower_bound(towers.begin(),towers.end(),cities[i]);
        if(itr != towers.end()){
            dist[i]=(*itr-cities[i]);
        }
    }
    for(int i=0;i<n;i++){
        auto itr=upper_bound(towers.begin(),towers.end(),cities[i]);
        if(itr!=towers.begin()){
            itr--;
            dist[i]=min(dist[i],(cities[i]-*itr));
        }
    }

    int ans=*max_element(dist.begin(),dist.end());
    cout<<ans;


  }
int main(){
    solve();

   }
