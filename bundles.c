/*
Name;Wangalwa Alvin
Admission number: PA106/G/28804/25
Description: water_bill

*/

#include <stdio.h>

//main function
int main(){
	
	//declaration
	int option;
	
	//Display menu
	printf("select data bundle:\n");
	printf("1. 100 MB @ KES.50\n");
	printf("2. 500 MB @ KES.200\n");
	printf("3. 1 GB @ KES.350\n");
	printf("4. 2 GB @ KES.600\n");
	
	//input
	printf("Select your option:");
	scanf("%d", &option);
	
	//conditions and output
	switch(option){
		case 1:
			printf("You have selected 100MB. Cost=50\n");
			break;
		case 2:
			printf("You have selected 500MB. Cost=200\n");
			break;
		case 3:
			printf("You have selected 1GB. Cost=350\n");
			break;
		case 4:
			printf("You have selected 2GB. Cost=600\n");
			break;
		default:
			printf("Invalid input\n");
		
		
	}
	
	return 0;
}
