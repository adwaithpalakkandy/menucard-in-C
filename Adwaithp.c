
#include <stdio.h>

int main()
{
    printf("-------->WELCOME TO EGGPLOSION CAFE<-------\n\n\n");
    printf("====SIGNATURE MENU====\n\n");
    printf(" 1.EGG FRIES    180rs \n 2.EGG BURGIE    90rs \n 3.EGG MASALA    90rs \n 4.EGG PIZZA    250rs \n 5.EGG BURGER    320rs \n 6.CONFIRM  \n 7.JUST ENQUIRY  \n \n\n");

    int order;
    int od1=0,od2=0,od3=0,od4=0,od5=0,od6=0;
    int quantity =1;
    printf("GRAB IT YOUR ORDER \n \n ");
     do
     {
        printf("enter your orders : \n" );
        scanf("%d",&order);
       switch(order)
          {
            case 1:
            printf("EGG FRIES    180rs \n");
            printf("quantity :");
            scanf("%d",&od1);
            break;
            case 2:
            printf("EGG BURGIE    90rs \n");
            printf("quantity :");
            scanf("%d",&od2);
            break;
            case 3:
            printf("EGG MASALA    90rs \n");
            printf("quantity :");
            scanf("%d",&od3);
            break;
            case 4:
            printf("EGG PIZZA    250rs \n");
            printf("quantity :");
            scanf("%d",&od4);
            break;
            case 5:
            printf("EGG BURGER    250rs \n");
            printf("quantity :");
            scanf("%d",&od5);
            break;
            case 6:
            printf("CONFRIM \n\n");
            break;
            case 7:
            printf("JUST ENQUIRY \n");
            break;
            default:
            printf("OPPS! dont order anything \n");

          }
          if(order<=5)
          {
              if(order ==1)
              {
               printf(" %dEGG FIRES    180rs add to cart \n",od1);
              }
              else if(order==2)
              {
               printf("%dEGG BURGIE    90rs  add to cart\n",od2);
              }
              else if(order==3)
              {
               printf("%dEGG MASALA    90rs add to cart \n",od3);
              }
              else if(order==4)
              {
               printf("%d EGG PIZZA    250rs  add to cart\n",od4);
              }
              else if(order==5)
              {
               printf("%dEGG BURGER    250rs  add to cart\n",od5);
              }
          }
          else if(order==6)
          {
            printf("%d EGG FIRES    180rs\n",(od1*quantity));
            printf("%d EGG BURGIE    90rs \n",(od2*quantity));
            printf("%d EGG MASALA    90rs \n",od3*quantity);
            printf("%d EGG PIZZA    250rs \n",od4*quantity);
            printf("%d EGG BURGER   250rs \n",od5*quantity);
          }
          else
          {
            printf("VISIT AGAIN \n");
            return 0;
          }
      } while(order <=5 && order >0);
      printf("\n\n");
      printf("YOUR ORDER :     RATE    QNT\n");
      printf("-----------      -----   ---    \n\n");
      if(od1>0)
      {
        printf("EGG FIRES        180rs    %d  \n",(od1*quantity));
      }
      if(od2>0)
      {
       printf("EGG BURGIE        90rs    %d  \n",(od2*quantity));
      }
      if(od3>0)
      {
       printf("EGG MASALA        90rs    %d  \n",od3*quantity);
      }
      if(od4>0)
      {
       printf("EGG PIZZA        250rs    %d  \n",od4*quantity);
      }
      if(od5>0)
      {
       printf("EGG BURGER       250rs    %d  \n",od5*quantity);
      }
      printf("______________________________\n");

      float sum=od1*180+od2*90+od3*90+od4*250+od5*250;
      float GsT;
      printf("TOTAL                  %g rs\n",sum);
      printf("GsT                    %g rs\n",sum*18/100);
      printf("-----------------------------\n");
     
      printf("GRAND TOTAL            %g rs\n",sum*18/100+sum);
      printf("-----THANK YOU VISIT AGAIN------\n");

      return 0;
}