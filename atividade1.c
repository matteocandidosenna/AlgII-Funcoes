#include <stdio.h>
struct registro{
        char sexo;
        char cor_olhos;
        char cor_cabelos;
        int idade;
};
typedef struct registro reg;
void armazena( reg r[5]){
    int maior_idade=0;
    float media=0;
    int mulheres=0;
    float cont_media=0.0;
    for(int i=0; i<5; i++){
        printf("Insira o sexo da %da pessoa(M ou F): \n", i+1);
        scanf(" %c", &r[i].sexo);
        printf("Insira a cor dos olhos da %da pessoa (C, V ou A): \n", i+1);
        scanf(" %c", &r[i].cor_olhos);
        printf("Insira a  cor dos cabelos da %da pessoa (L, P ou C): \n", i+1);
        scanf(" %c", &r[i].cor_cabelos);
        printf("digite a idade da %da pessoa: \n", i+1);
        scanf("%d", &r[i].idade);
        media+=r[i].idade;
        if(r[i].cor_cabelos=='P'&& r[i].cor_olhos=='C'){
            cont_media+1.0;
            media+=r[i].idade;
        }
        if(r[i].idade>maior_idade){
            maior_idade=r[i].idade;
        }
        if(r[i].sexo=='F'&& (r[i].idade>=18 &&r[i].idade<=35)){
            mulheres++;
        }
    }
    media=media/cont_media;
    printf("média de idade de pessoas com olhos castanhos e cabelos pretos: %f", media);
    printf("maior idade entre os habitantes: %d", maior_idade);
    printf("quantidade de mulheres com idade entre 18 e 35 anos: %d", mulheres);

}
main(){
    reg r[5];
    armazena(r);
    return 0;
}
