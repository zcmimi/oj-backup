#include<bits/stdc++.h>
using namespace std;
char s[1000];
int main(){
    for(int i=1000;i<=5633;++i){
        // sprintf(s,"curl https://www.luogu.org/problem/P%d -o %d.html",i,i);
        // system(s);
        printf("%d\n",i);
        sprintf(s,"./turn < html/%d.html > markdown/%d.md",i,i);
        system(s);
    }
} 
