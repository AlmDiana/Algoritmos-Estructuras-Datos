#include <iostream>

using namespace std;

int main()
{
    string tipo_uva;
    int tamano_uva, kilos_produc;
    double precio_uva = 3.50 , ganancia;
    setlocale(LC_CTYPE, "Spanish");

    cout << "GANANCIAS DE LA ASOCIACIÓN DE VINICULTORES" << endl << endl;

    cout << " -> Ventas del producto "<< endl << endl;
    do{
        cout << "Tipo de uva (A/B): ";
        cin >> tipo_uva;
    } while (tipo_uva != "A" && tipo_uva != "B");
    do{
        cout << "Tamaño de uva (1/2): ";
        cin >> tamano_uva;
    } while (tamano_uva != 1 && tamano_uva != 2);
    cout << "Kilos de producción: ";
    cin >> kilos_produc;

    if (tipo_uva == "A"){
        if (tamano_uva == 1){
            precio_uva += 0.20;
        }
        else{
            precio_uva += 0.30;
        }
    }
    else{
        if (tamano_uva == 1){
            precio_uva -= 0.30;
        }
        else{
            precio_uva -= 0.50;
        }
    }
    ganancia = precio_uva * kilos_produc;
    cout << "Ganancia = " << ganancia << endl;
    return 0;
}
