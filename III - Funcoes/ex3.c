#include <stdio.h>

void tab_int(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    printf("\n");
}

int main(){
    for(int j = 1; j <= 9; j++){
        tab_int(j);
    }
    printf("\n");
}