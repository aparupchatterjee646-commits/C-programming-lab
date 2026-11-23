//Write a c programe to take as a array and display into the screen
#include <stdio.h>
int main(){
	int ar [100],a,i;
	printf("Enter the range:");
	scanf("%d",&a);
	printf("enter a value:");
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
	}
	printf ("the array numbers is :-\n");
	for(i=0;i<a;i++){
		printf("%d\t",ar[i]);
	}
		
	
}
