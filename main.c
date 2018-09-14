/*
 * Este programa fue realizado como la tarea#9 el 13 de septiembre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es mostrar un menú en donde el usuario seleccione que accion quiere hacer,
 * si es perimetro, area o volumen, y dentro de cada opcion permite seleccionar una figura el cual
 * aplicar la operacion.
 *
 * Fecha: 13 de septiembre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */

#include <stdio.h>
#include <math.h>

//Funcion del menú principal
char Menu(){
    char opcion;
    do {
        printf("Selecciona una opción\n");
        printf("A. Perimetro\n");
        printf("B. Superficie\n");
        printf("C. Volumen\n");
        printf("X. Salir\n");
        scanf("%char", &opcion);
    } while ((opcion!='A')&&(opcion!='B')&&(opcion!='C')&&(opcion!='X'));
    return opcion;
}
//Funcion que muestra el menú para seleccionar figuras geometricas para sacar su perimetro o area.
char menuForma(){
    char oF;
    do {
        printf("Selecciona una opción Forma\n");
        printf("A. Cuadrado\n");
        printf("B. Rectangulo\n");
        printf("C. Triángulo\n");
        printf("X. Salir\n");
        scanf("%char", &oF);
    } while ((oF!='A')&&(oF!='B')&&(oF!='C')&&(oF!='X'));
    return oF;
}
//Funcion que muestra el menú para seleccionar cuerpos geometricos para sacar su volumen.
char menuCuerpo(){
    char oC;
    do {
        printf("Selecciona una opción\n");
        printf("A. Cilindro\n");
        printf("B. Cubo\n");
        printf("C. Esfera\n");
        printf("X. Salir\n");
        scanf("%char", &oC);
    } while ((oC!='A')&&(oC!='B')&&(oC!='C')&&(oC!='X'));
    return oC;
}
//perimetros
//Funcion que calcula el perimetro de un cuadrado
double periCua(){
    int lado;
    printf("Escribe el valor del lado.");
    scanf("%i", &lado);
    return 4 * lado;
}
//Funcion que calcula el perimetro de un rectangulo
double periRect(){
    int largo, ancho;
    printf("Escribe el valor del largo.");
    scanf("%i", &largo);
    printf("Escribe el valor del ancho.");
    scanf("%i", &ancho);
    return 2 * largo + 2 * ancho;
}
//Funcion que calcula el perimetro de un triangulo
double periTria(){
    int lado;
    printf("Escribe el valor del lado.");
    scanf("%i", &lado);
    return 3 * lado;
}
// Areas
//Funcion que calcula el area de un cuadrado
double areaCua(){
    int lado;
    printf("Escribe el valor del lado.");
    scanf("%i", &lado);
    return pow(lado,2);
}
//Funcion que calcula el area de un rectangulo
double areaRect(){
    int largo, ancho;
    printf("Escribe el valor del largo.");
    scanf("%i", &largo);
    printf("Escribe el valor del ancho.");
    scanf("%i", &ancho);
    return largo * ancho;
}
//Funcion que calcula el area de un triangulo
double areaTria(){
    int lado, altura ;
    printf("Escribe el valor del lado.");
    scanf("%i", &lado);
    printf("Escribe el valor de la altura.");
    scanf("%i", &altura);
    return lado * altura / 2;
}
// volumenes
//Funcion que calcula el volumen de un cilindro
double volCil(){
    int radio, altura;
    printf("Escribe el valor del radio.");
    scanf("%i", &radio);
    printf("Escribe el valor de la altura.");
    scanf("%i", &altura);
    return 3.1416 * pow(radio,2) * altura;
}
//Funcion que calcula el volumen de un cubo
double volCubo(){
    int lado;
    printf("Escribe el valor del lado.");
    scanf("%i", &lado);
    return pow(lado,3);
}
//Funcion que calcula el volumen de la esfera
double volesfera(){
    int radio;
    printf("Escribe el valor del radio.");
    scanf("%i", &radio);
    return 4/3 * 3.1416 * pow(radio,3);
}

int main(void) {
    double peri, area, volumen;
    int lado, ancho, radio;
    char of, oc;
    char opcion=Menu(); //Llama a la funcion "Menu"
    //El switch permite al usuario navegar por las opciones de la funcion "Menu"
    switch(opcion){
        case 'A':
            printf("Opcion A: Perimetro  \n");
            do {
                of = menuForma(); //Llama a la funcion "menuForma"
                //El switch permite seleccionar a que figura se le va a calcular el perimetro
                switch(of){
                    case 'A':
                        printf("Opcion A: Cuadrado\n");
                        peri = periCua();
                        break;
                    case 'B':
                        printf("Opcion B: Rectangulo\n");
                        peri = periRect();
                        break;
                    case 'C':
                        printf("Opcion C: Triángulo\n");
                        peri = periTria();
                        break;
                    case 'X':
                        printf("Saliste.");
                        continue;
                        break;
                    default:
                        printf("Entrada invalida, intenta de nuevo");
                        break;
                }
            } while ((of!='A')&&(of!='B')&&(of!='C')&&(of!='X'));
            if (of != 'X')
                printf("El perímetro = %lf", peri);
            break;
        case 'B':
            printf("Opcion B: Superficie\n");
            do {
                char of = menuForma(); //Llama a la funcion "menuForma"
                //El switch permite seleccionar a que figura se le va a calcular el area
                switch (of) {
                    case 'A':
                        printf("Opcion A: Cuadrado\n");
                        area = areaCua();
                        break;
                    case 'B':
                        printf("Opcion B: Rectangulo\n");
                        area = areaRect();
                        break;
                    case 'C':
                        printf("Opcion C: Triángulo\n");
                        area = areaTria();
                        break;
                    case 'X':
                        printf("Saliste.");
                        break;
                    default:
                        printf("Entrada invalida, intenta de nuevo");
                        break;
                }
            }while ((of!='A')&&(of!='B')&&(of!='C')&&(of!='X'));
            if (of != 'X')
                printf("El área = %lf", area);
            break;
        case 'C':
            printf("Opcion C: Volumen\n");
            do{
                char oc = menuCuerpo(); //Llama a la funcion "menuCuerpo"
                //El switch permite seleccionar a que figura se le va a calcular el volumen.
                switch(oc) {
                    case 'A':
                        printf("Opcion A: Cilindro\n");
                        volumen = volCil();
                        printf("El volumen = %lf \n", volumen);
                        break;
                    case 'B':
                        printf("Opcion B: Cubo\n");
                        volumen = volCubo();
                        printf("El volumen = %lf \n", volumen);
                        break;
                    case 'C':
                        printf("Opcion C: Esfera\n");
                        volumen = volesfera();
                        printf("El volumen = %lf \n", volumen);
                        break;
                    case 'X':
                        printf("Saliste.");
                        continue;
                        break;
                    default:
                        printf("Entrada invalida, intenta de nuevo");
                        break;
                }
            } while ((oc!='A')&&(oc!='B')&&(oc!='C')&&(oc!='X'));
            //     printf("El volumen = %lf", volumen);
            break;
        case 'X':
            printf("Saliste.");
            break;
        default:
            printf("Entrada invalida, intenta de nuevo");
            //    opcion=Menu();
            break;
    }
    return 0;
}