/*
(Multiline comment)
Author: Joe Michael
Reg number: BCS-05-0209/2026
Description: C programme prompting the user to fill in details then display them
Date: 12/09/2026
Version 1
*/

//pre processor directive
#include <stdio.h>//printf(),scanf()

int main(){
	//Variable declarations with appropriate data types
	float height;//stores decimal numbers
	double bankbalance;//stores decimal numbers
	char phoneNumber[25];//handles phone numbers appropriately
	//Prompting and c0llecting data
	printf("Enter your height (in metres or centimetres):");
	scanf("%f", &height);
	
	printf("Enter your bank  balance (in Kenya shillings):");
	scanf("%lf",&bankbalance);
	
	//Consume the leftover newline character in the input buffer before reading the string
	while (getchar() !='\n');
	
	printf("Enter your phone numbber:");
    fgets(phoneNumber, sizeof(phoneNumber),stdin);
    
    //Displaying the data in a clear, formatted layout
    printf("\n===============\n");
    printf("     USER INFORMATION     \n");
    printf("===============\n");
    printf("Height:        %.2f\n",height);
    printf("Bank Balance: KSh %.2lf\n",bankbalance);
    printf("Phone Number: %s", phoneNumber);
    printf("==============\n");
    
    return 0;


	
}