
#ifndef _MAIN
#define _MAIN

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/Array.hpp"
#include "biblioteca/tads/Map.hpp"
#include "biblioteca/tads/List.hpp"
#include "biblioteca/tads/Stack.hpp"
#include "biblioteca/tads/Queue.hpp"
#include "biblioteca/tads/Coll.hpp"

using namespace std;

int main() {
string s = "Esta funcion es la funcion mas dificil";
int p = lastIndexOf(s,'i');
cout << p << endl; // muestra:
p = lastIndexOf(s,'l');
cout << p << endl; // muestra:
}
#endif

