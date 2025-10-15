
//vienas rindas komentārs

#include <iostream>
using namespace std;
int main() {
    string vards; //="Mudīte";
    cout<<"Ievadiet savu vārdu:\t"; cin>>vards;
    int gadi, vecums, men, datums, skaits;
    cout<<"\n\nIevadi dzimšanas gadu:\n", cin>>gadi;
    cout<<"\nLabvakar, "<<vards<<", Tev jau ir "<<gadi<<". gadi!\n";
    // if(gadi>17) cout<<"Pilngadīgs!";
    // else cout<<"\aNepilngadīgs!";
    vecums=2025-gadi;
    cout<<"Tavs vecums ir "<<vecums;
}