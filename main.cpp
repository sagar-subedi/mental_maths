#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "Functions.h"
using namespace std;
int selection{};
bool r;
int main()
{   do{
    selection = intf();
    //hclearerr();
    cout << "==========================================================================" << endl;
    switch(selection){
    case 1:
    prd11();
    break;
    case 2:
    prd();
    break;
    case 3:
    sum();
    break;
    case 4:
    diff();
    break;
    }
    cout << "===========================================================================" << endl;;
    cout << "Q: Quit" << endl << "Any other key: Again" << endl; 
    char a;
    cin >> a;
    if (a=='q' or a=='Q')
        r = false;
    else
        r = true;
        
    
} while(r);
	
    
    return 0;
}
