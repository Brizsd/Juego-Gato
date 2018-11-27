#include <stdio.h>


int i,j;
int ganador;
void imprimirGato(char gato [3][3])
{
printf("_____________________\n");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("|  %c  |", gato[i][j]);
}
printf("\n");
printf("_____________________");
printf("\n");
}
}
quienGana(char gato[3][3])
{
	ganador=0;
	if ((gato[0][0]=='X')&&(gato[0][1]=='X')&&(gato[0][2]=='X')){ganador=1;}
	if(gato[1][0]=='X'&&gato[1][1]=='X'&&gato[1][2]=='X'){ganador=1;}
	if(gato[2][0]=='X'&&gato[2][1]=='X'&&gato[2][2]=='X'){ganador=1;}
	if(gato[0][0]=='X'&&gato[1][0]=='X'&&gato[2][0]=='X'){ganador=1;}
	if(gato[0][1]=='X'&&gato[1][1]=='X'&&gato[2][1]=='X'){ganador=1;}
	if(gato[0][2]=='X'&&gato[1][2]=='X'&&gato[2][2]=='X'){ganador=1;}
	if(gato[0][0]=='X'&&gato[1][1]=='X'&&gato[2][2]=='X'){ganador=1;}
	if(gato[2][0]=='X'&&gato[1][1]=='X'&&gato[0][2]=='X'){ganador=1;}
	
	if ((gato[0][0]=='O')&&(gato[0][1]=='O')&&(gato[0][2]=='O')){ganador=2;}
	if(gato[1][0]=='O'&&gato[1][1]=='O'&&gato[1][2]=='O'){ganador=2;}
	if(gato[2][0]=='O'&&gato[2][1]=='O'&&gato[2][2]=='O'){ganador=2;}
	if(gato[0][0]=='O'&&gato[1][0]=='O'&&gato[2][0]=='O'){ganador=2;}
	if(gato[0][1]=='O'&&gato[1][1]=='O'&&gato[2][1]=='O'){ganador=2;}
	if(gato[0][2]=='O'&&gato[1][2]=='O'&&gato[2][2]=='O'){ganador=2;}
	if(gato[0][0]=='O'&&gato[1][1]=='O'&&gato[2][2]=='O'){ganador=2;}
	if(gato[2][0]=='O'&&gato[1][1]=='O'&&gato[0][2]=='O'){ganador=2;}
	return ganador;
}

 main (){
int k=1, fila, columna, opcion;
char gato[3][3]= {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

printf("El juego del Gato\n");
printf ("Instrucciones\n");
printf("Las coordenas deben ingresarse de la siguiente manera: \nEjemplo 3 3 \n"
"El primer numero corresponde a las lineas horizontales (filas) y el segundo a las verticales (columnas)\n"
"Las coordenadas deben estar separadas por un espacio y no deben ser mayor a 3\n");
do{
printf("\nGana el jugador que ponga su ficha en tres casillas consecutivas formando una linea recta");
printf("\nEste es el tablero\n");
imprimirGato(gato);
do
{
printf("\nEste es el turno numero %d",k);
if(k%2!=0)
{
do{
do{
printf("\nEs turno del jugador 1");
printf("\nPor favor ingrese las coordenadas de la casilla que quiere ");
scanf("%d",&fila);
scanf("%d",&columna);
if(fila>3 || columna>3)
{
printf("\nError en la coordenada");
}
}
while (fila>3 || columna>3);
}
while(gato[fila-1][columna-1]!= ' ');
gato[fila-1][columna-1]= 'X';
imprimirGato(gato);
quienGana(gato);
}
if(k%2==0){
	do{
    do{
    	
    printf("\nEs el turno del jugador 2");
    printf("\nPor favor ingrese las coordenadas de la casilla que quiere ");
    scanf("%d",&fila);
    scanf("%d",&columna);
	if(fila>3 || columna>3)
	{
	printf("\nError en la coordenada");

}
}
    while (fila>3 || columna>3);
}
    while(gato[fila-1][columna-1]!= ' ');
    gato[fila-1][columna-1]= 'O';
    imprimirGato(gato);
    quienGana(gato);
}
    k=k+1;
    }
	while (k<10 && ganador==0);
	if (ganador==1)
	{
	printf("El ganador es el jugador 1");}
	if(ganador==2){
	printf("El ganador es el jugador 2");}	
	if(ganador==0){
	printf("Esto es Empate");
	}
	printf("\nLes gustaria intentar de nuevo PRESIONA 1: ");
	scanf("%d",&opcion);
	k=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			gato[i][j]=' ';
		}
	}
	
	}
	while(opcion==1);
/*	getch();*/
	return 0;
	}




