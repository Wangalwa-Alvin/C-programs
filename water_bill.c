/*
Name;Wangalwa Alvin
Admission number: PA106/G/28804/25
Description: water_bill

*/
#include <stdio.h>

//main function
int main(){
	
	//declaration
	int units;
	float Bill;
	
	//input
	printf("Enter number of water units consumed:\n");
	scanf("%d", &units);
	
	//conditions and caculation
	if (units<=30){
	 Bill = units * 25;	
	} else if (units>30&&units<=60)
	{
		Bill = units * 25;
	} else if (units>60)
	{
		Bill = units * 30;
	}
	
	//output
	printf(" Your water bill is: %.2f", Bill);


return 0;
}