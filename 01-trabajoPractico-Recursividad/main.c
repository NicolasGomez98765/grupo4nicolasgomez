#include "TP1_Recursividad.h"

int main (int argc, char *argv[]){

    int respuesta = 3;

    while (respuesta!=0){

        printf("\n\nBIENVENIDO AL TP DE RECURSIVIDAD, SELECCIONE UNA OPCION: \n");
        printf("1)EJERCICIO 1.\n");
        printf("2)EJERCICIO 2.\n");
        printf("3)EJERCICIO 3.\n");
        printf("4)EJERCICIO 4.\n");
        printf("5)EJERCICIO 5.\n");
        printf("6)EJERCICIO 6.\n");
        printf("7)EJERCICIO 7.\n");
        printf("8)EJERCICIO 8.\n");
        printf("9)EJERCICIO 9.\n");
        printf("10)EJERCICIO 10.\n\n");
        printf("PARA SALIR, INGRESE 0.\n\n");
        printf("INGRESE AQUI SU RESPUESTA: ");
        int validar = scanf("%d",&respuesta);
        fflush(stdin);

        while ((respuesta<0||respuesta>10)|| validar == 0){

            printf("Por favor, ingrese una respuesta valida: ");
            validar = scanf("%d",&respuesta);
            fflush(stdin);
        }

        if (respuesta == 1){

            char *cadena = malloc(sizeof(char)*100);
            printf("ingrese cadena: ");
            gets(cadena);
            fflush(stdin);
            while(strlen(cadena) == 0){
                printf("ingrese cadena nuevamente: ");
                gets(cadena);
                fflush(stdin);
            }

            bool resultado;
            resultado = palindromo(cadena);

            if(resultado){
                printf("es palindromo\n");
            }
            else{
                printf("no es palindromo\n");
            }
            printf("ingresar cadena nueva si quiere continuar, si no quiere continuar ingresar -1: ");
            gets(cadena);
            fflush(stdin);
            while (strcmp(cadena,"-1") != 0){
                resultado = palindromo(cadena);

                if(resultado){
                    printf("es palindromo\n");
                }
                else{
                    printf("no es palindromo\n");
                }
                printf("ingresar cadena nueva si quiere continuar, si no quiere continuar ingresar -1: ");
                gets(cadena);
                fflush(stdin);
            }
            free(cadena);
        }

        else if(respuesta == 2){

            int m,n;
            int resultado;
            int validar1;
            int validar2;
            printf("ingrese numero 1: ");
            validar1 = scanf("%d",&m);
            fflush(stdin);

            while (validar1 < 1){
                printf("ingreso un valor incorrecto, ingrese un numero entero: ");
                validar1 = scanf("%d",&m);
                fflush(stdin);
            }

            printf("ingrese numero 2: ");
            validar2 = scanf("%d",&n);
            fflush(stdin);

            while (validar2 < 1){
                printf("ingreso un valor incorrecto, ingrese un numero entero: ");
                validar2 = scanf("%d",&n);
                fflush(stdin);
            }


            if(n < 0){
                int z;
                int agregarnegativo2;
                z = abs(n);
                resultado = producto(m,z);
                agregarnegativo2 = resultado * -1;
                printf("el producto es %d\n",agregarnegativo2);

            }
            else{
                resultado = producto(m,n);
                printf("el producto es %d\n",resultado);
            }


            printf("desea ingresar nuevo valor? [1] para si [-1] para no: ");
            int continuar;
            validar1 = scanf("%d",&continuar);
            fflush(stdin);
            bool valor=false;
            if(continuar==1 || continuar==-1){
                valor=true;
            }
            while(validar1!=1 || valor==false){
                printf("Ingrese solo [1] o [-1] por favor\n");
                printf("desea ingresar nuevo valor? [1] para si [-1] para no: ");
                validar1 = scanf("%d",&continuar);
                fflush(stdin);
                if(continuar==1 || continuar==-1){
                valor=true;
            }
            }
            while(continuar!=-1){
                printf("ingrese numero 1: ");
                validar1 = scanf("%d",&m);
                fflush(stdin);

                while (validar1 < 1){
                    printf("ingreso un valor incorrecto, ingrese un numero entero: ");
                    validar1 = scanf("%d",&m);
                    fflush(stdin);
                }

                printf("ingrese numero 2: ");
                validar2 = scanf("%d",&n);
                fflush(stdin);


                while (validar2 < 1){
                    printf("ingreso un valor incorrecto, ingrese un numero entero: ");
                    validar2 = scanf("%d",&n);
                    fflush(stdin);
                }


                if(n < 0){
                    int z;
                    int agregarnegativo2;
                    z = abs(n);
                    resultado = producto(m,z);
                    agregarnegativo2 = resultado * -1;
                    printf("el producto es %d\n",agregarnegativo2);

                }
                else{
                    resultado = producto(m,n);
                    printf("el producto es %d\n",resultado);
                }
                printf("desea ingresar nuevo valor? [1] para si [-1] para no: \n");
                validar1 = scanf("%d",&continuar);
                fflush(stdin);
                valor=false;
                if(continuar==1 || continuar==-1){
                    valor=true;
                }
                while(validar1!=1 || valor==false){
                    printf("Ingrese solo [1] o [-1] por favor\n");
                    printf("desea ingresar nuevo valor? [1] para si [-1] para no: \n");
                    validar1 =scanf("%d",&continuar);
                    fflush(stdin);
                    if(continuar==1 || continuar==-1){
                    valor=true;
                    }
                }
            }
        }

        else if(respuesta == 3){

            printf("ingrese un numero para calcular k-enecimo de fibonacci: \n");
            int validar1;
            int k;
            validar1 = scanf("%d",&k);
            fflush(stdin);
            while (validar1 != 1){
                printf("ingreso un valor incorrecto, ingrese un numero entero: \n");
                validar1 = scanf("%d",&k);
                fflush(stdin);
            }
            while (k < 0){
                printf("solo numeros naturales: \n");
                validar1 = scanf("%d",&k);
                fflush(stdin);
            }
            int resultado;
            resultado = terminoSeridFibonacci(k);
            printf("el resultado de calcular el k-enesimo de fibonacci con %d es %d\n",k,resultado);

            int continuar;
            int decision;
            printf("quiere continuar con otro valor? [1] para si [-1] para no : \n");
            decision = scanf("%d",&continuar);
            fflush(stdin);
            while (decision != 1){
                printf("para elegir use 1 o -1 por favor: \n");
                decision = scanf("%d",&continuar);
                fflush(stdin);
            }

            while (continuar != -1){
                printf("ingrese un numero para calcular k-enecimo de fibonacci: \n");
                validar1 = scanf("%d",&k);

                while (validar1 != 1){
                    printf("ingreso un valor incorrecto, ingrese un numero entero: \n");
                    validar1 = scanf("%d",&k);
                    fflush(stdin);
                }
                while (k < 0){
                    printf("solo numeros naturales: \n");
                    validar1 = scanf("%d",&k);
                    fflush(stdin);
                }
                resultado = terminoSeridFibonacci(k);
                printf("el resultado de calcular el k-enesimo de fibonacci con %d es %d\n",k,resultado);

                printf("quiere continuar con otro valor? [1] para si [-1] para no : \n");
                decision = scanf("%d",&continuar);
                fflush(stdin);

                while (decision != 1){
                printf("para elegir use 1 o -1 por favor: \n");
                decision = scanf("%d",&continuar);
                fflush(stdin);
                }
            }
        }

        else if(respuesta == 4){

            int dividendo;
            int divisor;
            int validar;
            float resultado;
            printf("Ingrese dividendo: ");
            validar = scanf("%d",&dividendo);
            fflush(stdin);
            while(validar!=1){
                printf("Error, ingrese solo numeros enteros\n");
                printf("Ingrese dividendo: ");
                validar= scanf("%d",&dividendo);
                fflush(stdin);
            }
            printf("Ingrese divisor: ");
            validar= scanf("%d",&divisor);
            fflush(stdin);
            while(validar!=1 || divisor==0){
                printf("Error, ingrese solo numeros enteros distintos de cero\n");
                printf("Ingrese divisor: ");
                validar= scanf("%d",&divisor);
                fflush(stdin);
            }

            resultado= division(dividendo,divisor);
            printf("El resultado de la division es %1.5f\n",resultado);

            printf("desea hacer otra division? [1] para si [-1] para no: \n");
                int continuar;
                validar = scanf("%d",&continuar);
                fflush(stdin);
                bool valor=false;
                if(continuar==1 || continuar==-1){
                    valor=true;
                }
                while(validar!=1 || valor==false){
                    printf("Ingrese solo [1] o [-1] por favor\n");
                    printf("desea hacer otra division? [1] para si [-1] para no: \n");
                    validar = scanf("%d",&continuar);
                    fflush(stdin);
                    if(continuar==1 || continuar==-1){
                    valor=true;
                }

                }
                while(continuar!=-1){
                printf("Ingrese dividendo: ");
                validar= scanf("%d",&dividendo);
                fflush(stdin);
                while(validar!=1){
                    printf("Error, ingrese solo numeros enteros\n");
                    printf("Ingrese dividendo: ");
                    validar= scanf("%d",&dividendo);
                    fflush(stdin);
                }
                printf("Ingrese divisor: ");
                validar= scanf("%d",&divisor);
                fflush(stdin);
                while(validar!=1 || divisor==0){
                    printf("Error, ingrese solo numeros enteros distintos de cero\n");
                    printf("Ingrese divisor: ");
                    validar= scanf("%d",&divisor);
                    fflush(stdin);
                }
                resultado= division(dividendo,divisor);
                printf("El resultado de la division es %1.5f\n",resultado);
                    printf("desea hacer otra division? [1] para si [-1] para no: \n");
                    validar = scanf("%d",&continuar);
                    fflush(stdin);
                    valor=false;
                    if(continuar==1 || continuar==-1){
                        valor=true;
                    }
                    while(validar!=1 || valor==false){
                        printf("Ingrese solo [1] o [-1] por favor\n");
                        printf("desea hacer otra division? [1] para si [-1] para no: \n");
                        validar = scanf("%d",&continuar);
                        fflush(stdin);
                        if(continuar==1 || continuar==-1){
                        valor=true;
                        }

                    }
                }


        }
        else if(respuesta == 5){

            char *cadena = malloc(MAX_SIZE*sizeof(char));
            char *resultado = malloc(MAX_SIZE*sizeof(char));
            bool validar;
            printf("ingresar cadena numerica: ");
            gets(cadena);
            fflush(stdin);

            int longitud = strlen(cadena) - 1;
            for(int i = 0; i<longitud; i++){
                if(cadena[i] >= 48 && cadena[i] <= 57){validar = true;}
                else{validar = false;}
            }

            while (validar != true){
                printf("ingresar cadena numerica: ");
                gets(cadena);
                fflush(stdin);
                int longitud = strlen(cadena) - 1;
                for(int i = 0; i<longitud; i++){
                    if(cadena[i] >= 48 && cadena[i] <= 57){validar = true;}
                    else{validar = false;}
                }
            }
            strcpy(resultado,agregarSeparadorMiles(cadena));

            printf("%s\n",resultado);

            int continuar;
            bool validar2;
            int decision;
            printf("desea intentar con otra cadena? ingresar [1] para si o [-1] para no: \n");
            decision = scanf("%d",&continuar);
            fflush(stdin);
            while (decision != 1){
                printf("para elegir use 1 o -1 por favor: ");
                decision = scanf("%d",&continuar);
                fflush(stdin);
            }
            while (continuar != -1){
                printf("ingresar cadena numerica: ");
                gets(cadena);
                fflush(stdin);
                int longitud = strlen(cadena) - 1;
                for(int i = 0; i<longitud; i++){
                    if(cadena[i] >= 48 && cadena[i] <= 57){validar2 = true;}
                    else{validar2 = false;}
                }
                while (validar2 != true){
                printf("ingresar cadena numerica: ");
                gets(cadena);
                fflush(stdin);
                int longitud = strlen(cadena) - 1;
                for(int i = 0; i<longitud; i++){
                    if(cadena[i] >= 48 && cadena[i] <= 57){validar2 = true;}
                    else{validar2 = false;}
                }
                }

                strcpy(resultado,agregarSeparadorMiles(cadena));

                printf("%s\n",resultado);
                printf("desea intentar con otra cadena? ingresar [1] para si o [-1] para no: \n");
                decision = scanf("%d",&continuar);
                fflush(stdin);

                while (decision != 1){
                printf("para elegir use 1 o -1 por favor: ");
                decision = scanf("%d",&continuar);
                fflush(stdin);
                }
            }
        }

        else if(respuesta == 6){

            int nivelreunion;
            int validar;
            printf("Ingrese nivel de reunion: ");
            validar=  scanf("%d",&nivelreunion);
            fflush(stdin);
            while (validar!=1 || nivelreunion<=0){
                printf("Error, ingrese solo numeros naturales\n");
                printf("Ingrese nivel de reunion:\n");
                validar= scanf("%d",&nivelreunion);
                fflush(stdin);
            }

            char *resultado= reunionMafia(nivelreunion);
            printf("\t%s\n",resultado);

             printf("desea ingresar nuevo nivel de reunion? [1] para si [-1] para no: \n");
                int continuar;
                validar = scanf("%d",&continuar);
                fflush(stdin);
                bool valor=false;
                if(continuar==1 || continuar==-1){
                    valor=true;
                }
                while(validar!=1 || valor==false){
                    printf("Ingrese solo [1] o [-1] por favor\n");
                    printf("desea ingresar nuevo nivel de reunion? [1] para si [-1] para no: \n");
                    validar = scanf("%d",&continuar);
                    fflush(stdin);
                    if(continuar==1 || continuar==-1){
                    valor=true;
                }

                }
                while(continuar!=-1){
                    printf("Ingrese nivel de reunion: ");
                    validar=  scanf("%d",&nivelreunion);
                    fflush(stdin);
                    while (validar!=1 || nivelreunion<=0){
                    printf("Error, ingrese solo numeros naturales\n");
                    printf("Ingrese nivel de reunion:\n");
                    validar= scanf("%d",&nivelreunion);
                    fflush(stdin);
                    }

                    char *resultado= reunionMafia(nivelreunion);
                    printf("\t%s\n",resultado);
                    printf("desea ingresar nuevo nivel de reunion? [1] para si [-1] para no: \n");
                    validar = scanf("%d",&continuar);
                    fflush(stdin);
                    valor=false;
                    if(continuar==1 || continuar==-1){
                        valor=true;
                    }
                    while(validar!=1 || valor==false){
                        printf("Ingrese solo [1] o [-1] por favor\n");
                        printf("desea ingresar nuevo nivel de reunion? [1] para si [-1] para no: \n");
                        validar = scanf("%d",&continuar);
                        fflush(stdin);
                        if(continuar==1 || continuar==-1){
                        valor=true;
                        }

                    }
                }
        }

        else if(respuesta == 7){

            char *ingreso= malloc(sizeof(char)*MAX_SIZE);
            int bandera = 1;

            while(bandera != 0){
                printf("Ingrese la Onda (L,l,H,h): ");
                fgets(ingreso,MAX_SIZE,stdin);
                fflush(stdin);
                int cantidad = strlen(ingreso);
                ingreso[cantidad-1] = '\0';
                int iterator = 0;
                bandera = 0;

                while(ingreso[iterator]!='\0' && bandera!=1){
                    if(toupper(ingreso[iterator]) != 'H' && toupper(ingreso[iterator]) != 'L'){
                        printf("Cadena Invalida, por favor solo caracteres l,L,h,H sin espacios\n");
                        bandera = 1;
                        free(ingreso);
                        ingreso= malloc(sizeof(char)*MAX_SIZE);
                    }
                    iterator++;
                }
            }

            char *OndaResultado;
            OndaResultado = ondaDigital(ingreso);
            printf("%s\n",OndaResultado);
            free(ingreso);
            free(OndaResultado);

            printf("desea ingresar una nueva cadena? [1] para si [-1] para no: ");
            int continuar;
            int validar;
            validar = scanf("%d",&continuar);
            fflush(stdin);
            bool valor=false;
            if(continuar==1 || continuar==-1){
                valor=true;
            }
            while(validar!=1 || valor==false){
                printf("Ingrese solo [1] o [-1] por favor\n");
                printf("desea ingresar una nueva cadena? [1] para si [-1] para no: \n");
                validar = scanf("%d",&continuar);
                fflush(stdin);
                if(continuar==1 || continuar==-1){
                valor=true;
            }

            }
            while(continuar!=-1){
                char *ingreso= malloc(sizeof(char)*MAX_SIZE);
                int bandera = 1;

                while(bandera != 0){
                    printf("Ingrese la Onda (L,l,H,h): ");
                    fgets(ingreso,MAX_SIZE,stdin);
                    fflush(stdin);
                    int cantidad = strlen(ingreso);
                    ingreso[cantidad-1] = '\0';
                    int iterator = 0;
                    bandera = 0;

                    while(ingreso[iterator]!='\0' && bandera!=1){
                        if(toupper(ingreso[iterator]) != 'H' && toupper(ingreso[iterator]) != 'L'){
                            printf("Cadena Invalida, por favor solo caracteres l,L,h,H sin espacios\n");
                            bandera = 1;
                            free(ingreso);
                            ingreso= malloc(sizeof(char)*MAX_SIZE);
                        }
                        iterator++;
                    }
                }

                char *OndaResultado;
                OndaResultado = ondaDigital(ingreso);
                printf("%s\n",OndaResultado);
                free(ingreso);
                free(OndaResultado);

                printf("desea ingresar una nueva cadena? [1] para si [-1] para no: \n");
                validar = scanf("%d",&continuar);
                fflush(stdin);
                valor=false;
                if(continuar==1 || continuar==-1){
                    valor=true;
                }
                while(validar!=1 || valor==false){
                    printf("Ingrese solo [1] o [-1] por favor\n");
                    printf("desea ingresar una nueva cadena? [1] para si [-1] para no: \n");
                    validar = scanf("%d",&continuar);
                    fflush(stdin);
                    if(continuar==1 || continuar==-1){
                    valor=true;
                    }
                }
            }
        }

        else if(respuesta == 8){

            int conjunto[MAX_SIZE];
            int n, sumaDeseada;

            // subconjuntosQueSumanN ({10, 3, 1, 7, 4, 2}, 10) => {{10}, {3,7}, {3, 1, 4, 2}, {1, 7, 2}}
            int validar1;
            int validar2;
            // Ingreso de datos
            printf("Ingrese la cantidad de elementos del conjunto: ");
            validar1 = scanf("%d", &n);
            fflush(stdin);
            while (validar1 != 1){
                printf("dato incorrecto, por favor ingrese un numero entero: \n");
                validar1 = scanf("%d", &n);
                fflush(stdin);
            }

            printf("Ingrese los elementos del conjunto separados por espacios: ");
            for (int i = 0; i < n; i++) {
                validar2 = scanf("%d", &conjunto[i]);
                while (validar2 != 1){
                    fflush(stdin);
                    printf("dato incorrecto, por favor ingrese un conjunto de numeros enteros\n");
                    validar2 = scanf("%d", &conjunto[i]);
                }
            }
            printf("Ingrese la suma deseada: ");
            int validar3;
            validar3 = scanf("%d", &sumaDeseada);
            fflush(stdin);

            while (validar3 != 1){
                printf("dato incorrecto, por favor ingrese un numero entero: \n");
                validar3 = scanf("%d", &sumaDeseada);
                fflush(stdin);
            }

            // Llamada a la función
            int actual[MAX_SIZE];
            subconjuntosQueSumanN(conjunto, 0, actual, n, sumaDeseada);

            printf("desea intentar con otros valores? [1] para si [-1] para no: \n");
            int continuar;
            int validar4;
            validar4 = scanf("%d",&continuar);
            fflush(stdin);

            while (validar4 != 1){
                printf("ingrese 1 o -1 por favor\n");
                validar4 = scanf("%d",&continuar);
                fflush(stdin);
            }

            while (continuar != -1){
                printf("Ingrese la cantidad de elementos del conjunto: ");
                validar1 = scanf("%d", &n);
                fflush(stdin);
                while (validar1 != 1){
                    printf("dato incorrecto, por favor ingrese un numero entero: \n");
                    validar1 = scanf("%d", &n);
                    fflush(stdin);
                }

                 printf("Ingrese los elementos del conjunto separados por espacios: ");
                for (int i = 0; i < n; i++) {
                    validar2 = scanf("%d", &conjunto[i]);
                    while (validar2 != 1){
                        fflush(stdin);
                        printf("dato incorrecto, por favor ingrese un conjunto de numeros enteros\n");
                        validar2 = scanf("%d", &conjunto[i]);
                    }
                }

                printf("Ingrese la suma deseada: ");
                validar3 = scanf("%d", &sumaDeseada);
                fflush(stdin);

                while (validar3 != 1){
                    printf("dato incorrecto, por favor ingrese un numero entero: \n");
                    validar3 = scanf("%d", &sumaDeseada);
                    fflush(stdin);
                }

                // Llamada a la función
                subconjuntosQueSumanN(conjunto, 0, actual, n, sumaDeseada);

                printf("desea intentar con otros valores? [1] para si [-1] para no: \n");


                validar4 = scanf("%d",&continuar);
                fflush(stdin);
            }
        }

        else if(respuesta == 9){

            int num;
            int validar;
            printf("ingresar un numero para verificar que es disible por 7: ");
            validar = scanf("%d",&num);
            fflush(stdin);

            while (validar != 1){
                printf("ingresar un numero por favor: \n");
                validar = scanf("%d",&num);
                fflush(stdin);
            }

            bool resultado;
            resultado = divisiblePor7(num);
            if(resultado){
                printf("el numero %d es divisible por 7\n",num);
            }
            else{
                printf("el numero %d no es divisible por 7\n",num);
            }

            printf("desea verificar otro numero? [1] para si [-1] para no: \n");
            int continuar;
            validar = scanf("%d",&continuar);
            fflush(stdin);
            bool valor=false;
            if(continuar==1 || continuar==-1){
                valor=true;
            }
            while(validar!=1 || valor==false){
                printf("Ingrese solo [1] o [-1] por favor\n");
                printf("desea verificar otro numero? [1] para si [-1] para no: \n");
                validar = scanf("%d",&continuar);
                fflush(stdin);
                if(continuar==1 || continuar==-1){
                valor=true;
            }

            }
            while(continuar!=-1){
                printf("ingresar un numero para verificar que es disible por 7: \n");
                validar = scanf("%d",&num);
                fflush(stdin);

                while (validar != 1){
                    printf("ingresar un numero por favor: \n");
                    validar = scanf("%d",&num);
                    fflush(stdin);
                }

                bool resultado;
                resultado = divisiblePor7(num);
                if(resultado){
                    printf("el numero %d es divisible por 7\n",num);
                }
                else{
                    printf("el numero %d no es divisible por 7\n",num);
                }

                printf("desea verificar otro numero? [1] para si [-1] para no: \n");
                validar = scanf("%d",&continuar);
                fflush(stdin);
                valor=false;
                if(continuar==1 || continuar==-1){
                    valor=true;
                }
                while(validar!=1 || valor==false){
                    printf("Ingrese solo [1] o [-1] por favor\n");
                    printf("desea verificar otro numero? [1] para si [-1] para no: \n");
                    validar = scanf("%d",&continuar);
                    fflush(stdin);
                    if(continuar==1 || continuar==-1){
                    valor=true;
                    }

                }
            }
        }

        else if(respuesta == 10){

            int N;
            int B;
            int validar1;
            int validar2;
            printf("ingresar numero explosivo: ");
            validar1 = scanf("%d",&N);
            fflush(stdin);
            printf("ingresar valor de la bomba: ");
            validar2 = scanf("%d",&B);
            fflush(stdin);


            while (validar1 < 1){
                printf("ingreso un valor incorrecto, ingrese un numero entero para el numero explosivo:  \n");
                validar1 = scanf("%d",&N);
                fflush(stdin);
            }

            while (validar2 < 1){
                printf("ingreso un valor incorrecto, ingrese un numero entero para la bomba: \n");
                validar2 = scanf("%d",&B);
                fflush(stdin);
            }

            while (N < 0){
                printf("solo numeros naturales para el numero explosivo: \n");
                scanf("%d",&N);
                fflush(stdin);
            }

            while (B <= 0){
                printf("solo numeros naturales para la bomba: \n");
                scanf("%d",&B);
                fflush(stdin);
            }
            int *resultados1 = explosion(N, B);
                int i=0;
                while (resultados1[i] > 0){
                    printf("%d ",resultados1[i]);
                    i++;
                }
                printf("\n");


            printf("desea ingresar nuevo valor? [1] para si [-1] para no: \n");
            int decision;
            int continuar;
            decision = scanf("%d",&continuar);
            fflush(stdin);

            while (decision != 1){
                printf("para elegir use 1 o -1 por favor: ");
                decision = scanf("%d",&continuar);
                fflush(stdin);
            }

            while(continuar != -1){
                printf("ingresar numero explosivo: \n");
                validar1 = scanf("%d",&N);
                fflush(stdin);
                printf("ingresar valor de la bomba: \n");
                validar2 = scanf("%d",&B);
                fflush(stdin);
                while (validar1 < 1){
                printf("ingreso un valor incorrecto, ingrese un numero entero para el numero explosivo:  \n");
                validar1 = scanf("%d",&N);
                fflush(stdin);
                }

            while (validar2 < 1){
                printf("ingreso un valor incorrecto, ingrese un numero entero para la bomba: \n");
                validar2 = scanf("%d",&B);
                fflush(stdin);
                }

            while (N < 0){
                printf("solo numeros naturales para el numero explosivo: \n");
                scanf("%d",&N);
                fflush(stdin);
                }

            while (B <= 0){
                printf("solo numeros naturales para la bomba: \n");
                scanf("%d",&B);
                fflush(stdin);
                }
                int *resultados1 = explosion(N, B);
                i=0;
                while (resultados1[i] > 0){
                    printf("%d ",resultados1[i]);
                    i++;
                    }
                printf("\n");

                printf("desea ingresar nuevo valor? [1] para si [-1] para no: \n");
                decision = scanf("%d",&continuar);
                fflush(stdin);

                while (decision != 1){
                printf("para elegir use 1 o -1 por favor: ");
                decision = scanf("%d",&continuar);
                fflush(stdin);
                }
            }
        }
    }
    return 0;
}
