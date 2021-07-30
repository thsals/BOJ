#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int high=1,n,cnt=0,arr[100][100],visit[100][100] ={0,},check[100][100] = {0,};
/*
int hamsu(int y,int x) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(arr[i][j] <= high)  {
                check[i][j] = 1;
            }
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d",check[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(x<0 || y<0 || x>=n || y>=n) {
            return 0;
    }
    if(visit[y][x]!=0) {
        return 0;
    }
    cnt++;
    visit[y][x]=1;
    int res =0;
    res += hamsu(y,x+1);
    res += hamsu(y,x-1);
    res += hamsu(y+1,x);
    res += hamsu(y-1,x);
    return res + 1;
}
*/

void f(int y,int x,int level) {
    int i,j;
    if(y<0||x<0||x>=n||y>=n) return;
    if(visit[y][x] == 1) return;
    if(arr[y][x]<=level) return;
    visit[y][x] =1;
    f(y,x+1,level);
    f(y,x-1,level);
    f(y+1,x,level);
    f(y-1,x,level);

}
int main()
{
    int i,j,res=1;
    int maxval=0;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
            maxval = max(maxval,arr[i][j]);
        }
    }

    for(i=0;i<=maxval;i++)
    {
        memset(visit,0,sizeof(visit));
        cnt=0;
        for(j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(visit[j][k]==0 && arr[j][k]>i){
                    cnt++;
                    f(j,k,i);
                }
            }
        }
        res = max(res,cnt);
    }
    /*
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(check[i][j] == 0) {
                hamsu(i,j);

                high++;
            }
        }
    }*/
    printf("%d",res);
    return 0;
}
