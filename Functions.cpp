#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
//lets user enter how many calculation he wants to perform
int num_g(){
 cout << "Enter the number of calculations you desire to perform: ";
    int a;
    cin >> a;
cout << "--------------------------------------------------------------------------" << endl; 
    if(a<20)
    return a;
    else
    return 10;
}
void prd11(){
 srand((int)time(0));
	int a = num_g();
    for(int i=0; i<a;i++)
    {
    int c{},d{};
    c=rand()%10 * 100000 + rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + rand()%10 * 10 + rand()%10;
    d=rand()%10 * 100000 + rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + rand()%10 * 10 + rand()%10;
        cout << c << " * " << 11 << " = " ;
        getch();
        cout <<  c*11 << endl;
    }   
}
void sum(){
 srand((int)time(0));
	int a = num_g();
    for(int i=0; i<a;i++)
    {
    int c{},d{};
    c=/*rand()%10 * 100000 + */rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + rand()%10 * 10 + rand()%10;
    d=/* rand()%10 * 100000 + */rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + rand()%10 * 10 + rand()%10;
        cout << c << " + " << d << " = " ;
        getch();
        cout <<  c+d << endl;
    }   
}   

void diff(){
  srand((int)time(0));
	int a = num_g();
    for(int i=0; i<a;i++)
    {
    int c{},d{};
    c=rand()%10 * 100000 + rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + rand()%10 * 10 + rand()%10;
    d=rand()%10 * 100000 + rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + rand()%10 * 10 + rand()%10;
        cout << c << " - " << d << " = " ;
        getch();
        cout <<  c-d << endl;
    }   
}  

void prd(){
 srand((int)time(0));
	int a = num_g();
    for(int i=0; i<a;i++)
    {
    int c{},d{};
    c=/*rand()%10 * 100000 + rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + */rand()%10 * 10 + rand()%10;
    d=/*rand()%10 * 100000 + rand()%10 * 10000 + rand()%10 * 1000 + rand()%10 * 100 + */ rand()%10 * 10 + rand()%10;
        cout << c << " * " << d << " = " ;
        getch();
        cout <<  c*d << endl;
    }   
}
    

//Create the interface to let user select the option based on what he wants
int intf(){
    
    int selection;
    cout << "What do you want to do?"<< endl;
    cout << "1: Multiplication  by 11" << endl;
    cout << "2: Multiplicaiton (any number)" << endl;
    cout << "3: Sum" << endl;
    cout << "4: Difference" << endl;
    cout << "5: Square Root" << endl;
    cin >> selection;
    return selection;
}


