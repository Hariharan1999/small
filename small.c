#include<stdio.h>
    int main()
    {
         int m, s1, s2, x;
                   printf(" Enter the total numbers : ");
                   scanf("%d", &m);
         x=m;
         if(m>0){
                   printf("\n Enter the First number : ");
                   scanf("%d", &s1);
                   m--;
         if(m>0){
         for(;m>=1; m--){
                   printf("\n Enter the successive number : ");
                   scanf("%d", &s2);
          if(s1>s2)
                   s1=s2;
                   }
                   }
                   }
    printf("\n The Smallest number is %d", s1);
    return(0);
    }
