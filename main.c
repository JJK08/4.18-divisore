#include <stdio.h>

int main() {
    int numero;
    int i;
    printf("inserisci il numero intero: ");
    scanf("%d",&numero);
    printf("i divisori di %d sono: ",numero);
    for(i=0;i<=numero;i++) {
        if(numero%1==0) {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
