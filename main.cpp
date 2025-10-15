
#include <iostream>
using namespace std;
int main()
{


    int marcinas, silini, pensi, j_marcinas;
        cout<<"Ievadiet mārciņas:\t"; 
        cin>>marcinas;
        cout<<"Ievadiet šiliņus':\t"; 
        cin>>silini;
        cout<<"Ievadiet pensus:\t"; 
        cin>>pensi;
        
        pensi=marcinas*240+silini*12+pensi;
        j_marcinas=pensi/100;
        pensi=pensi%100;

        cout<<"Jaunās mārciņas ir " <<j_marcinas;
        cout<<"\nPensi ir " <<pensi;
    
}
