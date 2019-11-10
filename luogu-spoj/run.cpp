#include<bits/stdc++.h>
using namespace std;
char s[2000],ch[100];
int main(){
    freopen("list.txt","r",stdin);
    while(~scanf("%s",ch)){
        sprintf(s,"curl https://www.luogu.org/problem/%s -o html/%s.html",ch,ch);
        system(s);
        sprintf(s,"./turn < html/%s.html > markdown/%s.md",ch,ch);
        system(s);
    }
}