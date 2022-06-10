#include<windows.h>
#include<stdio.h>
#include<string>


using namespace std;


#define min(first,second) ((first)>(second)?(second):(first))
#define max(first,second) ((first)>(second)?(first):(second))
#define ll long long
#define ull unsigned long long
#ifdef WIN32
    #define window "CON"
#else
    #define window "/dev/tty"
#endif
#define elif else if
#define fop freopen
#define fori(start,end) for(auto i=start;i!=end;i++)
#define forj(start,end) for(auto j=start;j!=end;j++)
#define fork(start,end) for(auto k=start;k!=end;k++)
#define forl(start,end) for(auto l=start;l!=end;l++)
#define fauto fop(window,"r",stdin);fop(window,"w",stdout)
#define gc getchar
#define pc putchar
#define scf scanf
#define prf printf


inline ll in(){
    ll r_ans_in=0,__f=1;char _c_ch=gc();
    while((_c_ch<'0'||_c_ch>'9')&&_c_ch!='-') _c_ch=gc();
    if(_c_ch=='-') _c_ch=gc(),__f=-1;
    while(_c_ch>='0'&&_c_ch<='9') r_ans_in=(r_ans_in<<3)+(r_ans_in<<1)+_c_ch-'0',_c_ch=getchar();
    return r_ans_in*__f;
}

inline void out(ll w_tmp_out){
    if(w_tmp_out<0) pc('-'),w_tmp_out=-w_tmp_out;
    if(w_tmp_out>9) out(w_tmp_out/10);
    pc(w_tmp_out%10+'0');
}


#define fi fast_in
#define fo fast_out
#define il inline
#define fr friend
#define op operator


class fast_in{
    public:
        fr il fi op>>(fi a,ll &b){
            b=in();
            return a;
        }

        fr il fi op>>(fi a,long double &b){
            scf("%llf",&b);
            return a;
        }

        fr il fi op>>(fi a,char &b){
            b=gc();
            return a;
        }

        fr il fi op>>(fi a,char *b){
            scf("%s",b);
            return a;
        }

        fr il fi op>>(fi a,string &b){
            scf("%s",b.c_str());
            return a;
        }
};

fi fin;


class fast_out{
    public:
        fr il fo op<<(fo a,ll b){
            out(b);
            return a;
        }

        fr il fo op<<(fo a,long double b){
            prf("%llf",b);
            return a;
        }

        fr il fo op<<(fo a,char b){
            pc(b);
            return a;
        }

        fr il fo op<<(fo a,char *b){
            prf(b);
            return a;
        }

        fr il fo op<<(fo a,string b){
            return a<<b.c_str();
        }
};

fo fout;


#undef fi
#undef fo
#undef il
#undef fr
#undef op