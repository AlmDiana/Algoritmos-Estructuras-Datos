#include <iostream>

using namespace std;

void ingresar(int a[],int n);
void ordenar(int a[],int n);
void imprimir (int a[],int n);

int main()
{
    int tam;
    setlocale(LC_CTYPE, "Spanish");

    do
    {
        cout << "Ingrese el tamaño del arreglo: ";
        cin >> tam;
        if (tam <= 0){
            cout << "Error! Ingrese correctamente el tamaño del arreglo" << endl;
        }
    }
    while(tam <= 0);

    int a[tam];
    ingresar(a,tam);
    ordenar(a,tam);
    imprimir(a,tam);

    return 0;
}
void ingresar(int a[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << " : ";
        cin >> a[i];
    }
}
void ordenar(int a[],int n)
{
    int i,pos,aux;
    for(i = 0; i < n; i++)
    {
        pos = i;
        aux = a[i];
        while((pos > 0) && (a[pos - 1]) > aux)
        {
            a[pos]=a[pos-1];
            pos--;
        }
        a[pos]=aux;
    }
}
void imprimir (int a[],int n)
{
    cout << endl <<  "Arreglo ordenado:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}
