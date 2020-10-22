//Data generation
//The file of random integers created in the main directory.
//The first line of the file states the number of unsorted integers.
//Each input is seperated by a new line.
//USAGE: createData(integer size, "name_of_file")
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void createData(int size, char *name){
	int i;
	FILE *file;
	file = fopen(name,"w+");
	
	srand(time(NULL));
	
	fprintf(file,"%d\n", size);
	for (i=0;i<size;i++)
		fprintf(file,"%d\n", rand());
}
