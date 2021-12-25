#include<stdio.h>
int main()
{
  int n;
  float X = 0;

  do
  {
    printf("\nNhap vao so n: ");
    scanf("%d", &n);
    if(n < 1)
    {
      printf("\nError !");
    }
    
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    X = X + 1.0 / i;
  }
  
  printf("\nTong 1 + 1/2 + ... + 1/%d la: %.2f",n, X);
 
}
  
