#include<stdio.h>
#include<stdlib.h>
   //this is program for dynamic array creation
   int main()
   {
     
    
      int arr[5]={5,3,2,6,7};
        int*p;
         int i;
       
           p=(int*)malloc(5*sizeof(int));
         p[0]=4;
         p[1]=0;
         p[2]=12;
         p[3]=23;
         p[4]=11;
         for(i=0;i<=4;i++)
         printf("%d\n",arr[i]);
         printf("\n");
         printf("Below elements are created dynamically\n");
         
         
      for(i=0;i<=4;i++)
      printf("array elements are: %d\n",p[i]);
      return 0;
   }
