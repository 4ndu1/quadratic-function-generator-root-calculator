#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;
 
int main(){
 srand((unsigned) time(0));

 float x1, x2, raiz;

 x1 = 0;
 x2 = 0;

 int a;
 int b;
 int c; 

 do{

   a = rand() %11;
   b = rand() %11;
   c = rand() %11;

 raiz = b*b - 4*a*c;

 }while(raiz <= 0);

  cout << "Funcion: "<< a << "x^2+" << b << "x+" << c << endl;

 if(raiz > 0){
   x1 = (-b + sqrt(raiz)) / (2*a);
   x2 = (-b - sqrt(raiz)) / (2*a);

   cout << "x1 vale: "<< x1 << endl << "x2 vale: "<< x2 << endl;

 }

 return 0;

}
