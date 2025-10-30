#include<stdio.h>
int main(){
int n;
int i;
printf("enter a positive integer:");
scanf("%d",&n);
if(n<=0){
	  printf("please enter a positive integer greater  than 0.\n");
	  return 1;
}
printf("\nNumber\tSquare\Tcube\n");
printf("-----------------\n");
for(i=1;i<n;i++){
	printf("%d\t%d\t%d\n",i,i*i,i*i*i);
}
return 0;
}
