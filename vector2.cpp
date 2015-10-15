#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
  int i;
  float c;
  vector<float> list;
  cout << "Ingrese los numeros de la lista, cuando termine, ingrese -1" << endl;
  cin >> c;
  while (c != -1){
    list.push_back(c);
    cin >> c;
  }
  int size = list.size();
  float total = 0;
  for ( i=0; i<size; i++){
    total = total + list[i];
  }
  float prom = total / size;
  float semid = 0;
  for ( i=0; i<size; i++){
    semid = semid + (pow((list[i]-prom),2));
  }
  float s = sqrt((semid)/(size-1));
  cout << "La suma total de todos los numeros es: " << total << endl;
  cout << "El promedio de todos los numero es: " << prom << endl;
  cout << "La desviacion estandar es: " << s << endl;
  return 0;
}
