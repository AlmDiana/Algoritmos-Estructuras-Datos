#include <iostream>

using namespace std;

void agregar (int a [], int n);
void imprimir (int a [], int n);
void menor (int a [], int n);

int main()
{
    int arreglo[]={3,7,4,2,9};
    int aux, min;
    for (int i = 0; i <5; i++){
        min = i;
        for (int j=i+1; j <5 ; j++){
            if (arreglo[j] < arreglo[min]){
                min = j;
            }
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }

    for ( int i = 0; i < 5 ; i++){
        cout << arreglo[i];
    }

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
