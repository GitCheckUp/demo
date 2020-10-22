#include "insertionSort.h"  //insertion sort header
#include "dataGeneration.h"  //USAGE: createData(integer size, "name_of_file")
#include "shellSort.h" // shell sort header
#include <stdio.h>
#include <stdlib.h>

int* load(int*c,char filename[]){   //Load file into array.
	FILE *fp;
	int temp,i,count;
	int *toBeSorted;
    fp=fopen(filename,"r");
    	/*Check*/	if(fp==NULL) printf("Error at fopen()\n");
    toBeSorted = (int*) malloc(sizeof(int));
    fscanf(fp, "%d\n", &count);   //Read the first line to get the set size.
    toBeSorted=(int*) malloc(sizeof(int)*(count));
    	/*Check*/	if(toBeSorted==NULL) printf("Error: @memory allocation.\n");
    for(i=0; i<count; i++) {
    	fscanf(fp,"%d",&temp);
    	toBeSorted[i]=temp;
    }
    *c=count; //Assign the number of entries.
    fclose(fp);
    return toBeSorted;
}

void main(){
	int *x;
	insertionSort(x,0);
	createData(5,"deneme.txt");  
	return;
}
