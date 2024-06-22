//Fecha: 22/06/2024
//Autor: Joseph Arroyo
//Tema: Ejercicios con funciones recursivas
#include<iostream>
using namespace std;
//Dise;e la funcion recursiva que imprima los numeros del 1 al 20
//Funcion recursiva que imorime a los numeros del 1 al 20

void ImprimeNumeros(int num)
{
    if(num <=20)
    {
        cout<<endl<<num;
        ImprimeNumeros(num + 1);
    }
}

//Disene la funcion recursiva que imprime los numeros de 1 a n, donde
//n es el limite de la serie
    int showNumbersN(int i,int n){
        if(i <= n){
            cout<<endl<<i;
            showNumbersN(i + 1, n);
    }else{
        cout<<"";
    }

}

//Disene la funcion recursiva que imprima una tabla de multiplicar 
//desde el 1 al 12

void TablaMultiplicar(int k, int limite,int tabla){
    if(k<=limite){
        cout<<endl<<i<<" x "<<tabla<<" = "<<k*tabla;
        TablaMultiplicar(k+1,limite,tabla);
    }
}

int main()
{
    //ImprimeNumeros(1);
    int a,b;
    //showNumeros(1,15);
    TablaMultiplicar(1,12,5);cout<<endl;
    TablaMultiplicar(3,9,10);

    return 0;
}