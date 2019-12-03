#include <iostream>

using namespace std;

int main()
{
    int horas_t, cont = 0;
    double sueldo;
    setlocale(LC_CTYPE, "Spanish");
    cout << endl <<  "CÁLCULO DEL SUELDO DE UN PASANTE:" << endl << endl;
    cout << "Sueldo por hora para pasantes: ";
    cin >> sueldo;

    for (int i = 1; i <= 5; i++ ){
        cout << "Ingrese las horas trabajadas por el pasante el día " << i << " : " ;
        cin >> horas_t;
        cont += horas_t;
    }
    cout << "Total Horas = " << cont << endl;
    cout << "Sueldo total = " << cont * sueldo  << endl;
    return 0;
}
