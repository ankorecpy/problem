#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void process1(char * colNum[]);
int sumIdxs(int idx1, int idx2, char * colNum[], int inc);
void printAllCol(char * colNum[]); 
void printCol(char * colNum[], int idx1, int idx2); 
void chgIdxs(int idx1, int idx2, char * colNum[]);
void calcPos(int bs, int * remp, int * idx1, int * idx2, int * sum, int inc, char * colNum[]); 

int numElem = -1; 
int numPart = 0;

int main(int argc, char * argv[]) {
	int auxSum = 0;
	if (argc == 1) {
		printf("Error: numero de elementos invalidos\n");
		exit(EXIT_FAILURE);
	}
	numElem = argc - 1;
	auxSum = sumIdxs(1, numElem, argv, 1);
	printf("sum: %d\n", auxSum);
	if ((auxSum % 3) == 0) {
		numPart = auxSum / 3;
		printf("sumParts: %i\n", numPart);
		process1(argv);
	} else {
		printf("Error: la division de %i entre 3 no es entera\n", auxSum);
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}

void process1(char * colNum[]) {
}

void calcPos(int bs, int * remp, int * idx1, int * idx2, int * sum, int inc, char * colNum[]) {
}

int sumIdxs(int idx1, int idx2, char * colNum[], int inc) {
	int result = 0, aux = 0;
	while (idx1 <= idx2) {
		aux = atoi(colNum[idx1]);
		result = result + aux;
		idx1 = idx1 + inc;
	}
	return result;
}

void printAllCol(char * colNum[]) {
	int iter = 0, aux = 0;
	for (iter = 1; iter <= numElem; iter++) {
		aux = atoi(colNum[iter]);
		printf(" %i", aux);
	}
	printf("\n");
}

void printCol(char * colNum[], int idx1, int idx2) {
	int aux = 0;
	printf("\n>");
	while (idx1 < idx2) {
		aux = atoi(colNum[idx1]);
		printf(" %i", aux);
		idx1 = idx1 + 1;
	}
	printf("\n");
}

void chgIdxs(int idx1, int idx2, char * colNum[]) {
	char * aux = colNum[idx1];
	colNum[idx1] = colNum[idx2];
	colNum[idx2] = aux;
}

