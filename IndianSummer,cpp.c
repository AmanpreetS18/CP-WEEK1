using namespace std;
#include<bits/stdc++.h>
void solve(){

int n;
cin>> n;
set<string> st;
for(int i=0;i<n;i++){
    string flower;
cin>>flower;
    st.insert(flower);
}
cout<<st.size()<<endl;
}
int main(){

solve();
}
