#include<stdio.h>                                                                                                                              
int main()
{                                                                               
  double cost, sold, loss, loss_per;                                            
                                              
  scanf("%lf", &cost);                                                          
  scanf("%lf", &sold);                                                          
                                                                                
  loss = cost - sold;                                                           
  loss_per = ((loss *100)/cost);                                                
  printf("%.2f", loss_per);                                   
}  