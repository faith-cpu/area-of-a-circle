#include<stdio.h>
int main(){
	int r;
	float pie=3.14, area;
	
	printf("enter the value for r\n");
	scanf("%d", &r);
	
	area= pie*r*r;
	printf("area of a circle is:%f",area);
	
	
	return 0;	
}