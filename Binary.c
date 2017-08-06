#include<stdio.h>
#include<conio.h>

int binary(int *n){
  int rem;
  rem = *n%2;
  *n = *n/2;
  return rem;
}
int main(){
  int n1,n2;
  printf("Enter two numbers: ");
  scanf("%d %d",&n1,&n2);

  int b1[3],b2[3];
  int i;

  for(i=0;i<3;i++){
   b1[i] = binary(&n1);
   b2[i] = binary(&n2);
  }
  printf("The first number in binary is: ");
  for(i=2;i>=0;i--){
   printf("%d",b1[i]);
  }
  printf("\n");

  printf("The second number in binary is: ");
  for(i=2;i>=0;i--){
   printf("%d",b2[i]);
  }
  printf("\n");

  int a[4],n;

  for(i=0;i<4;i++){
   a[i]=0;
  }

  for(i=0;i<3;i++){
   n=b1[i]+b2[i]+a[i];

   if(n<=1){
    a[i]=n;
   }
   else if(n==2){
    a[i]=0;
    a[i+1]=1;
   }
   else if(n==3){
    a[i]=1;
    a[i+1]=1;
   }
  }
  printf("The sum is: ");
  for(i=3;i>=0;i--){
    printf("%d",a[i]);
  }
  printf("\n");



  getch();

}
