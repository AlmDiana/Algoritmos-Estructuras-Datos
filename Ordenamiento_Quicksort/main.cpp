#include <iostream>
#include <fstream>
using namespace std;

int mitad(int a[], int p_inicial, int p_final);
void ordenar (int a[], int p_inicial, int p_final);
void guardar_archivo(int a[], int p_inicial, int p_final);
void imprimir(int a[], int p_inicial, int p_final);

int main()
{
    int A[10] = {123,-6,13,-33,98,333,23,-5,0,-100};

    cout << "Arreglo original:" << endl;
    imprimir(A, 0, 10);
    guardar_archivo(A,0,9);

    ordenar(A,0,9);
    cout << endl << "Arreglo ordenado:" << endl;
    imprimir(A, 0, 10);
    return 0;
}

int mitad(int a[], int p_inicial, int p_final)
{
    return a[(p_inicial + p_final) / 2];
}

void ordenar (int a[], int p_inicial, int p_final)
{
    int i = p_inicial;
    int j = p_final;
    int temp;
    int piv = mitad(a, p_inicial, p_final);

    do
    {
        while(a[i] < piv)
        {
            i++;
        }
        while(a[j] > piv)
        {
            j--;
        }
        if ( i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    while(i <= j);

    if (p_inicial < j)
    {
        ordenar(a, p_inicial, j);
    }
    if (i < p_final)
    {
        ordenar(a, i, p_final);
    }
}

void guardar_archivo(int a[], int p_inicial, int p_final)
{
    ofstream archivo;
    archivo.open("OrdenamientoQuicksort.txt", ios::out);
    archivo << "Arreglo original:" << endl;
    for ( int i= 0; i < 10; i++)
    {
        archivo << "|" << a[i] << "|";
    }
    ordenar(a,0,9);
    archivo << endl << "Arreglo ordenado" << endl;
    for ( int i= 0; i < 10; i++)
    {
        archivo << "|" << a[i] << "|";
    }
}

void imprimir(int a[], int p_inicial, int p_final)
{
    for ( int i= p_inicial; i < p_final; i++)
    {
        cout << "|" << a[i] << "|";
    }
}
