#include <iostream>
#include <ctime>

using namespace std;
typedef unsigned int UINT;
void print(int f, int c, int l, UINT ***matrix);
void create_matrix(int f, int c, int l, UINT ***matrix);
void promedia(int f, int c, int l, UINT ***matrix);
int main() {
    srand(time(nullptr));
    int fils=0, cols=0, len =3;
    cout<<"fils:\t";cin>>fils;
    cout<<"cols:\t";cin>>cols;
    UINT ***A = new UINT**[fils];
    create_matrix(fils, cols, len, A);
    print(fils, cols, len, A);

    promedia(fils,cols, len, A);
    print(fils, cols, len, A);

    return 0;
}

void create_matrix(int f, int c, int l, UINT ***matrix){
    for(int i=0; i<f; i++){
        matrix[i] = new UINT*[c];
        for(int j=0; j<c; j++){
            matrix[i][j] = new UINT[3];
            for(int k=0; k<l; k++){
                matrix[i][j][k] = rand()%256;
            }
        }
    }
}

void promedia(int f, int c, int l, UINT ***matrix){
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            UINT suma = 0;
            for(int k=0; k<l; k++){
                suma += matrix[i][j][k];
            }
            UINT avg = suma/l;
            for(int k=0; k<l; k++){
                matrix[i][j][k] = avg;
            }
        }
    }
}

void print(int f, int c, int l, UINT ***matrix){
    cout<<endl;
    for(int j=0; j<c; j++){
        cout<<"\t"<<j;
    }
    cout<<endl;
    for(int i=0; i<f; i++){
        cout<<i<<"|\t";
        for(int j=0; j<c; j++){
            for(int k=0; k<l;k++) {
                cout << matrix[i][j][k] << ",";
            }
            cout<<"\t";
        }
        cout<<endl;
    }
}