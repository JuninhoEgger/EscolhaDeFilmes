#include <stdio.h>
int main(){
    int filme, quantidadeDeIngressos;
    double valorDaCompra;

    printf("Ol�, bem vindo ao sistema de c�lculo de compras de ingressos. O valor do ingresso � R$ 12,50\n");
    printf("Escolha a op��o de filme\n");
    printf("----------Digite 1: Vingadores 4 - da Marvel----------\n");
    printf("----------Digite 2: Como Treinar Seu Drag�o 3----------\n");
    printf("----------Digite 3: Dumbo----------\n");
    printf("----------Digite 4: Shazam!----------\n");
    scanf("%d", &filme);
    printf("Informe a quantidade de ingressos\n");
    scanf("%d", &quantidadeDeIngressos);
    valorDaCompra = quantidadeDeIngressos * 12.50;
    printf("Obrigado. Para comprar %d ingresso(s) para o filme %d voc� ir� gastar %.2f", quantidadeDeIngressos, filme, valorDaCompra);
    system("pause");
    return 0;
}
