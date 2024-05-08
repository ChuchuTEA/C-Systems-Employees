// Sistema de gestión de registros de empleados utilizando C++

#include <iostream>
using namespace std;

string id[30], name[30], address[50], dob[30], mobile_no[30], doj[30], marstatus[30], workd[30], workl[40], ctc[30], socialins[30], email[30]; // arrays for storing students data.

int total = 0; // para almacenar todos los datos
void enter()

{

    int ch = 0;

    cout << "¿Cuántos datos de empleados deseas ingresar?" << endl;

    cin >> ch;
    if (total == 0)

    {

        total = ch + total;

        for (int i = 0; i < ch; i++)

        {

            cout << "\nIngrese los datos del empleado" << i + 1 << endl
                 << endl;
            cout << "** DETALLES DEL PERSONAL **" << endl
                 << endl;

            cout << "Ingrese nombre: " << endl;
 
            cin >> name[i];

            cout << "Ingrese la dirección: " << endl;

            cin >> address[i];

            cout << "Ingrese fecha de nacimiento: " << endl;

            cin >> dob[i];

            cout << "El empleado esta casado: " << endl;

            cin >> marstatus[i];

            cout << "** DETALLES DEL TRABAJO **" << endl
                 << endl;

            cout << "Ingrese ID: " << endl;

            cin >> id[i];

            cout << "Ingrese la fecha de ingreso: " << endl;

            cin >> doj[i];

            cout << "Departamento de trabajo: " << endl;

            cin >> workd[i];

            cout << "Ingrese la ubicación de trabajo: " << endl;

            cin >> workl[i];

            cout << "Ingrese CTC: " << endl;

            cin >> ctc[i];

            cout << "Ingrese el número de seguro social: " << endl;

            cin >> socialins[i];

            cout << "** DETALLES DEL CONTACTO **" << endl
                 << endl;

            cout << "Ingrese el número de teléfono móvil:" << endl;

            cin >> mobile_no[i];

            cout << "Ingrese Email: " << endl;

            cin >> email[i];
        }
    }

    else

    {

        for (int i = total; i < ch + total; i++) // para almacenar los datos de los estudiantes en lugar de almacenar datos dobles


        {

            cout << "\nIngrese los datos del empleado. " << i + 1 << endl
                 << endl;
            cout << "** DETALLES PERSONALES **" << endl
                 << endl;

            cout << "Ingrese nombre:" << endl;

            cin >> name[i];

            cout << "Ingrese Email: " << endl;

            cin >> address[i];

            cout << "Ingrese fecha de nacimiento: " << endl;

            cin >> dob[i];

            cout << "El empleado esta casado: " << endl;

            cin >> marstatus[i];

            cout << "** DETALLES DEL TRABAJO **" << endl
                 << endl;

            cout << "Ingrese ID: " << endl;

            cin >> id[i];

            cout << "Ingrese la fecha de ingreso: " << endl;

            cin >> doj[i];

            cout << "Departamento de trabajo: " << endl;

            cin >> workd[i];

            cout << "Ingrese la ubicación de trabajo: " << endl;

            cin >> workl[i];

            cout << "Ingrese CTC: " << endl;

            cin >> ctc[i];

            cout << "Ingrese el número de seguro social:" << endl;

            cin >> socialins[i];

            cout << "** DETALLES DEL CONTACTO  **" << endl
                 << endl;

            cout << "Ingrese el número de teléfono móvil: " << endl;

            cin >> mobile_no[i];

            cout << "Ingrese Email: " << endl;

            cin >> email[i];
        }

        total = ch + total; // haciendo elección
    }
}

void show()

{

    if (total == 0)

    {

        cout << "No se ingresan datos" << endl;
    }

    else
    {

        for (int i = 0; i < total; i++)

        {
            cout<<"** RESULTADO DE DATOS DEL MOSTRAR **"<<endl;

            cout << "\nDatos del empleado: " << i + 1 << endl
                 << endl;
            cout << "** DETALLES PERSONALES**" << endl
                 << endl;

            cout << "Nombre completo: " << name[i] << endl;
            cout << "Direccion " << address[i] << endl;
            cout << "Fecha de nacimiento: " << dob[i] << endl;
            cout << "Estado Social: " << marstatus[i] << endl
                 << endl;

            cout << "** DETALLES DEL TRABAJO **" << endl
                 << endl;

            cout << "Id: " << id[i] << endl;
            cout << "Fecha de ingreso: " << doj[i] << endl;
            cout << "Departamento de trabajo: " << workd[i] << endl;
            cout << "Lugar del trabajo: " << workl[i] << endl;
            cout << "CTC: " << ctc[i] << endl;
            cout << "Seguro Social: " << socialins[i] << endl
                 << endl;

            cout << "** DETALLES DEL CONTACTO **" << endl
                 << endl;
            cout << "Numero Movil: " << mobile_no[i] << endl;
            cout << "Email: " << email[i] << endl;
        }
    }
}

void search()

