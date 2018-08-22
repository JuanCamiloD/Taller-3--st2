#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct competidor {
	char nombre[30], club[30],sexo[15];
	int edad;
	
} players;

struct Estudiante{
	char nombre[30];
	int edad, grado;
	float notas[4];
	float promedio;
};

Estudiante estu[3];
struct promedio{
    float nota1, nota2, nota3;
};


struct alumno{
    char nombre[30];
    char sexo[20];
    int edad;
    struct promedio porcen;
}alumnos[100];


float promedio_al[100];
int tamano;
int base1, base2
int cantEstu = 0;

void menu2();
void crearEstudiante();
void mostrarEstudiantes();
void mejorEstudiante();

void ingresar();
void categoria();


void menu();
void mostrar_array();
void matriz_4x4();
void matriz_ram();
void matriz_primo();
void mostrar_matriz();

int i,j,A;

int main(){
	
	menu();
	
	system("pause");
	return 0;
}


void menu(){
		int opcion;
		do{
		
	
		printf("MENU\n");
	    printf("1. Multiplicar dos valores flotantes. \n");
		printf("2. El cuadrado de un numero. \n");
		printf("3. Matriz 4x4 \n");
		printf("4. Mostrar la parte fraccionaria de un numero. \n");
		printf("5. El valor maximo de 3 numeros. \n");
		printf("6. Intercambio de valores. \n");
		printf("7. Cambio de dolares. \n");
		printf("8. Mostrar segundos en tiempo parcial.\n");
		printf("9. Mostrar el cambio de dias a años.\n");
		printf("10. Suma de numeros en un vector.\n");
		printf("0. exit \n");
		printf("Ingrese un opcion: \n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: mostrar_array();
				break;
			case 2: mostrar_matriz();;
				break;
			case 3:  matriz_4x4();;
				break;
			case 4: ;
				break;
			case 5: matriz_ram();
				break;
			case 6: matriz_primo();
				break;
			case 7: ;
				break;
			case 8: ingresar();;
				break;
			case 9: menu2();;
				break;
			case 10: ;
				break;	
			case 0: exit(0);
				break;
			default: printf("Opcion invalida\n");
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}

void matriz_ram(){
	int m1[3][3],n;
    srand(time(NULL)); 
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			n=rand()%101;
			m1[i][j]=n;
			
		}	
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){ 
		printf("[%d]",m1[i][j]);
			
		}
		printf("\n");
	}
}
void matriz_4x4(){
	int num[4][4];
	for(i=0;i<1;i++){
		for( j=0;j<4;j++){
			printf("digite el numero en la posicion #%d : ",j+1);
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i=0;i<1;i++){
		for( j=0;j<4;j++){
	printf("[%d]", num[0][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<4;i++){
		for( j=0;j<4;j++){
		
            if(i == 1){
                printf("[%d]", num[0][j]*num[0][j]);
            }else if(i == 2){
                printf("[%d]", num[0][j]*num[0][j]*num[0][j]);
            }else if(i == 3){
                printf("[%d]", num[0][j]*num[0][j]*num[0][j]*num[0][j]);
        }
		}
        printf("\n");
    }

}
void matriz_primo(){
	int m1[3][3],n,f;
    srand(time(NULL)); 
  
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			n=rand()%21;
			for(f=1;f<9;f++){
			
			if(n%f==0){
             A++;
         
            }
        } if(A==2){
            m1[i][j]=n;
            f=0;
			}
			
		}	
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){ 
		printf("[%d]",m1[i][j]);
			
		}
		printf("\n");
	}
	
}
void mostrar_matriz(){
	int n=1,a=0,f,c;
	printf("Digite el numero de filas: "); 
	scanf("%d",&f);
    printf("Digite el numero de columnas: "); 
	scanf("%d",&c);

for(i=0;i<f;i++){
		for( j=0;j<c;j++){
			if(i==j){
			printf("[%d]",n);	  
		}else
			printf("[%d]",a);
		
		}
		printf("\n");
	  
	  }
	   
}
void mostrar_array(){
	float num[]={32.583,11.239,45.781,22.237};
	 printf("Los elementos del arreglo son:\n");
	for( i=0;i<4;i++){
    printf("%.3f\n", num[i]);
	}
}
void ingresar(){

	printf ("ingrese el nombre del jugador.\n");
    fflush (stdin);
    fgets(players.nombre,30,stdin);
    printf ("Ingrese su edad.\n");
    scanf("%d",&players.edad);
    printf ("Ingrese su sexo.\n");
    fflush (stdin);
    fgets(players.sexo,15,stdin);
    printf ("Ingrese su club.\n");
    fflush (stdin);
    fgets(players.club,30,stdin);
  

	printf ("el nombre del jugador es : %s ",players.nombre);
	printf ("\n la edad del jugador es : %d ",players.edad);
	printf ("\n el club del jugador es : %s ",players.club);
	printf("su categoria es: "); categoria();



}

void categoria(){
	if (players.edad>30){
		printf("mayor");
	}else if (players.edad<30&&players.edad>15){
	   printf("Joven");
	}else{
	  printf("Infantil");
	}
}
void menu2(){
	int opcion;
	
	do{
		printf("MENU\n");
		printf("1. Crear Estudiante\n");
		printf("2. Mostrar Estudiantes\n");
		printf("3. Mejor Estudiante\n");
		printf("0. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: crearEstudiante();
				break;
			case 2: mostrarEstudiantes();
				break;
			case 3: mejorEstudiante();
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalidad\n");
		}

	}while(opcion != 0);
}

void crearEstudiante(){
	int i, sumatoria = 0;
	printf("Ingrese nombre: ");
	fgets(estu[cantEstu].nombre, 30, stdin);
	printf("\nIngrese edad: ");
	scanf("%d", &estu[cantEstu].edad);
	printf("\nIngrese grado: ");
	scanf("%d", &estu[cantEstu].grado);
	for(i = 0; i < 4; i++){
		printf("\nIngrese nota %d: ", i + 1);
		scanf("%f", &estu[cantEstu].notas[i]);
		sumatoria += estu[cantEstu].notas[i];
	}
	estu[cantEstu].promedio = sumatoria / 4;
	printf("Estudiante registrado con exito\n");
	cantEstu += 1;
}
void mostrarEstudiantes(){
	int i, j;
	for(i = 0; i < cantEstu; i++){
		printf("Estudiante No. %d\n", i + 1);
		printf("Nombre: %s\n", estu[i].nombre);
		printf("Edad: %d\n", estu[i].edad);
		printf("Grado: %d\n", estu[i].grado);
		for(j = 0; j < 4; j++){
			printf("Nota %d = %.f\n", i + 1, estu[i].notas[j]);
		}
		printf("Promedio: %.f\n", estu[i].promedio);
	}	
}
void mejorEstudiante(){
	int mayor = 0, i, indice, j;
	for(i = 0; i < cantEstu; i++){
		if(estu[i].promedio > mayor){
			mayor = estu[i].promedio;
			indice = i;
		}
	}

	printf("Estudiante No. %d\n", indice + 1);
	printf("Nombre: %s\n", estu[indice].nombre);
	printf("Edad: %d\n", estu[indice].edad);
	printf("Grado: %d\n", estu[indice].grado);
	for(j = 0; j < 4; j++){
		printf("Nota %d = %.f\n", i + 1, estu[indice].notas[j]);
	}
	printf("Promedio: %.f\n", estu[indice].promedio);
}


