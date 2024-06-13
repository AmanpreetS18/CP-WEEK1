
using namespace std;
#include<bits/stdc++.h>
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 set<int> st;
 for(auto it:arr){
    st.insert(it);
 }

 if(st.size()>1){
    auto it=st.begin();
    it++;
    cout<<*it;

 }else{
 cout<<"NO";
 }

 return 0;

}
