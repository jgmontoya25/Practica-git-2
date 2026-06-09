//Funciones con parametros
//25-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
    void linea(int ren, int guiones){
        for (int i=0; i<ren; i++){
            for(int j=0; j<guiones; j++){
        cout<<"-";
        }
                cout<<"\n";
    }
}
        int main()
        {
            int ren;
            int numGuion;
            
            cout<<"Cuantos renglones de guiones necesita: ";
            cin>>ren;

            cout<<"Cuantos guiones en cada renglon: ";
            cin>>numGuion;

            linea(ren,numGuion);
        }