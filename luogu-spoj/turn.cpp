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
namespace IO{const int str=1<<20;static char in_buf[str],*in_s,*in_t;bool __=0;il char gc(){return (in_s==in_t)&&(in_t=(in_s=in_buf)+fread(in_buf,1,str,stdin)),in_s==in_t?EOF:*in_s++;}il void in(string &ch){ch.clear();if(__)return;rg char c;while((c=gc())!=EOF&&isspace(c));if(c==EOF){__=1;return;}ch+=c;while((c=gc())!=EOF&&!isspace(c))ch+=c;if(c==EOF)__=1;}il void in(char &ch){if(__)return;rg char c;while((c=gc())!=EOF&&isspace(c));if(c==EOF)__=1;else ch=c;}il void in(char *ch){*ch='\0';if(__)return;rg char c;while((c=gc())!=EOF&&isspace(c));if(c==EOF){__=1;return;}*ch=c;ch++;while((c=gc())!=EOF&&!isspace(c))*ch=c,ch++;if(c==EOF)__=1;*ch='\0';}template<typename T>il void in(T &x){if(__)return;rg char c=gc();bool f=0;while(c!=EOF&&(c<'0'||c>'9'))f^=(c=='-'),c=gc();if(c==EOF){__=1;return;}x=0;while(c!=EOF&&'0'<=c&&c<='9')x=x*10+c-48,c=gc();if(c==EOF)__=1;if(f)x=-x;}template<typename T,typename ... arr>il void in(T &x,arr & ... y){in(x),in(y...);}const char ln='\n';static char out_buf[str],*out_s=out_buf,*out_t=out_buf+str;il void flush(){fwrite(out_buf,1,out_s-out_buf,stdout);out_s=out_buf;}il void pt(char c){(out_s==out_t)?(fwrite(out_s=out_buf,1,str,stdout),*out_s++=c):(*out_s++=c);}il void out(const char* s){while(*s)pt(*s++);}il void out(char* s){while(*s)pt(*s++);}il void out(char c){pt(c);}il void out(string s){for(int i=0;s[i];i++)pt(s[i]);}template<typename T>il void out(T x){if(!x){pt('0');return;}if(x<0)pt('-'),x=-x;char a[50],t=0;while(x)a[t++]=x%10,x/= 10;while(t--)pt(a[t]+'0');}template<typename T,typename ... arr>il void out(T x,arr & ... y){out(x),out(y...);}}using namespace IO;
char s[1000000];
bool isln(char c){return c=='\n';}
void getline(char *s){
    clr(s,'\0');
    char c;
    while(isln(c=gc()));
    *s=c;s++;
    while(!isln(c=gc()))*s=c,s++;
    *s='\0';
}
bool is(char a[],char ch[],int st=0){
    int len=strlen(ch);
    if(len>strlen(a+st))return 0;
    Fur(i,0,len-1)if(a[st+i]!=ch[i])return 0;
    return 1;
}
bool IS(char a[],char ch[]){
    int la=strlen(a);
    Fur(i,0,la-1)
        if(is(a,ch,i))return 1;
    
    return 0;
}
int op(char ch[]){
    int len=strlen(ch),f=0;
    Fur(i,0,len-1){
        if(ch[i]=='<'){
            int t=i+1,ff=1;
            while(ch[t]!='>'){
                if(ch[t]=='<'){
                    ff=0;
                    pt(ch[i]),f=1;
                    break;
                }
                ++t;
            }
            if(ff)i=t;
        }
        else pt(ch[i]),f=1;
    }
    return f;
}
int main(){
    Fur(i,1,18)getline(s);
    int ff=1;
    while(1){
        getline(s);
        if(is(s,"<h1>"))out("# ");
        if(is(s,"<h2>"))out("## ");
        if(is(s,"<h3>"))out("### ");
        if(is(s,"<h4>"))out("#### ");
        if(is(s,"<pre>"))out("```cpp\n"),ff=0;

        int f=op(s);

        if(IS(s,"</pre>"))out("\n```\n"),ff=1;
        if(f){
            pt('\n');
            if(ff)pt('\n');
        }
        if(is(s,"</html>"))break;
    }
    flush();
}
