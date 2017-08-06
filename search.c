#include<stdio.h>
#include<conio.h>

int linear(int a[11],int n){
 int l=0;
 a[11]=n;
 while(a[l]!=n){
  l++;
 }
 if(l==10){
  l=-1;
 }

 return l;
}

int main(){
int a[10],i,no,loc;
printf("Enter the elements: ");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}

printf("Enter the number you want to search: ");
scanf("%d",&no);

loc = linear(a,no);
if(loc==-1)
printf("Error! Element not found.");
else
printf("Element first found at %d",loc+1);

getch();


}