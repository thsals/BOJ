#include <iostream>
#include <stdio.h>
using namespace std;
int arr[1011][1011],c,r,l=1,n1,n2,need1,need2;
void hamsu(int y,int x) {
    int i,j,num1=0,m;
    for(i=0;i<(c-1) + (r-1);i++) {
        if(i % (4) ==0) {
            m+=2;
            if(i==0) {
                m = 1;
            }
        }
        if(num1 >= 4) {
            num1 = 0;
            y--;
            x++;
        }
        if(num1 == 0) {
            for(j=0;j<r-m;j++) {
                arr[y][x] = l;
                l++;
                y--;
            }
            num1++;
        }
        else if(num1 == 1) {
            for(j=0;j<c-m;j++) {
                arr[y][x] = l;
                l++;
                x++;
            }
            num1++;
        }
        else if(num1 == 2) {
            for(j=0;j<r-m;j++) {
                arr[y][x] = l;
                l++;
                y++;
            }
            num1++;
        }
        else if(num1 == 3) {
            for(j=0;j<c-m;j++) {
                arr[y][x] = l;
                l++;
                x--;
            }
            num1++;
        }
    }
    if(arr[y][x] == 0) {
        arr[y][x] = l;
    }
}
int main()
{
    int i,j;
    //freopen("input.txt","r",stdin);
    scanf("%d %d",&c,&r);
    scanf("%d",&n1);


    for(i=0;i<=r+1;i++)
    {
        arr[i][0]=1;
        arr[i][c+1]=1;
    }
    for(i=0;i<=c+1;i++)
    {
        arr[0][i]=1;
        arr[r+1][i]=1;
    }
    //hamsu(r-1,0);
    int y=1,x=1,dir=0,num=1;
    for(i=1;i<=r*c;i++){
        arr[y][x]=num++;
        if(dir==0){
            if(arr[y+1][x]==0){
                y++;
            }
            else{
                dir=1;
                x++;
            }
        }
        else if(dir==1){

            if(arr[y][x+1]==0){
                x++;
            }
            else{
                dir=2;
                y--;
            }
        }
        else if(dir==2){

            if(arr[y-1][x]==0){
                y--;
            }
            else{
                dir=3;
                x--;
            }
        }
        else if(dir==3){

            if(arr[y][x-1]==0){
                x--;
            }
            else{
                dir=0;
                y++;
            }
        }
    }

    for(i=1;i<=r;i++) {
        for(j=1;j<=c;j++) {


            if(arr[i][j] == n1) {
                need1 = i;
                need2 = j;
            }

        }


    }
    if(n1>r*c) {
        printf("0");
    }
    else
        printf("%d %d",need2,need1);
    return 0;
}
