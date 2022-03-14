# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 90;

typedef struct {
    int m[MAXN][MAXN];
} Matriz;

char original[MAXN];
int m, n, p[MAXN];
string cifrado;

Matriz zerar () {
    Matriz matriz;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz.m[i][j] = 0;
        }
    }

    return matriz;
}

Matriz identidade () {
    Matriz matriz;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz.m[i][j] = (i == j);
        }
    }

    return matriz;
}

Matriz multiplicacao (Matriz a, Matriz b) {
    Matriz resultado = zerar();

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            if (a.m[i][k] != 0) {
                for (int j = 0; j < n; j++) {
                    if (b.m[k][j] != 0) {
                        resultado.m[i][j] += a.m[i][k] * b.m[k][j]; 
                    }
                }
            }
        }
    }

    return resultado;
}

Matriz exponenciacao (Matriz base, int expoente) {
    Matriz auxiliar = base, resultado = identidade();

    while (expoente) {
        if (expoente & 1) {
            resultado = multiplicacao(resultado, auxiliar);
        }

        auxiliar = multiplicacao(auxiliar, auxiliar);
        expoente >>= 1;
    }

    return resultado;
}

int main () {_
    while (cin >> n >> m && (n || m)) {
        Matriz base = zerar(), resultado;
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        cin.ignore();
        getline(cin, cifrado);

        for (int i = 0; i < n; i++) {
            base.m[i][p[i] - 1] = 1;
        }

        resultado = exponenciacao(base, m);
        
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                if (resultado.m[i][j] != 0) {
                    original[j] = cifrado[i];
                }
            }
        }

        original[n] = '\0';

        cout << original << "\n";
    }

    return 0;
}