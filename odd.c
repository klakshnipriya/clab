#include<stdio.h>
int main(){
  int n,i;
  printf("enter a positive integer:");
  scanf("%d",&n);
  
  if(n<=0){
  	printf("please enter a positive integer");
  	return 1;
  }
  printf("\nodd numbers from 1 to %d are:\n",n);	
  for(i=1;i<=n;i+=2){
  	printf("%d",i);
  }
  printf("\n");
  return 0;
}
