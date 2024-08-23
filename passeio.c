#include <stdio.h>

int main(){
    int p1, p2, p3, p4, p5;   
    printf("responda as questoes abaixo com '1' para 'sim' e '0' para 'nao'\n");
    printf("tenho compromisso no dia?\n");
    scanf("%d", &p1);
    printf("vou estar na cidade?\n");
    scanf("%d", &p2);
    printf("tenho dinheiro?\n");
    scanf("%d", &p3);
    printf("esta chovendo?\n");
    scanf("%d", &p4);
    printf("eh perto?\n");
    scanf("%d", &p5);

    if ((p1 == 0) && (p2 == 1 ) && (p3 == 1) && (p4 == 0))
    {
        printf("EU VOU");
    }
    else if ((p1 == 0) && (p2 == 1) && (p3 == 0) && (p5 == 1))
    {
        printf("EU VOU");
    }
    else{
        printf("EU NAO VOU");
    }
   
    return 0;
}