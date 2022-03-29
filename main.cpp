#include <iostream>
using namespace std;


int main() {
    float a,b;
    cin>> a >>b;
    int opzione;
    cin>> opzione;
    float Atriangolo=0, Aquadrato=0, Arettangolo=0;
            switch( opzione ){
        case 0:
            Atriangolo= ((a*b)/2);
            cout<< Atriangolo <<endl;
                    break;
                case 1:
                    Aquadrato= (a*a);
                    cout<< Aquadrato <<endl;
                    break;
                case 2:
                    Arettangolo= (a*b);
                    cout<< Arettangolo<<endl;
                default:
                    cout<< "opzione non valida"<<endl;
            }
    return 0;
}

