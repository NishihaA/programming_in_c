//Live Demo
#include <stdio.h>
 int main ()
 {
   int n = 153; 
   int d, r, sum = 0;

   d = n;

   while(d != 0) 
   {
      r = d % 10;
      sum = sum + (r * r * r);
      d = d / 10;
   }

   if(sum == n)
   {
	 
      printf("%d is an armstrong number.", n);
  }
   else 
   {
   
      printf("%d is not an armstrong number.", n);
      return 0;
  }
      
}
