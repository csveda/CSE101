//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
      int i,n,up,sign=1,down=3;
      float term,z,sum=0; 
      printf("Enter the value of n: ");
      scanf("%d", &n);
      for(i=1;i<=n;i++)
      {
        up=pow(3,i-1);
        z=(float)up/down;
        term=(float)sign*z;
        printf("%f  ",term);
        sum+=term;
        down=down*down;
        sign=sign*-1;
      }
      printf("\nSum=%f",sum);
      getch();
	return 0;
}
      

