
#include <iostream>
using namespace std;

int main(){
    
    int skaits, i=1;
    do{
        cout<<"Cik reizes luksaforam jāizpildās?";
        cin>>skaits;
     cout<<"\033c";
    }while (skaits<1); 
    for(i;i<=skaits;i++)
    
    {
    cout<<"\x1B[41m sarkana krāsa! \n";
    sleep(2);
    cout<<"\x1B[43m dzeltena krāsa! \n";
    sleep(1);
    cout << "\x1B[49m\x1B[2J";
    cout<<"\x1B[42m zaļa krāsa! \n";
    sleep(2);
    cout<<"\033c";
    cout<<"\x1B[43m\n dzeltena krāsa! \n";
    sleep(1);
    cout<<"\033c";
    }
    
    return 0;
    }