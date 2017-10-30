//Saber la edad promedio a la que se graduan los estudiantes de la lic. en fisica
//Alondra Dominguez Gonzalez 
//30 de Octubre del 2017

#include <iostream>
using namespace std;
int main (){
  size_t talla=14;
  int*edad=new int[talla];
  int suma=0;
  for(int i=0; i<talla; i++)
{
  cout<<"¿a que edad terminaste la carrera? "<<endl;
  cin>>edad[i];
  suma+=edad[i];
    }
  for (int j=0; j<talla; j++)
    cout<<edad[j]<< ",";
  cout<<endl;
  cout<<"La edad promedio de graduacion esperada es "<<suma/talla<<endl;
  delete []edad;
    return 0;
}
