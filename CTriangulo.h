//
// Created by MARIA HILDA BERMEJO RIOS on 10/30/20.
//

#ifndef EJ_02TRIANGULO_CTRIANGULO_H
#define EJ_02TRIANGULO_CTRIANGULO_H

#include <iostream>
using  namespace  std;

using tnumero = double;

class CTriangulo
{
  private:
    tnumero l1;
    tnumero l2;
    tnumero l3;
    tnumero semiperimetro();
  public:
    CTriangulo(){};  //--- constructor por defecto
    CTriangulo( tnumero _l1, tnumero _l2, tnumero _l3): l1(_l1), l2(_l2), l3(_l3) { };
    virtual ~CTriangulo() { cout << "\n Destruyendo el objeto......."; }
    tnumero area();
    tnumero perimetro();
    //--- metodos de acceso
    void setl1(tnumero _l1) { l1 = _l1; }
    tnumero getl1(){ return l1; }
    void setl2(tnumero _l2) { l2 = _l2; }
    tnumero getl2() { return l2;}
    void setl3(tnumero _l3) { l3 = _l3;}
    tnumero getl3() { return l3; }
};


#endif //EJ_02TRIANGULO_CTRIANGULO_H
