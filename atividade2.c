#include <stdio.h>
int somatoria(int mat[2][2]){
    int soma=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            soma=soma+mat[i][j];
        }
    }
    return soma;
}
int main(){
    int soma=0;
    int mat[2][2];
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                printf(" declare o elemento da matriz: ");
                scanf("%d", &mat[i][j]);
        }
    }
    soma=somatoria(mat);
    printf("%d", soma);
    return 0;
}
