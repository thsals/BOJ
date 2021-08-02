#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, s;
    
    scanf("%d %d",&a,&s);

    if(a<=2)
        printf("2\n");
    if(a<=3 && s >2)
        printf("3\n");
    for(int i = a; i <= s; i++){
        for(int j=2; j<= (int)sqrt(i); j++){
            if(i % j == 0){
                break;
            }
            if(j == (int)sqrt(i))
                printf("%d\n",i);
        }
    }


    return 0;
}
