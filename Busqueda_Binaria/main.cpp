#include <iostream>
using namespace std;
// Definir el tamaño del arreglo
#define tamanio(a) (sizeof(a) / sizeof(a[0]))

void agregar (int a[],int n);
void imprimir (int a[], int n);
void busqueda_binaria(int a[], int n, int b);

int main()
{
     /*--------- E J E R C I C I O   E N   C L A S E ---------
    int b, j, i, k;
    int a [] = {1,2,6,8,9,12,16};
    setlocale(LC_CTYPE, "Spanish");

    i = 0;
    j = tamanio(a) -1;
    b = 6;

    do
    {
        k = (i + j)/2;
        if ( a [k] <= b){
             i = k + 1;   // Se trabaja con la parte izquierda
        }
        else if (a[k] >= b){
            j = k - 1;   // Se trabaja con la parte derecha
        }

    }
    while ( i <= j);
    if (i == b || i == b){
        cout << "Elemento encontrado, en la posición " << k <<  endl;
    }
    else{
        cout << "Elemento no encontrado" << endl;
    }

    */
    // ------ T A R E A    D E S A F I O -----

    int num_buscar, dim;

    setlocale(LC_CTYPE, "Spanish");

    cout << "Ingrese la dimensión del arreglo: ";
    cin >> dim;
    int arreglo [dim];
    agregar(arreglo,dim);
    imprimir(arreglo,dim);
    cout << endl << "Ingrese el elemento a buscar: ";
    cin >> num_buscar;
    busqueda_binaria(arreglo, dim, num_buscar);
    return 0;
}

void agregar (int a[],int n)
{
    int min,aux;
    cout << endl << "Por favor ingrese los elementos del arreglo:" << endl;
    for ( int i = 1; i <= n; i++){
        cout << "Elemento " << i << " : ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        min = i;
        for ( int j = i+1; j < n; j++){
            if (a[min] > a[j]){
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }

}

void busqueda_binaria(int a[], int n, int b)
{

    int j, i, k;
    j = n - 2;
    cout << endl << endl;
    do
    {
        k = (i + j)/2;
        if ( a [k] <= b)
            i = k + 1;   // Se trabaja con la parte izquierda
        if (a[k] >= b)
            j = k - 1;   // Se trabaja con la parte derecha
    }
    while ( i <= j);
    if (a[k] == b){
        cout << "Elemento encontrado, en la posición " << k <<  endl;
    }
    else{
        cout << "Elemento no encontrado" << endl;
    }
}

void imprimir (int a[], int n)
{
    cout << endl << "ARREGLO:" << endl;
    for ( int i = 1; i <= n; i++){
        cout <<"|"<< a[i] << "|";
    }
    cout << endl;

}
