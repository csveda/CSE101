//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
int main()
{
      int m[5], i=0, sum=0; 
      float avg=0;
      printf("Enter the marks of a student in 5 subjects:\n");
      for(i=0; i<5; i++)
      {
              printf("Enter marks for subject %d : ", i+1);
              scanf("%d", &m[i]);
              sum+=m[i];
      }
      avg=(float)sum/5;
      printf("The student's average marks is: %f\n", avg);
      printf("The student has obtained ");
      if(avg>=90)
      printf("Grade S");
      else if(avg>=80&&avg<90)
      printf("Grade A");
      else if(avg>=70&&avg<80)
      printf("Grade B");
      else if(avg>=60&&avg<70)
      printf("Grade C");
      else if(avg>=50&&avg<60)
      printf("Grade D");
      else
      printf("Grade F");
      getch();
      return 0;
}
