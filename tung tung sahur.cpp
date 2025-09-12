
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string p,s;
        cin>>p>>s;
        int i=0,j=0;
        bool valid=true;
        while(i<p.size() && j<s.size()){
            if(p[i]!=s[j]){
                valid = false;
                break;
            }

            int count = 0;
             char  current = s[j];

             while(j<s.size() && s[j] == current && count < 2){
                ++j;
                ++count;
             }
             ++i;
        }

        if (i != p.size() || j != s.size()){
            valid = false;

        }
        cout<<(valid ? "YES" : "NO")<<endl;
    }
}
