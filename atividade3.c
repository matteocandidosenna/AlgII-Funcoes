#include <stdio.h>
void multiplica(int A[6][6]){
    int i=0;
    int j=0;
    do{
        if(j!=i){
            A[i][j]=A[i][j]*A[i][j];
        }
        j++;
        if(j>=6){
            i++;
        }
    }
    while(i<6);
    printf("nova matriz: \n");
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            printf("[%d] ", A[i][j]);
        }
    }
}
int main(){
    int A[6][6];
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            printf("digite o valor do elemento [%d][%d]", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    multiplica(A);
    return 0;
}
