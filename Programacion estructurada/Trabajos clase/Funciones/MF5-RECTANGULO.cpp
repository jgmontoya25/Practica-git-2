#include <iostream>
    using namespace std;
        void dibRec(int ancho, int alto){
            for (int i = 0; i < alto; i++){
                for (int j = 0; j < ancho; j++){
                    cout<<"?";
                }
                cout<<"\n";
            }
        }
    int main(){
        dibRec(9,5);
    return 0;
    }