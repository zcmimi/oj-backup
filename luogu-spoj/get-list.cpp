#include<bits/stdc++.h>
namespace ZDY{
    #pragma GCC optimize(3)
    #define il __inline__ __attribute__ ((always_inline))
    #define rg register
    #define ll long long
    #define ull unsigned long long
    #define db double
    #define sht short
    #define MB template <class T>il
    #define Fur(i,x,y) for(int i(x);i<=y;++i)
    #define Fdr(i,x,y) for(int i(x);i>=y;--i)
    #define fl(i,x) for(int i(head[x]),to;to=e[i].to,i;i=e[i].nxt)
    #define clr(x,y) memset(x,y,sizeof(x))
    #define cpy(x,y) memcpy(x,y,sizeof(x))
    #define fin(s) freopen(s".in","r",stdin)
    #define fout(s) freopen(s".out","w",stdout)
    #define fcin ios::sync_with_stdio(false)
    #define l2(n) ((int)(log2(n)))
    #define inf 2122219134
    MB T ABS(T x){return x>0?x:-x;}
    MB T MAX(T x,T y){return x>y?x:y;}
    MB T MIN(T x,T y){return x<y?x:y;}
    MB T GCD(T x,T y){return y?GCD(y,x%y):x;}
    MB void SWAP(T &x,T &y){T t=x;x=y;y=t;}
}using namespace ZDY;using namespace std;
char s[1000000];
#define gc getchar
#define pt putchar
bool isln(char c){return c=='\n';}
void getline(char *s){
    clr(s,'\0');
    char c;
    while(isln(c=gc()));
    *s=c;s++;
    while(!isln(c=gc()))*s=c,s++;
    *s='\0';
}
bool cl(){
    int len=strlen(s),f=0;
    Fur(i,1,len-1){
        if(s[i]=='\"'&&s[i-1]=='='){
            int p=i+1;
            while(s[p]!='\"'&&s[p]!='?')pt(s[p++]),f=1;
        }
    }
    if(f)pt('\n');
    return f;
}
void work(){
    Fur(i,1,18)getline(s);
    while(1){
        getline(s);
        if(!cl())break;
    }
}
int main(){
    freopen("list.txt","w",stdout);
    for(int i=1;i<=74;++i){
        sprintf(s,"curl https://www.luogu.org/problem/list\\?type\\=SP\\&page\\=%d -o tmp.html",i);
        system(s);
        freopen("tmp.html","r",stdin);
        work();
    }
}