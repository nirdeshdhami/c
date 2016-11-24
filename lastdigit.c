/*Name :Nirdesh Dhami
Roll no:15
Subject:programming fundamental
Date:2016-11-24
*/
#include<stdio.h>
        
        int main(){
		int n,rem,d;
printf("Enter any nnumber:");
scanf("%d",&n);

   rem=n%10;
   d=n/10;
printf("\n last digit=%d\n",rem);
printf("\n without last digit=%d",d);

return 0;
}
