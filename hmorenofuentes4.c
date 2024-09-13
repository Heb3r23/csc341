//Heber Moreno Fuentes

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[]){
	int i;
	int z = 0;
	int* values;
	values = (int *)malloc(sizeof(int)*5);



	int* argcPointer = &argc;
	int* stackPointer = &i;
	int* heapPointer = values;
	int* uninPointer = &x;
	int* inPointer = &y;

	printf("Stack variable address: %p\n", stackPointer);
	printf("argc address: %p\n", argcPointer);
	printf("Heap variable address: %p\n", heapPointer);
	printf("Uninitialized variable address: %p\n", uninPointer);
	printf("Initialized variable address: %p\n", inPointer);

	return EXIT_SUCCESS;
}

