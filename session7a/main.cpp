#include <iostream>
#include <ctime>
using namespace std;

typedef unsigned int UINT;
void print(int f, int c, UINT *matrix[]);
void create(int f, int c, UINT **matrix);
UINT** multiply(int f, int c, UINT *a[],UINT *b[] );
void maximiza(int i1, int j1, int i2, int j2, UINT *matrix[]);
void optimize(int f, int c, UINT *matrix[]);
int main() {
    srand(time(nullptr));
    int fils=0, cols=0;
    cout<<"fils:\t";cin>>fils;
    cout<<"cols:\t";cin>>cols;
    UINT **A = new UINT*[fils];
    UINT **B = new UINT*[fils];
    create(fils, cols, A);
    create(fils, cols, B);
    print(fils, cols, A);
    print(fils, cols, B);
    UINT **c = multiply(fils, cols, A, B);
    print(fils, cols, c);
    optimize(fils, cols, c);
    print(fils, cols, c);
    return 0;
}

UINT** multiply(int f, int c, UINT *a[],UINT *b[] ) {
    UINT **m = new UINT*[f];
    for(int i=0; i<f; i++){
        m[i] = new UINT[c];
        for(int j=0; j<c; j++){
            m[i][j] = a[i][j]*b[i][j];
        }
    }
    return m;
}
void create(int f, int c, UINT **matrix){
    for(int i=0; i<f; i++){
        matrix[i] = new UINT[c];
        for(int j=0; j<c; j++){
            matrix[i][j] = rand()%10;
        }
    }
}

void maximiza(int i1, int j1, int i2, int j2, UINT *matrix[]){
    cout<<"maximizando desde"<<i1<<","<<j1<<"hasta"<<i2<<j2<<endl;
    UINT max = 0;
    int ic=0, jc=0;
    for(int i=i1;i<i2; i++){
        for(int j=j1;j<j2;j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
                ic = i;
                jc = j;
            }
        }
    }
    for(int i=i1;i<i2; i++){
        for(int j=j1;j<j2;j++){
            if(i == ic && j == jc){
                matrix[i][j] = max;
            }else{
                matrix[i][j] = 0;
            }
        }
    }
}

void optimize(int f, int c, UINT *matrix[]){
    for(int i=0; i<f; i=i+3){
        for(int j=0; j<c; j=j+3){
            maximiza(i, j, min(i+3,f),min(j+3,c), matrix);
        }
    }
}

void print(int f, int c, UINT *matrix[]){
    cout<<endl;
    for(int j=0; j<c; j++){
        cout<<"\t"<<j;
    }
    cout<<endl;
    for(int i=0; i<f; i++){
        cout<<i<<"|\t";
        for(int j=0; j<c; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}