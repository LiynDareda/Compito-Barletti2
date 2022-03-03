/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Leonardo Barletti 3/3/2022
*/

# include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (n>0)
  {
   cout<<"Bada come la fuma"<<endl; 
   n--;
  }
  system("pause");
}
