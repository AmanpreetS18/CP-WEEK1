#include <bits/stdc++.h>
using namespace std;

void Solve(int x, map<string,long long> &mp, vector<long long> &ans) {
    string s;
    cin>>s;
    switch (x) {
        case 1:
            int y;
            cin>>y;
            mp[s]+=y;
            break;
        case 2:
            mp.erase(s);
            break;
        case 3:
            if(mp.find(s)!=mp.end())
            ans.push_back(mp[s]);
            else
                ans.push_back(0);
            break;
    }
}

int main() {
    int Q;
    cin >> Q;
    map<string,long long > mp;
    vector<long long> ans;

    while (Q--) {
        int x;
        cin >>x;
        Solve(x, mp, ans);
    }

    for (const auto &it : ans) {
        cout << it << endl;
    }

    return 0;
}
