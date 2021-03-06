/*
 * ---------------------------------------------------
 *                ESTRUCTURAS DE DATOS
 * ---------------------------------------------------
 *              Manuel Montenegro Montes
 *              Facultad de Informática
 *         Universidad Complutense de Madrid
 * ---------------------------------------------------
 */
 
/*
 * Pruebas con el TAD Lista
 */

#include <iostream>
#include "list_array.h"


int main() {
  ListArray l(3);
  l.push_back("Javier");
  l.push_back("Simona");
  l.push_back("Jerry");

  std::string &javier = l.at(0);

  l.push_back("David");

  javier = "Javier Francisco";

  return 0;
}