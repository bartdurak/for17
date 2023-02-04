#include <iostream>
using namespace std;
int liczba; string imie;
int main()
{
cout << "Podaj imię: ";
cin >> imie;
cout << " Podaj liczbę: ";
cin >> liczba;
 for (int i=1 ; i<=liczba; i++)
 {
     cout << i << ". "<< imie<< endl;
 }
    return 0;
}
