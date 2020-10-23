#include "insertionSort.h"  //insertion sort header
#include "dataGeneration.h"  //USAGE: createData(integer size, "name_of_file")
#include "shellSort.h" // shell sort header
#include <stdio.h>
#include <stdlib.h>


int* load(char *);
int showMenu();
void findRepetitives(int arr[],int len);
int c;  //Global count variable: number of integers.


int main(){
	int i;
	int key=1;
	
	int *arrayToBeSorted;  //Holds the array of integers to be sorted.
	
	while(key==1){
		switch(showMenu()){     //Sample Menu
			case 1: createData(500,"deneme.txt");break;
			case 2: arrayToBeSorted = load("deneme.txt");break;
			case 3: insertionSort(arrayToBeSorted,c);break;
			case 4: shellSort(arrayToBeSorted,c);break;
			case 5: key=0;
		}
	
	for(i=0;i<c;i++){   //Just to be sure sorting algorithms work.
		printf("%d\n",arrayToBeSorted[i]);
	}
}
	return 0;
}

int* load(char filename[]){
	FILE *fp;
	int temp,i,count;
	int *toBeSorted;
    fp=fopen(filename,"r");
    	/*Check*/	if(fp==NULL) printf("Error at fopen()\n");
    toBeSorted = (int*) malloc(sizeof(int));
    fscanf(fp, "%d\n", &count);
    c = count;
    toBeSorted=(int*) malloc(sizeof(int)*(count));
    	/*Check*/	if(toBeSorted==NULL) printf("Error: @memory allocation.\n");
    for(i=0; i<count; i++) {
    	fscanf(fp,"%d",&temp);
    	toBeSorted[i]=temp;
    }
    fclose(fp);
    return toBeSorted;
}

int showMenu(){
	int selection;
	printf("1) Generate data\n");
	printf("2) Load\n");
	printf("3) Insertion Sort\n");
	printf("4) Shell Sort\n");
	printf("5) Exit\n");
	
	scanf("%d", &selection);
	return selection;
}

void findRepetitives(int arr[],int len){
	int i;
	for(i=1;i<len;i++){
		if(arr[i]==arr[i-1]){
			printf("Value %d repeats in the array \n",arr[i]);
			if(i==len-1)
				break;
			else{
				while(arr[i]==arr[i+1]){
					i++;
					if(i==len-1)
						break;
					}
				}
			}
		}
}
