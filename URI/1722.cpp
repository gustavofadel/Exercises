# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


# define MENOR -1
# define IGUAL 0
# define MAIOR 1

const int MAX_DIGITOS = 1e2 + 10;

char a[MAX_DIGITOS], b[MAX_DIGITOS], c[MAX_DIGITOS], x[MAX_DIGITOS], y[MAX_DIGITOS];

int comparar (char num1[], char num2[]) {
    int tam1 = strlen(num1), tam2 = strlen(num2);

    if (tam1 > tam2) return MAIOR;
    else if (tam1 < tam2) return MENOR;
    else {
        for (int i = 0; i < tam1; i++) {
            if (num1[i] > num2[i]) return MAIOR;
            else if (num1[i] < num2[i]) return MENOR;
        }

        return IGUAL;
    }
}

int dentro_do_intervalo (char num[]) {
    return comparar(x, num) != MAIOR && comparar(num, y) != MAIOR;
}

void somar (char num1[], char num2[], char num3[]) {
    int tam1 = strlen(num1), tam2 = strlen(num2), tam3 = max(tam1, tam2) + 1;
    int carrega = 0, i = tam1 - 1, j = tam2 - 1, k = tam3 - 1;

    num3[tam3] = '\0';

    while (i >= 0 || j >= 0) {
        int soma = carrega;

        if (i >= 0) soma += num1[i--] - '0';
        if (j >= 0) soma += num2[j--] - '0';

        carrega = soma / 10;
        soma %= 10;
        num3[k--] = '0' + soma;
    }

    num3[k] = '0' + carrega;

    if (num3[0] == '0') memmove(num3, num3 + 1, sizeof(char) * tam3);
}

int main () {
    while (scanf("%s %s", x, y) && x[0] != '0' || y[0] != '0') {
        int resposta = 0;

        a[0] = '1';
        a[1] = '\0';
        
        b[0] = '2';
        b[1] = '\0';

        if (dentro_do_intervalo(a)) resposta++;
        if (dentro_do_intervalo(b)) resposta++;

        while (comparar(b, y) != MAIOR) {
            somar(a, b, c);
            if (dentro_do_intervalo(c)) resposta++;
            memmove(a, b, sizeof(a));
            memmove(b, c, sizeof(b));
        }

        printf("%d\n", resposta);
    }

    return 0;
}