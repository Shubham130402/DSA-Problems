#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        cin>>s;
        vector <char> p(51,'\0');
        bool b =false;
        for (int i=0;i<n;i++){
            if(p[v[i]] !='\0'){
                if(p[v[i]] !=s[i]){
                    b= true;
                    break;
                }
                else {
                    continue;
                    }
            }
            else{
                p[v[i]]=s[i];
            }
        }
        if(b){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}