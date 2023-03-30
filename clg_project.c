//restaurant menu driven program
#include<stdio.h>
void main()
{
    int num,a,b=1,dish_price,price=0,gst,total_price;
        printf("              CHEF'S KITCHEN                 \n");

    printf("choose the given number to order your food \n");

    printf("-------------------DOSA-----------------------\n");
    printf("1.Sada Dosa                    Rs50 \n");
     printf("2.Butter Sada Dosa             Rs90 \n");
     printf("3.Masala Dosa                  Rs150 \n");
      printf("4.Mysore Masala Dosa           Rs250 \n");
       printf("5.Cocolate Dosa                Rs150 \n");
        printf("6.Schezwan Dosa                Rs350 \n");
         printf("------------------SOUPS---------------------\n ");
          printf("7.Sweetcorn  Soup            Rs150 \n");
          printf(" 8.Hot and Sour Soup          Rs150 \n");
           printf(" 9.Tomato Soup                Rs170 \n");
          printf(" 10.Manchow Soup              Rs190 \n");
          printf(" 11.Brocolli Soup             Rs250 \n");
           printf("-----------PIZZA 10 inch-------------------\n ");
          printf("12.Margherita Pizza            Rs150 \n");
           printf(" 13.Exotic Pizza                Rs250 \n");
           printf(" 14.Chef's special Pizza        Rs275 \n");
           printf(" 15.Customise Pizza             Rs350 \n");
            printf("------------INDIAN MAIN COURSE------------\n ");
             printf("16.Plain Roti           Rs50 \n");
              printf(" 17.Butter Roti          Rs90 \n");
               printf(" 18.Mix Veg              Rs150 \n");
                printf(" 19.Veg Handi            Rs250 \n");
                 printf(" 20.Palak Paneer         Rs190 \n");
                  printf(" 21.Jeera Rice           Rs250\n");
                  printf("------------DESSERTS------------\n ");
                   printf(" 22. 3 scope vanilla ice cream         Rs100\n");
                    printf(" 23.Brownie         Rs250\n");
                     printf("------------MOCTAILS------------\n");
                      printf(" 24.Blue Sea           Rs150\n");
                      printf(" 25.Virgin Mojito           Rs200\n");
                      printf(" 26.Dry Cranberry Spitzer           Rs250\n");
                      printf(" 27.Mango Mule            Rs250\n");
                      printf(" 28.Citrus Fizz            Rs250\n");
                      printf(" 29.Shirley Temple           Rs250\n");
                      printf(" 30.fruit punch          Rs250\n");

                  start:
                   printf("Enter the number of dish to be ordered:");
                   scanf("%d",&num);
                   printf("Enter the number quantity you require:");
                   scanf("%d",&a);
                   switch(num)
                   {
                       case 1:
                           dish_price=50*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 2:
                           dish_price=90*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 3:
                           dish_price=150*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 4:
                           dish_price=250*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;

                            case 5:
                           dish_price=150*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 6:
                           dish_price=350*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;

                            case 7:
                           dish_price=150*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;


                            case 8:
                           dish_price=150*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;


                            case 9:
                           dish_price=170*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 10:
                           dish_price=190*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;


                            case 11:
                           dish_price=250*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 12:
                           dish_price=150*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;

                            case 13:
                           dish_price=250*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;




                            case 14:
                           dish_price=275*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;

                            case 15:
                           dish_price=350*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 16:
                           dish_price=50*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 17:
                           dish_price=90*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 18:
                           dish_price=150*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 19:
                           dish_price=250*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 20:
                           dish_price=190*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 21:
                           dish_price=250*a;
                           price=price+dish_price;
                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                             case 22:
                           dish_price=100*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;

                             case 23:
                           dish_price=250*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                             case 24:
                           dish_price=150*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                             case 25:
                           dish_price=200*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                             case 26:
                           dish_price=250*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 27:
                           dish_price=250*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 28:
                           dish_price=250*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 29:
                           dish_price=250*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            case 30:
                           dish_price=250*a;
                           price=price+dish_price;


                           printf("Do u want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                goto start;
                            }
                            else
                            {
                                goto end;
                            }
                            break;
                            default:
                            {
                                printf("wrong input");
                                goto start;
                            }

                   }
                            end:
                           gst=0.18*price;
                           total_price=gst+price;

                       printf("\n \n \nYour total bill is: %d",total_price);


}
