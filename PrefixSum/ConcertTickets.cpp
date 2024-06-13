using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> ticket(n);
    vector<int> customer(m);
    for(int i=0;i<n;i++){
        cin>>ticket[i];
    }
    for(int i=0;i<m;i++){
        cin>>customer[i];
    }
   multiset<int,greater<int>> tickets;
  for(auto & it: ticket){
    tickets.insert(it);
  }
    for(auto &i:customer){
        auto it=tickets.lower_bound(i);
        if(it==tickets.end()){
            cout<<"-1\n";
        }else{
           cout<<*it<<"\n";
           tickets.erase(it);
        }
    }
}
int main(){

solve();
}
