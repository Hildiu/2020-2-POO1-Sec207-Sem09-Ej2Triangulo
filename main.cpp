//-- Datos de entrada: lado1, lado2, lado3 (double)
//-- Datos de Salida : area, perimetro (double)


#include "CTriangulo.h"

int main()
{
  tnumero lado1, lado2, lado3;

  do {
    cout << "Lado 1: "; cin>> lado1;
    cout << "Lado 2: "; cin >> lado2;
    cout << "Lado 3: "; cin >> lado3;
  }while( !( (lado1 + lado2 > lado3) and (lado2 + lado3> lado1) and ( lado3 + lado1 > lado2)));

  CTriangulo T1(lado1, lado2, lado3);
  cout << "El area es : " << T1.area() << "\n";
  cout << "El perimetro es : " << T1.perimetro() << "\n";

 T1.setl1( T1.getl1() + 10 );
 T1.setl2( T1.getl2() + 10 );
 T1.setl3( T1.getl3() + 10 );
 cout << "\nDespues de actualizar los valores de los lados imprimirmos nuevamente el area y el perimetro\n";
 cout << "El area es : " << T1.area() << "\n";
 cout << "El perimetro es : " << T1.perimetro() << "\n";

 cout << "\n Creamos otro triangulo \n";
 CTriangulo T2;

 T2.setl1(7);
 T2.setl2(24);
 T2.setl3(25);
  cout << "El area es : " << T2.area() << "\n";
  cout << "El perimetro es : " << T2.perimetro() << "\n";

  cout << "\n Se crea un objeto Triangulo dinamicamente \n";
  CTriangulo    *pT= nullptr;

  pT = new CTriangulo(30,40,50);
  cout << "El area es : " << pT->area() << "\n";
  cout << "El perimetro es : " << (*pT).perimetro() << "\n";
  delete pT;
  pT=nullptr;


  return 0;
}
