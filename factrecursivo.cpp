//Fecha: 22/06/2024
//Autor: Joseph Arroyo
//Tema: Funciones recursivas - es la funcion que se llama a si mismo
//-deben tener un punto de salida, para no caer en un bucle infinito
//-Las funciones recursivas reemplazan 
#include<iostream>
using namespace std;

//Factorial con bucles
int funcion(int num)

{
   if(num==0 || num==1)
   return 1;
   int fac=1;
   for(int k=1; k<=num; k++)
   fac=fac * k;
   return fac;
}
 int FactorialRecursico(int num)
{
   if(num==0 || num==1)
   return 1;
   return num * FactorialRecursico(num-1);
}
int main()

{
    cout<<endl<<"Factorial de 5 es "<<Factorial(5);
    cout<<endl<<"Factorial de 6 es "<<Factorial(6);
    cout<<endl<<"Factorial de 4 es "<<FactorialRecursico(4);
    cout<<endl<<"Factorial de 5 es "<<FactorialRecursico(5);
    return 0;
{
    .....;
    .....;
    funcion1()
    .....;

}