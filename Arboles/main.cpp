#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *derecho;
    Nodo *izquierdo;
};

//NODOS LISTOS PARA SER INSERTADOS EN EL ARBOL
Nodo *crearNodoPadreHijos(int n);
//ARBOL LISTO PARA SER USADO
Nodo *arbolbinario = NULL;
void insertarNodosEnArbolBinario(Nodo *&arbolbinario, int n); //n cantidad de nodos del arbol
void mostrarArbolBinario(Nodo *&arbolbinario, int separador);
//R - I - D
void preOrden(Nodo *&arbolbinario);
//I - R - D
void inOrden(Nodo *&arbolbinario);
//I - D - R
void posOrden(Nodo *&arbolbinario);

int main()
{
    int n;
    for ( int i = 0; i < 9; i++){
        cout << "INSERTAR NODOS: " ;
        cin >> n;
        insertarNodosEnArbolBinario(arbolbinario,n);
    }
    mostrarArbolBinario(arbolbinario, 0);
    cout << "RECORRIDO: " << endl;
    cout << "Pre Orden:  " ;
    preOrden(arbolbinario);
    cout << endl;
    cout << "In Orden:  " ;
    inOrden(arbolbinario);
    cout << endl;
    cout << "Pos Orden:  " ;
    posOrden(arbolbinario);
    cout << endl;
    return 0;
}

Nodo *crearNodoPadreHijos(int n)
{
    //INICIALIZAR EL ARBOL CON NODOS
    Nodo *nuevo = new Nodo();
    //ASIGNAR LOS VALORES AL NODO CREADO(INSTANCIADO)
    nuevo -> dato = n;
    nuevo -> derecho = NULL;
    nuevo -> izquierdo = NULL;

    return nuevo;

}

void insertarNodosEnArbolBinario(Nodo *&arbolbinario, int n)
{
    if (arbolbinario == NULL){
        Nodo *nuevo = crearNodoPadreHijos(n);
        arbolbinario = nuevo;
    }
    else
    {
        //INSERTAR NODO RAIZ
        int datoRaiz = arbolbinario->dato;

        if (n < datoRaiz)
        {
            //INSERTA EL SIGUIENTE NODO EN EL SUB-IZQUIERDO
            insertarNodosEnArbolBinario(arbolbinario->izquierdo, n);
        }
        else
        {
            //INSERTA EL SIGUIENTE NODO EN EL SUB-DERECHO
            insertarNodosEnArbolBinario(arbolbinario->derecho, n);
        }
    }
}

void mostrarArbolBinario(Nodo *&arbolbinario, int separador) //separador permite seguir a la siguiente línea
{
    if (arbolbinario == NULL)
    {
        return; //no retorna nada
    }
    else
    {
        mostrarArbolBinario(arbolbinario->derecho, separador+1);
        for ( int i =0; i < separador; i++)
        {
            cout << " " ;
        }
        cout << arbolbinario->dato << endl;
        mostrarArbolBinario(arbolbinario->izquierdo, separador+1);
    }
}

void preOrden(Nodo *&arbolbinario)
{

    if (arbolbinario == NULL)
    {
        return;
    }
    else
    {
        cout << arbolbinario -> dato << "  ";
        preOrden(arbolbinario->izquierdo);
        preOrden(arbolbinario->derecho);
    }

}

void inOrden(Nodo *&arbolbinario)
{
    if (arbolbinario == NULL)
    {
        return;
    }
    else
    {
        preOrden(arbolbinario->izquierdo);
        cout << arbolbinario -> dato << "  ";
        preOrden(arbolbinario->derecho);
    }

}

void posOrden(Nodo *&arbolbinario)
{
    if (arbolbinario == NULL)
    {
        return;
    }
    else
    {
        preOrden(arbolbinario->izquierdo);
        preOrden(arbolbinario->derecho);
        cout << arbolbinario -> dato << "  ";
    }

}
