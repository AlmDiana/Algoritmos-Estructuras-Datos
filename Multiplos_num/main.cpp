#include <iostream>

using namespace std;

const int Max = 100;
void llenar_arreglo(int t);

int main()
{
    int tam, num;
    setlocale(LC_CTYPE, "Spanish");

    cout << " <<      MÚLTIPLOS DE UN NÚMERO:      >>" << endl << endl;
    do{
        cout << "Ingrese el tamaño del arreglo: ";
        cin >> tam;
    } while (tam < 0);
    llenar_arreglo(tam);
    cout << endl;
    return 0;
}

void llenar_arreglo(int t)
{
    int j = 0, a [Max], num;

    cout << endl << "Múltiplos de: ";
    cin >> num;
    cout << endl;
    j = num;
    for ( int i = 0; i < t; i++){
            a[i] = num;
            num = num + j;

    }
    for (int i = 0; i < t; i++){
        cout << a[i] << "  ";
    }

}


