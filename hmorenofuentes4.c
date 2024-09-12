//Heber Moreno Fuentes

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int* values;
	values = (int *)malloc(sizeof(int)*5);
	int x;
        int y = 15;

	int* argcPointer = &argc;
	int* stackPointer = values;
	int** heapPointer = &values;
	int* uninPointer = &x;
	int* inPointer = &y;

	printf("argc address: %p\n", argcPointer);
	printf("Stack address: %p\n", stackPointer);
	printf("Heap address: %p\n", heapPointer);
	printf("Uninitialized variable address: %p\n", uninPointer);
	printf("Initialized variable address: %p\n", inPointer);

	return EXIT_SUCCESS;
}

