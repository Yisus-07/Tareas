#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Daniel Encalada y Jesus Guaygua.
int opcion1, opcion2, productoLlanta, productoFreno, productoEmbrague, productoFaro, productoradiador, ayuda, sumatotal, totaliva, resultadofinal;
int contadorLlanta = 0, contadorFreno = 0, contadorEmbrague = 0, contadorFaro = 0, contadorRadiador = 0;
char nombre[20], direccion[50], fecha[11], telefono[10], cedula[13], apellido [20]; 
int llantas = 150, pastillasfreno = 55, embrague = 180, faro = 70, radiador = 120 ;
int ayudallanta = 0, ayudafreno = 0, ayudaembrague = 0, ayudafaro = 0, ayudaradiador = 0;
int prdllantafin, prdfrenofin,prdembraguefin, prdfarofin, prdradiadorfin;
int valorllanta, valorfreno, valorembrague, valorfaro, valorradiador;


int main(void){
  
  printf("Ingrese nombre para la factura:\t");
  fgets(nombre, 20, stdin);

  printf("Ingrese direccion del domicilio:\t");
  fgets(direccion, 50, stdin);

  printf("Fecha de la factura por emitir:\t");
  fgets(fecha, 11, stdin);

  printf("Ingrese numero de telefono:\t");
  scanf("%s", telefono);

  printf("Ingrese numero de cedula:\t");
  scanf("%s", cedula);

  printf("-----------------------------------\n");
  printf("Productos disponibles:\n");
  printf("1.LLantas \n");
  printf("2.Kit pastillas de freno\n");
  printf("3.Kit de embrague\n");
  printf("4.Faro\n");
  printf("5.Radiador\n");
  printf("-----------------------------------\n");
  printf("Desea comprar?\n");
  printf("1. Si\n");
  printf("2. No\n");
  printf("-----------------------------------\n");
  scanf("%d",&opcion1);
  
  if ( opcion1 == 1){
    do{
      printf("------------------------------------------------------\n");
      printf("Elija el producto:\n");
      printf("1.LLantas--Precio unidad <----------------------> 150$ \n");
      printf("2.Kit pastillas de freno--Precio unidad <-------> 55$\n");
      printf("3.Kit de embrague--Precio unidad <--------------> 180$\n");
      printf("4.Faro--Precio unidad <-------------------------> 70$\n");
      printf("5.Radiador--Precio unidad <---------------------> 120$\n");
      printf("6.Dejar de comprar\n");
      printf("------------------------------------------------------\n");
      scanf("%d",&opcion2);
      switch(opcion2){
        case 1:
          
          printf("Cuantos productos desea comprar: \t");
          scanf("%d",&productoLlanta);
          while (contadorLlanta != productoLlanta){
            contadorLlanta = contadorLlanta + 1;
            ayudallanta = ayudallanta + llantas;
          }
          
          printf("El valor es: %d \n",ayudallanta);

        break;
            
        case 2:
          printf("Cuantos productos desea comprar: \t");
          scanf("%d",&productoFreno);
          while (contadorFreno != productoFreno){
            contadorFreno = contadorFreno + 1;
            ayudafreno = ayudafreno + pastillasfreno;
          }
          printf("El valor es: %d \n",ayudafreno);

        
        break;
        case 3:
          
          printf("Cuantos productos desea comprar: \t");
          scanf("%d",&productoEmbrague);
          while (contadorEmbrague != productoEmbrague){
            contadorEmbrague = contadorEmbrague + 1;
            ayudaembrague = ayudaembrague + embrague;
          }
          printf("El valor es: %d \n",ayudaembrague);



        break;
        
        case 4:
          
          printf("Cuantos productos desea comprar: \t");
          scanf("%d",&productoFaro);
          while (contadorFaro != productoFaro){
            contadorFaro = contadorFaro + 1;
            ayudafaro = ayudafaro + faro;
          }
          printf("El valor es: %d \n",ayudafaro);


          
        break;
        
        case 5:
          
          printf("Cuantos productos desea comprar: \t");
          scanf("%d",&productoradiador);
          while (contadorRadiador != productoradiador){
            contadorRadiador = contadorRadiador+ 1;
            ayudaradiador = ayudaradiador + radiador;
          }
          printf("El valor es: %d \n",ayudaradiador);

        break;
        
      }  
      
    } while (opcion2 <= 5);


  if ( productoFaro > 0 || productoLlanta > 0 || productoEmbrague > 0 || productoFreno > 0 ||       productoradiador > 0){
    printf("---------------------------FACTURA---------------------------\n");
    printf("Nombre: %s\t",nombre);
    printf ("Nº Cedula: %s\t",cedula);
    printf ("Fecha: %s\t",fecha);
    printf ("Direccion: %s\t",direccion);
    printf ("Telefono: %s\n",telefono);
    printf("-------------------------------------------------------------\n");
    printf("Producto---Cantidad---P/U---Precio Total\n");
    printf("-------------------------------------------------------------\n");

      if (productoLlanta > 0 && ayudallanta > 0){
        prdllantafin = productoLlanta;
        valorllanta = ayudallanta;
       
        printf("Llanta        %d\t      %d\t     %d\n",productoLlanta, llantas, ayudallanta);
      }

      if(productoFreno > 0 && ayudafreno > 0){
        prdfrenofin= productoFreno;
        valorfreno = ayudafreno;
     printf("Freno         %d\t      %d\t     %d\n",productoFreno, pastillasfreno, ayudafreno);
      }

      if(productoEmbrague > 0 && ayudaembrague >0){
        prdembraguefin = productoEmbrague;
        valorembrague = ayudaembrague;

        printf("Embrague      %d\t      %d\t     %d\n",productoEmbrague, embrague, ayudaembrague);
      }

      if(productoFaro > 0 && ayudafaro > 0){
        prdfarofin = productoFaro;
        valorfaro = ayudafaro;


        printf("Faro          %d\t      %d\t     %d\n",productoFaro, faro, ayudafaro);
      }

      if (productoradiador > 0 && ayudaradiador > 0){
        prdradiadorfin = productoradiador;
        valorradiador = ayudaradiador;
        printf("Radiador      %d\t      %d\t     %d\n",productoradiador, radiador, ayudaradiador);
      }
    
      sumatotal = ayudafaro + ayudafreno + ayudaembrague + ayudallanta + ayudaradiador;
      totaliva = sumatotal * 0.12;
      resultadofinal = sumatotal + totaliva;
      printf("-------------------------------------------------------------\n");
      printf("El valor total:                  %d\n", sumatotal);
      printf("El valor total + iva:            %d\n", resultadofinal);
      printf("-------------------------------------------------------------\n");
  }
  
  
  }else if ( opcion1 == 2){
    printf ("Gracias por visitar la pagina! \n");
  }
  
return 0;
}