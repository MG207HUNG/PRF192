#include <stdio.h>
#include <math.h>
int main(){
	float s , c;
	int t ;
	printf("So km :");
	if((scanf("%f",&s) !=1) || s < 0)
	{
		printf("Nhapsai");
		return ;
	}
	printf("So phut cho:");
	scanf(" %d",&t);
	if(s<0.5 && s >=0){
		c = 12000;
	} 
		else if (s>=0.5 && s<=30){
		c = 12000 + (s-0.5)*15000;
	} 	
			else if(s>30){
				c = 12000 + 15000*29.5 + (s-30)*12000;
			}
	if(t>5){
	c = c + 1000*(t-5) ;
}
	printf ("%-20s %-20s %-20s \n", "So Km", "So phut cho" , "Tong tien");
	printf ("%-20.1f %-20d %-20.0f", s , t , c);
}