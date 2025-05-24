#include <stdio.h>

int main(){
    int conjunto[100];
    int TAM=100;
    int x;
    int alerta = 0;

    for(int i=0;i<TAM;i++){
        scanf("%d",&conjunto[i]);
    }
    scanf("%d",&x);

    for(int j=0;j<TAM;j++){;
        if (conjunto[j]==x){
            printf("X = %d esta dentro do conjunto",x);
            alerta=1;
            break;
        }
    }
    if(!alerta){
        printf("Não tem dentro do conjunto");
    }
    return 0;
}