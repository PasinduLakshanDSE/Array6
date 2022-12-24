#include<stdio.h>
void main(){
	int my_array[5];
	int count;
	int num;
	
	for(count=0;count<5;count++){
		printf("Enter the Number:");
		scanf("%d",&num);
		my_array[count]=num;
	}
	int max=my_array[0];
	int min=my_array[0];
	 for(count=0;count<5;count++){
 		if(max<my_array[count]){
		 	max=my_array[count];
		 }
		 if(min>my_array[count]){
 			min=my_array[count];
 		}
 	}
 	printf("Max value is:%d\n",max);
 	printf("Min value is:%d\n",min);
}