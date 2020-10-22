#include "insertionSort.h"  //insertion sort header
#include "dataGeneration.h"  //USAGE: createData(integer size, "name_of_file")
#include "shellSort.h" // shell sort header
#include <stdio.h>
#include <stdlib.h>
void main(){
	int *x;
	insertionSort(x,0);
	createData(5,"deneme.txt");  
	return;
}
