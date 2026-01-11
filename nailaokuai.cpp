#include <iostream>
using namespace std;
const int N = 1001;
int a[N][N],b[N][N],c[N][N],n,m;
int main() {
    int x=0,y=0,z=0,res=0;
    scanf("%d%d",&n,&m);
    while(m--)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(++a[x][y]==n) res++;
        if(++b[x][z]==n) res++;
        if(++c[y][z]==n) res++;
        printf("%d\n",res);
    }
    return 0;
}