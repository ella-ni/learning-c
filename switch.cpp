

#include <cmath>
#include <iostream>
using namespace std;
int main () { 
      int men;   //ja skaitlis tad int
  cout << "Ievadiet mēneša kārtas skaitli: " << endl;   
  cin >> men; 
  switch(men) {   
    case 12: 
    case 1 ... 2 : cout << " ziema " << "\n" ;  break;
    case 3 ... 5 : cout << " pavasaris " << "\n" ;  break;
    case 6 ... 8 : cout << " vasara " << "\n" ;  break;
    case 9 ... 11 : cout << " rudens " << "\n" ;  break;

    default : cout << "nav gadalaiks";  
    
    
    
//   int atzime;   //ja skaitlis tad int
//   cout << "Ievadiet atzīmi: " << endl;   
//   cin >> atzime; 
//   switch(atzime) {    
//     case 4 : cout << " sekmīgs " << "\n" ;  break;
//     case 4 : cout << " sekmīgs " << "\n" ;  break;
//     case 5 : cout << " viduvēji " << "\n" ;  break;
//     case 6 : cout << " gandrīz labi " << "\n" ;  break; 
//     case 7 : cout << " labi " << "\n" ;  break;      
//     case 8 : cout << " ļoti labi " << "\n" ;  break;  
//     case 9 : cout << " teicami " << "\n" ;  break;  
//     case 10 : cout << " izcili " << "\n" ;  break;  
//     default : cout << "nav atzīme";  
  }  
}

// 