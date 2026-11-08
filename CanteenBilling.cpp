//Q1 Functions
#include<stdio.h>
float discount(float bill){  //function for 10% discount for bill over Rs.1K
	return bill*0.9;
}
void higherunit(float itm1,float itm2);
float calculatetotal(float itm,int qty);



int main(void){
	
	float bill=0;
	float item1,item2;
	int qty1,qty2;
	
	int quantity;
	for (int i=0 ; i<2 ; i++){
		printf("Enter the unit price of item %d : ",i+1);
		
		if (i==0){
			scanf("%f",&item1);
		}
		else{
			scanf("%f",&item2);
		}
		printf("Enter the Quantity: ");
		
		if (i==0){
			scanf("%d",&qty1);
		}
		else{
			scanf("%d",&qty2);
		}

	
	}

	int total1,total2;
	
	total1=calculatetotal(item1,qty1);
	total2=calculatetotal(item2,qty2);
	bill=total1+total2;
	
	printf("\n CAMPUS CANTEEN BILLING SYSTEM \n");
	printf("\n===============================\n");
	
	printf("Manager's Note: ");
	higherunit(item1,item2);
	printf("\n");
	printf("Item 1 Quantity: %d\n",qty1);
	printf("Corresponding price: %.2f \n",item1);

	printf("Item 2 Quantity: %d\n",qty2);
	printf("Corresponding price: %.2f \n",item2);
	
	printf("\n");
	printf("\n---------------\n");
	higherunit(item1,item2);
	printf("\n===============\n");
	printf("Bill : RS. %.2f \n",bill);

	if (bill>1000){
		bill=discount(bill);
		printf("Discounted Bill : Rs. %.2f\n",bill);
	}
	printf("-------------------");
	return 0;
}
	
float calculatetotal(float itm,int qty){
	float total;
	total=itm*qty;
	return total;
}

void higherunit(float itm1,float itm2){
	if (itm1>itm2){
		printf("Item 1 has higher unit price \n");
	}
	
	else if (itm2>itm1){
		printf("Item 2 has higher unit price \n");
	
	}else{
		printf("Equal Unit prices \n");
	}
}






