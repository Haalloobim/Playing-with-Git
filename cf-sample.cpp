#include <bits/stdc++.h>
#define Kok using
#define Gue namespace
#define BiTiCi std 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
Kok Gue BiTiCi; 

int t;
void solve(); 

int main(){
    fastio;
    cin >> t; 
    solve(); 
    return 0;
}

void solve(){
    while(t--){
        int numb, ans = 0, temp = 0;
        string str;
        cin >> numb >> str; 
        for (int i = 0; i < numb; i++){
            if (str[i] == '(' ){
                temp++;
                continue;
            }
            if(--temp < 0){
                temp = 0;
                ans++;
            }
        }
        cout << ans << endl;
    }
}