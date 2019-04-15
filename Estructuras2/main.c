#include <stdio.h>
#include <stdlib.h>
#define  T 3

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;





int legajo;
void pedirDato(char[20]);
int ingresoEntero(void);
char ingresoChar(void);
float ingresoFloat(void);
void cargarEmpleado(eEmpleado[], int);
char pedirDato(void);






int main()
{   int primerNumero=10;
    int segundoNumero= 15;
    int resultado;

    resultado=sumarNumeros(primerNumero, segundoNumero);
    printf("el resultado es: %d", resultado);
/*
    int i=0;
    eEmpleado empleados[20];
    cargarEmpleado(empleados, T);
for(i=0;i<T;i++){

    printf("%d-%s-%c-%f-%f\n", empleados[i].legajo,empleados[i].nombre, empleados[i].sexo, empleados[i].sueldoBruto,empleados[i].sueldoNeto);
}
*/

    return 0;
}
void pedirDato(char dato[20]){
    fflush(stdin);
    printf("Ingrese %s:", dato);

}
int ingresoEntero(void){
    int entero;
    scanf("%d", &entero);
    return entero;

}
char ingresoChar(void){
    char  unCaracter;
    scanf("%c",unCaracter);
    return unCaracter;
}
float ingresoFloat(void){
    float unFlotante;
    scanf("%f", unFlotante);
    return unFlotante;

}
void cargarEmpleado(eEmpleado lista[], int tam){

    int i;
    for(i=0;i<tam; i++){
    pedirDato("legajo");
    scanf("%d", &lista[i].legajo);
    pedirDato("nombre");
    fflush(stdin);
    scanf("%s",lista[i].nombre);
    pedirDato("sexo");
    fflush(stdin);
    scanf("%s", &lista[i].sexo);
    pedirDato("sueldo bruto");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
}




}
int sumarNumeros(int numeroUno, int numeroDos){
    int resultado;
    resultado=numeroUno+numeroDos;
    return resultado;
}
