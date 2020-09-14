#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int NumeroDePaciente = 0;

struct nodo
{
    int Numero;
    string NombrePaciente;
    string ApellidoPaterno;
    string ApellidoMaterno;
    string TelefonoPaciente;
    string EdadPaciente;
    struct nodo *sig;
};

typedef struct nodo *Head;

void insertar(Head &lista, string Nombre, string ApellidoP, string ApellidoM, string Telefono, string Edad)
{
    Head inicio;
    inicio = new(struct nodo);
    NumeroDePaciente++;
    inicio->Numero = NumeroDePaciente;
    inicio->NombrePaciente = Nombre;
    inicio->ApellidoPaterno = ApellidoP;
    inicio->ApellidoMaterno = ApellidoM;
    inicio->TelefonoPaciente = Telefono;
    inicio->EdadPaciente = Edad;
    inicio->sig = lista;
    lista = inicio;
        cout << "\nLos datos ingresados son:\n";
        cout << "Numero de Paciente: " << lista->Numero << endl;
        cout << "Nombre del Paciente: " << lista->NombrePaciente << endl;
        cout << "Apellido Paterno: " << lista->ApellidoPaterno << endl;
        cout << "Apellido Materno: " << lista->ApellidoMaterno << endl;
        cout << "Telefono: " << lista->TelefonoPaciente << endl;
        cout << "Edad: " << lista->EdadPaciente << endl;
    cout << "\nPaciente agregado exitosamente" << endl;
}

void buscarElemento(Head &lista, int BuscaryEliminar)
{
    Head aux = lista;
    int i = 1, Flag = 0;
    while(aux!=NULL)
    {
        if(aux->Numero==BuscaryEliminar)
        {
            cout << "Encontrado en la posicion: " << i << endl;
            cout << "\nNumero de Paciente: " << aux->Numero << endl;
            cout << "Nombre del Paciente: " << aux->NombrePaciente << endl;
            cout << "Apellido Paterno: " << aux->ApellidoPaterno << endl;
            cout << "Apellido Materno: " << aux->ApellidoMaterno << endl;
            cout << "Telefono: " << aux->TelefonoPaciente << endl;
            cout << "Edad: " << aux->EdadPaciente << endl;
            Flag = 1;
        }
        aux = aux->sig;
        i++;
    }

    if(Flag==0)
        cout << "Valor no encontrado!!!" << endl;
}

void eliminar(Head &lista, int BuscaryEliminar)
{
    Head aux, ant;
    aux=lista;
    if(lista!=NULL)         ///Verifica si hay elementos en la lista
    {
        while(aux!=NULL)    ///Recorre a traves de la lista
        {
            if(aux->Numero==BuscaryEliminar)       ///Verifica si el numero ingresado es igual a la posicion a eliminar
            {
                if(aux==lista)
                    lista=lista->sig;
                else
                    ant->sig=aux->sig;
                delete(aux);
                cout << "Paciente eliminado correctamente" << endl;
                return;
            }
            ant=aux;
            aux=aux->sig;
        }
        cout << "No existe ese numero de cliente" << endl;
    }
    else
    {
        cout << "Lista esta vacia!!!" << endl;
    }
}

void imprimir(Head lista)
{
    int cont = 0;
    while(lista!=NULL)
    {
        cout << "\nNumero de Paciente: " << lista->Numero << endl;
        cout << "Nombre del Paciente: " << lista->NombrePaciente << endl;
        cout << "Apellido Paterno: " << lista->ApellidoPaterno << endl;
        cout << "Apellido Materno: " << lista->ApellidoMaterno << endl;
        cout << "Telefono: " << lista->TelefonoPaciente << endl;
        cout << "Edad: " << lista->EdadPaciente << endl;
        lista=lista->sig;
        cont++;
    }
    cout << '\n' << "El tamano de la lista es: " << cont << endl;

}

void menu()
{
    cout << "\nListas Enlazadas" << endl;
    cout << "1.- Agregar Nuevo Paciente" << endl;
    cout << "2.- Buscar Paciente Existente" << endl;
    cout << "3.- Borrar Paciente Existente" << endl;
    cout << "4.- Imprimir Catalogo de Clientes" << endl;
    cout << "5.- Salir del Programa" << endl;
    cout << "Ingresa la Opcion: " << endl;
}

int main()
{
    Head lista = NULL;
    int Op;
    string Nombre;
    int BuscaryEliminar;
    string ApellidoP;
    string ApellidoM;
    string Telefono;
    string Edad;

    ///system("color 0b");

    do
    {
        menu();
        cin >> Op;
        switch(Op)
        {
            case 1:
                {
                    cout << "Insertar nuevo elemento: " << endl;
                    cout << "\nNombre del Paciente: ";
                    cin >> Nombre;
                    cout << "\nApellido Paterno del Paciente: ";
                    cin >> ApellidoP;
                    cout << "\nApellido Materno del Paciente: ";
                    cin >> ApellidoM;
                    cout << "\nTelefono: ";
                    cin >> Telefono;
                    cout << "\nEdad: ";
                    cin >> Edad;
                    cout << "la edad leida es :     " << Edad<<endl;
                    insertar(lista, Nombre, ApellidoP, ApellidoM, Telefono, Edad);
                }break;
            case 2:
                {
                    cout << "Numero de paciente a buscar: " << endl;
                    cin >> BuscaryEliminar;
                    buscarElemento(lista, BuscaryEliminar);
                }break;
            case 3:
                {
                    cout << "Borrar cliente: " << endl;
                    cin >> BuscaryEliminar;
                    eliminar(lista, BuscaryEliminar);
                }break;
            case 4:
                {
                    imprimir(lista);
                }break;


            ///system("cls");
        }
    }while(Op!=5);
    return 0;
}

