//
//
//

#include <iostream>
    using namespace std;
        int main()
            {
                int num;
                int numS = 0;
                do
                {
                    cout<<"ingrese numero" <<"\n";
                    cin>>num;
                    if (num > 0)
                    { 
                        numS = numS + num;
                    }
                }
                while (num>0);
                cout<<"Su suma es " <<numS <<"\n";
    return 0;
            }
