#include <iostream>

using namespace std;

void insertar_elementos(int a[], int n);
void interpolacion(int a[], int n);

int main()
{
    int num;

    setlocale(LC_CTYPE, "Spanish");
    cout << "Ingrese cuantos elementos va a escribir: ";
    cin >>num;
    int a[num];

    insertar_elementos(a, num);
    interpolacion(a,num);

}

void insertar_elementos(int a[], int n)
{
    cout << "Elementos:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}

void interpolacion(int a[], int n)
{
    int primero=0;
    int ultimo=n-1;
    int medio;
    int cont=0;
    int buscado;

    cout <<"Buscado: ";
    cin >> buscado;
    while((a[primero]!= buscado) && (cont<=n))
    {
        medio = primero + ((buscado - a[primero])*(ultimo-primero))/(a[ultimo]-a[primero]);
        if(a[medio]<buscado)
        {
            primero=medio+1;
        }
        else if(a[medio]>buscado)
        {
            ultimo=medio-1;
        }
        else
        {
            primero=medio;
        }
        cont++;


    }
    if(a[primero]==buscado)
    {
        cout << "Encontrado, en la posición " << primero + 1 << endl;
    }
    else
    {
        cout << "No encontrado" << endl;
    }
}
