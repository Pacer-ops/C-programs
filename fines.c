/*
Author: Michael Joe Mwema
Reg no: BCS-05-0209/2026
Description: C program to calculate fines for overdue books at a library
Date: 26/09/2026
*/

//1-7 days - Ksh 20 per day
//8-14 days - Ksh 50 per day
//15+ days - Ksh 100 per day

#include <stdio.h>
#include <math.h>
int main (){
	int due_d, return_d, book_id, days_o;
	double fine_r, fine;
	
	printf("Enter the Book ID\t");
	scanf(" %d", &book_id);
	
	printf("Enter the due date\t");
	scanf(" %d", &due_d);
	
	printf("Enter the return date\t");
	scanf(" %d", &return_d);
	
	days_o = return_d - due_d;
	
	if(days_o>=0  &&days_o<=7){
		fine_r = 20;
		fine = days_o * fine_r;
	}
	else if(days_o>=8  &&days_o<=14){
		fine_r = 50;
		fine = days_o * fine_r;
	}
	else if(days_o>=15){
		fine_r = 100;
		fine = days_o * fine_r;
	}
	
	printf("Book ID:  %d\n", book_id);
    printf("Due Date: %d\n", due_d);
    printf("Days Overdue: %d\n", days_o);
    printf("Fine Rate:  %.2lf\n", fine_r);	
    printf("Fine Amount:  %.2lf\n", fine);	
    
	return 0;
}