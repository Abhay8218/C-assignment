#include<Stdio.h>
#include"header.h"
int main(){
    printf("Enter number to check it is a perfect number or not  :- ");
    int n ;  
      scanf("%d",&n);
    if(perfect(n)==n){
        printf("Its a perfect number\n");
    }
    else{
        printf("Not perfect\n");
    }

   printf("Enter number to check factorial :- \n");
   int m ;
    scanf("%d",&m);
    printf("%d\n",factorial(m));

    n;
    printf("Enter the size: - \n");    
    scanf("%d",&n);
    int a[n];
    printf("Enter elements :- ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum =  calculatesum(n,a);
    printf("The sum of the elements in the array is :- %d",sum);


}