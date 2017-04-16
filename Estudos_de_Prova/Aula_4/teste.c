# include <stdio.h>
# define tamanho_string 30 // Tamanho da string

int main(){

char nome[100];

printf("Digite o seu nome:");

fgets(nome, 100, stdin);

printf("O seu nome e:  %s ",nome);

return 0;
}
