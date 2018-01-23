#include <cstdlib>
#include <iostream>
#include <math.h>
#include "dodawanie.cpp"
#include "odejmowanie.cpp"
#include "dzielenie.cpp"
#include "mnozenie.cpp"

using namespace std;

double a, b;
int wybor;
int main()
{
  cout<<"Projekt LAB6 - GIT"<<endl;
cout<<"Wybierz działanie:"<<endl;
cout<<"1 - Dowadanie; 2 - Odejmowanie; 3 - Mnożenie; 4 - Dzielenie"<<endl;
cin>>wybor;
cout<<"Podaj a: ";
cin>>a;
cout<<"Podaj b: ";
cin>>b;

switch(wybor)
{
  case 1:
    {
    cout<<dodawanie(a, b);
    break;  
    }
  case 2:
    {
    cout<<odejmowanie(a, b);
    break;  
    }  
  case 3:
    {
    cout<<mnozenie(a, b);
    break;
    }
  case 4:
    {
    cout<<dzielenie(a, *b);
    break;  
    }    
}    
 system("PAUSE"); 
return 0;
}
