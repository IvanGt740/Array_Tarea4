#include <iostream>
using namespace std;

main(){
    //array = arreglo o coleccion o matriz
    // se utilizan para almacenar varios valores en una sola variable
    int nota=0, tam=0,suma=0,promedio=0;
    int notas[tam];
    char res;

    do{
        tam++;
        cout<<"Ingrese nota: " <<tam<<": ";
        cin>>nota;
        notas[tam-1] = nota;
        cout<<"¿Desea ingresar otra nota?(s/n):";
        cin>>res;
    }while(res=='s'||res=='S');
    
    for(int i=0;i<tam;i++){
        suma+=notas[i];
    }

    promedio = suma / tam;

    cout<<"El promedio es: "<<promedio<<endl;

    system("pause");
   return 0;}

/*
cout<<"¿Cuantas notas desea ingresar?";
cin>>tam;
int notas[tam];
    for(int i=0;i<tam;i++){
        cout<<"Ingrese Nota: "<<i+1<<":";
        cin>>notas[i];
    }

    for(int i=0;i<tam;i++){
        suma = suma+notas[i]; 
    }

    promedio = suma / tam;
    cout<<"El promedio es: "<<promedio<<endl;

*/










