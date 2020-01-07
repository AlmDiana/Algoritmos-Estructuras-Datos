#include <iostream>
#include <fstream>
using namespace std;

void agregar (int a[],int n);
void buscar (int a[],int n, int dato);
void imprimir(int a[],int n);
void guardar (int a[], int n, int dato);

int main()
{
    int dim, dat;
    string nomb_archivo;
    setlocale(LC_CTYPE, "Spanish");

    cout << "-----  T A R E A   D E S A F I O  -----" << endl << endl;
    cout << "Ingrese la dimensión del arreglo: ";
    cin >> dim;
    int arreglo1[dim];

    agregar (arreglo1, dim);
    imprimir(arreglo1, dim);
    cout << endl << "Introduzca el elemento a buscar: ";
    cin >> dat;
    buscar (arreglo1, dim, dat);
    guardar(arreglo1,dim,dat);
    return 0;
}

void agregar(int a[], int n)
{

    cout << endl << "Por favor ingrese los elementos del arreglo:" << endl;
    for ( int i = 1; i <= n; i++){
        cout << "Elemento " << i << " : ";
        cin >> a[i];
    }


}

void buscar (int a[],int n, int dato)
{
    bool c = false;
    for ( int i = 1; i <= n; i++){
        if (a[i] == dato){
            cout << "¡¡Elemento " << dato << " encontrado en la posición " << i << " del arreglo!!" << endl;
            c = true;
        }
    }
    if (c == false){
        cout << "El elemento " << dato <<  " no existe en el arreglo" << endl;
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

void guardar (int a[], int n, int dato)
{
    bool c = false;
    ofstream archivoguardar;
    archivoguardar.open("datos.txt", ios::out);

    for ( int i = 1; i <= n; i++){
        if (a[i] == dato){
            archivoguardar << "¡¡Elemento encontrado ";
            archivoguardar << "en la posición " << i << endl;
            c = true;
        }
    }
    if (c == false){
        archivoguardar << "El elemento no encontrado" << endl;
    }

    archivoguardar << "ARREGLO:" << endl;
    for ( int i = 1; i <= n; i++){
        archivoguardar <<"|"<< a[i] << "|";
    }
    archivoguardar.close();
}


