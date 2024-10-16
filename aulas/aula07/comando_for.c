int maiin () {
    int numero = 0;
    printf("entre com um numero de 1 a 10: ");
    int deu_certo = scanf("%i" , &numero);

if (numero > 0 && numero < 11) {
} else {
    printf("numero invalido.\n")
}
    return 0;
}