{

    if (total == 0)

    {

        cout << "No se ingresan datos" << endl;
    }

    else
    {

        string idd;

        cout << "Ingrese la identificación del empleado que desea buscar: " << endl;

        cin >> idd;

        for (int i = 0; i < total; i++)

        {

            if (idd == id[i])

            {
                cout << "RESULTADO POR IDENTIFICACIÓN DE EMPLEADO: " << idd << endl;

                cout << "** DETALLES DEL PERSONAL **" << endl
                     << endl;

                cout << "Nombre completo: " << name[i] << endl;
                cout << "Direccion " << address[i] << endl;
                cout << "Fecha de nacimiento: " << dob[i] << endl;
                cout << "Estado Social: " << marstatus[i] << endl
                     << endl;

                cout << "** DETALLES DEL TRABAJO **" << endl
                 << endl;

            cout << "Id: " << id[i] << endl;
            cout << "Fecha de ingreso: " << doj[i] << endl;
            cout << "Departamento de trabajo: " << workd[i] << endl;
            cout << "Lugar del trabajo: " << workl[i] << endl;
            cout << "CTC: " << ctc[i] << endl;
            cout << "Seguro Social: " << socialins[i] << endl
                 << endl;

            cout << "** DETALLES DEL CONTACTO **" << endl
                 << endl;
            cout << "Numero Movil: " << mobile_no[i] << endl;
            cout << "Email: " << email[i] << endl;
            }
        }
    }
}

void update()

{

    if (total == 0)

    {

        cout << "No se ingresan datos" << endl;
    }

    else
    {

        string rollno;

        cout << "Ingrese la identificación del empleado que desea actualizar" << endl;

        cin >> rollno;

        for (int i = 0; i < total; i++)

        {

            if (rollno == id[i])

            {

                cout << "\nDatos anteriores:" << endl
                     << endl;

                cout << "Datos del empleado " << i + 1 << endl;

                cout << "** DETALLES PERSONALES **" << endl;

                cout << "Nombre completo: " << name[i] << endl;
                cout << "Email: " << address[i] << endl;
                cout << "Fecha de nacimiento: " << dob[i] << endl;
                cout << "Estado Social: " << marstatus[i] << endl
                     << endl;

                cout << "** DETALLES DEL TRABAJO **" << endl
                     << endl;

                 cout << "Id: " << id[i] << endl;
                 cout << "Fecha de ingreso: " << doj[i] << endl;
                 cout << "Departamento de trabajo: " << workd[i] << endl;
                 cout << "Lugar del trabajo: " << workl[i] << endl;
                 cout << "CTC: " << ctc[i] << endl;
                cout << "Seguro Social: " << socialins[i] << endl
                     << endl;

                cout << "** DETALLES DEL CONTACTO **" << endl
                     << endl;
                cout << "Numero Movil: " << mobile_no[i] << endl;
                cout << "Email: " << email[i] << endl;
                cout << "\nIngrese nueva fecha: " << endl
                     << endl;
                cout << "** DETALLES DEL PERSONAL **" << endl
                     << endl;

                cout << "Ingrese nombre: " << endl;

                cin >> name[i];

                cout << "Ingrese Email: " << endl;

                cin >> address[i];

                cout << "Ingrese fecha de nacimiento: " << endl;

                cin >> dob[i];

                cout << "Estado Social: " << endl;

                cin >> marstatus[i];

                cout << "** DETALLES DEL TRABAJO **" << endl
                     << endl;

                cout << "Ingrese Id: " << endl;

                cin >> id[i];

                cout << "Ingrese la fecha de ingreso: " << endl;

                cin >> doj[i];

                cout << "Departamento del trabajo: " << endl;

                cin >> workd[i];

                cout << "Ingrese lugar del trabajo: " << endl;

                cin >> workl[i];

                cout << "Ingrese CTC: " << endl;

                cin >> ctc[i];

                cout << "Ingrese la identificación del seguro social: " << endl;

                cin >> socialins[i];

                cout << "** DETALLES DEL CONTACTO **" << endl
                     << endl;

                cout << "Numero Movil: " << endl;

                cin >> mobile_no[i];

                cout << "Ingrese Email: " << endl;

                cin >> email[i];
            }
        }
    }
}

void Delete()
{

    if (total == 0)
    {
        cout << "Aún no se han introducido datos" << endl;
    }

    else
    {
        int a;

        cout << "¿Estás seguro de eliminar datos?" << endl;
        cout << "Presione 1 para eliminar todos los registros" << endl;

        cin >> a;

        if (a == 1)

        {

            total = 0;

            cout << "¡¡Se elimina todo el registro..!!" << endl;
        }
        else
        {
            cout << "Presione 1 para eliminar todos los registros" << endl;
        }
    }
}

int main()

{

    int value, sample;

    cout << "INGRESE 1: Para continuar..." << endl;
    cin >> sample;

    while (sample < 2) // Siempre en loop

    {
        cout << ">>>>>>>>  SISTEMA DE GESTIÓN DE REGISTROS DE EMPLEADOS  <<<<<<<<" << endl;

        cout << "\nPRESIONE 1: Para ingresar datos" << endl;

        cout << "-------------------------" << endl;

        cout << "PULSE 2: Para Mostrar datos" << endl;
        cout << "-------------------------" << endl;

        cout << "PULSE 3: Para buscar datos" << endl;
        cout << "-------------------------" << endl;

        cout << "PULSE 4: Para actualizar datos" << endl;
        cout << "-------------------------" << endl;

        cout << "PULSE 5: Para borrar datos" << endl;
        cout << "-------------------------" << endl;

        cout << "PULSE 6: Para salir" << endl;
        cout << "-------------------------" << endl;

        cin >> value;

        switch (value)

        {

        case 1:
            enter();
            break;

        case 2:
            show();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            Delete();
            break;

        case 6:
            exit(0);
            break;

        default:
            cout << "Entrada inválida" << endl;
            break;
        }
    }
}