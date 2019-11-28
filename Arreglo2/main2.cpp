#include <iostream>

using namespace std;

void agregar (int a [], int n);
void imprimir (int a [], int n);
void menor (int a [], int n);
void seleccion (int a [], int n);

int main()
{
    int n;
    setlocale ( LC_CTYPE, "Spanish");

    cout << "Ingrese el tamaño: ";
    cin >> n;
    int b[n];

    agregar(b,n);
    seleccion(b,n);
    menor(b,n);
    imprimir(b,n);

    return 0;
}

void agregar (int a [], int n)
{
    for ( int i = 0; i < n ; i++){
        cin >> a[i];
    }
}

void imprimir (int a [], int n)
{
    for ( int i = 0; i < n ; i++){
        cout << a[i];
    }
}

void menor (int a [], int n)
{
    int b;
    b = a[0];
    for ( int i = 0; i < n ; i++){
        if (b > a[i]){
            b = a[i];
        }
    }
    cout << "Menor elemento es: " << b << endl;
}
void seleccion (int a [], int n)
{
    int aux, min;
    for (int i = 0; i <5; i++){
        min = i;
        for (int j=i+1; j <5 ; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }
}
