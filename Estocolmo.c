#include <stdio.h>
#include <stdlib.h>

//i-el iesimo elemento de estocolmo
void estocolmo(int i){
	if(esDeEstocolmo(2*i)==1)
		printf("%d es de Estocolmo \n", 2*i );
	else{
		printf("%d es de Estocolmo \n", (2*i)+1 );
	}
}	

int esDeEstocolmo(unsigned int n){
	unsigned int i;
	int contador = 0;
	for(i=0; i<31; i++){
		if(n&1 == 1)
			contador++;
		n = n>>1;
	}
	//printf("Contador de 1s: %d\n", contador);
	return ((contador+1)%2);
}

int esEstocolmo(unsigned char* bites, int nbytes){
	int bits = 8*nbytes;
	int i,j;
	int contador = 0;
	for(i=0; i<nbytes; i++)
	{
		unsigned char ch = bites[i];
		for(j=0; j<7; j++){
			if(ch&1 == 1)
				contador++;
			ch = ch>>1;
		}	
	}
	return ((contador+1)%2);
}

int main(){
	int i = 0;
	for(i; i < 7; i++)
		estocolmo(i);
	return 0;
}
