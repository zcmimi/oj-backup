#include<bits/stdc++.h>
using namespace std;
char s[200];
int main(){
    int t;cin>>t;
    for(int i=t;i<=5633;++i){
        sprintf(s,"curl https://www.luogu.org/problem/P%d -o html/%d.html",i,i);
        system(s);
    }
}