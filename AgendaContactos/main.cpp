// Tarea: Agenda de Contactos
#include <iostream>
#include <fstream>
using namespace std;

int menu();
void ingreso_datos(string nomb_archivo);
void impresion_datos(string nomb_archivo);

int main()
{
    string nombrearchivo, respuesta;
    int opc;

    cout << endl << " -----  A G E N D A     D E     C O N T A C T O S ----- " << endl << endl;
    cout << "Ingrese nombre del archivo a crear: ";
    getline(cin, nombrearchivo);
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            ingreso_datos(nombrearchivo);
            break;
        case 2:
            impresion_datos(nombrearchivo);
            break;
        case 3:
            return 0;
        }
        cout << "Desea volver al menu? (si/no) : ";
        cin >> respuesta;
        if (respuesta == "no")
        {
            cout << endl << "Gracias por usar nuestro sistema!" << endl;
            return 0;
        }
        cin.ignore();
    }
    while (respuesta == "si");
}

int menu()
{
   int r;
   do{
    cout << endl << "1. Ingresar contactos" << endl;
    cout << "2. Imprimir contactos" << endl;
    cout << "3. Salir" << endl << endl;
    cout << "Seleccione una opcion: ";
    cin >> r;
    if (r < 0 || r > 3){
        cout << endl << "Error!! opcion no valida... por favor ingrese de nuevo." << endl;
    }
    cin.ignore();
   } while (r < 0 || r > 3);
   return r;
}

void ingreso_datos(string nomb_archivo)
{
    string nombre, apellido, resp;
    ofstream archivoprueba;
    int edad;

    archivoprueba.open(nomb_archivo.c_str(), ios::out);
    do
    {
        cout << endl << "\tIngrese el Nombre: ";
        getline (cin,nombre, '\n');
        cout << "\tIngrese el Apellido: ";
        getline (cin,apellido, '\n');
        cout << "\tIngrese el Edad: ";
        cin >> edad;
        archivoprueba << nombre << "  " << apellido << "  " << edad << "\n";
        cout << endl <<  "Desea ingresar otro contacto? (si/no) : ";
        cin >> resp;
        cin.ignore();
    } while( resp == "si");
    archivoprueba.close();
}

void impresion_datos(string nomb_archivo)
{
    string nombre, apellido, texto;
    ifstream archivolectura(nomb_archivo.c_str());
    int edad;

    cout << endl << endl << " ---------- D A T O S    I N G R E S A D O S  --------- " << endl << endl;

    while(!archivolectura.eof())
    {
        archivolectura >> nombre >> apellido >> edad;
        if (!archivolectura.eof())
        {
            getline(archivolectura,texto);
            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Edad: " << edad <<endl << endl;
        }
    }
    archivolectura.close();
}
