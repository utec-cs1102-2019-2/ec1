#include <iostream>
using namespace std;
void imprimir_tabla(int n, string codigos[], string nombres[], int edades[], char sexo[]);

int main() {
    cout << "Ingrese la cantidad de alumnos" << endl;
    int n = 0;
    cin>>n;
    string *codigos = new string[n];
    string *nombres = new string[n];
    int *edades = new int[n];
    char *sexo = new char[n];

    for(int i=0; i < n; i++){
        cin>>codigos[i];
        cin>>nombres[i];
        cin>>edades[i];
        cin>>sexo[i];
    }
    imprimir_tabla(n, codigos, nombres,edades, sexo);
    return 0;
}

void imprimir_tabla(int n, string codigos[], string nombres[], int edades[], char sexo[]){
    for(int i=0; i<n ; i++){
        cout<<codigos[i]<<"\t";
        cout<<nombres[i]<<"\t";
        cout<<edades[i]<<"\t";
        cout<<sexo[i]<<"\t";
        cout<<endl;

    }
}
