#include<bits/stdc++.h>
using namespace std;


  bool is_pal(vector<int> &a){
                for(int i=0; i < a.size()/2; i++)
                        if(a[i] != a[a.size() - i - 1]) return false;
                return true;
        };
vector<int> rem(vector<int> &a, int r){
                vector<int> tmp;
                for(auto &x : a) if(x != r) tmp.push_back(x);
                return tmp;
        };

void solve(){
        int n; cin >> n;
        vector<int> a(n); for(auto &x : a) cin >> x;



        if(is_pal(a)) return void(cout << "YES\n");
        for(int i=0; i < a.size(); i++)
                if(a[i] != a[n - i - 1]){
                        auto option_1 = rem(a, a[i]);
                        auto option_2 = rem(a, a[n - i - 1]);
                        if(is_pal(option_1)) return void(cout << "YES\n");
                        if(is_pal(option_2)) return void(cout << "YES\n");
                        return void(cout << "NO\n");
                }

}
int main(){
    int t;
    cin>>t;

    while(t--){
      solve();
      }


   return 0;
}
