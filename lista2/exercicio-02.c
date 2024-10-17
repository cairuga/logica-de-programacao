int main() {

    int bombons, alunos, adicionais;
    
    printf("Informe o número de bombons: ");
    scanf("%d", &bombons);

    printf("Informe o número de alunos: ");
    scanf("%d", &alunos);

    if (bombons % alunos == 0) {
        printf("Não faltam bombons!");
    } else {
        adicionais = alunos - (bombons % alunos);
        if (adicionais == 1) {
            printf("Falta 1 bombom!");
        } else {
            printf("Faltam %d bombons!", adicionais);
        }
    }
    
    // Repare que ter de diferenciar singular e plurar complica um pouco :-D
 
    return 0;
}
