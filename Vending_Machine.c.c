#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*
    Declared available 25,15,10 rupee stamps as S25,S15,S10 variables
    Declared available 50,25,10,5 rupee coins as C50,C25,C10,C5 variables
    value of the stamp which input by the user is assigned by the req_stamp variable
    user selection for continue or leave is assigned to the choice variable
    */

    int S25,S15,S10,C50,C25,C10,C5,req_stamp,coin,choice;
    S25 = 10;
    S15 = 10;
    S10 = 10;
    C50 = 10;
    C25 = 10;
    C10 = 10;
    C5 = 10;
    start:
while(S25+S15+S10>0)
    //runs when atleast 1 stamp is available
{

    printf("Welcome to Stamp Vending Machine !!\n\n");
    printf("\tTo buy a 25 rupee stamp ==> Enter 25\n");
    printf("\tTo buy a 15 rupee stamp ==> Enter 15\n");
    printf("\tTo buy a 10 rupee stamp ==> Enter 10\n");
    printf("\nPlease enter the value of the stamp\n ");
    scanf("%d",&req_stamp);

    switch(req_stamp)
    {
        case 25:
            //user request 25 rupee stamp
            if(S25>0)
            {
                printf("\nPlease Insert the Coin\n");
                scanf("%d",&coin);

                    if(coin==50)
                    {
                        if(C25>=1)
                        {
                        S25--;
                        C50++;
                        C25--;
                        printf("\nPlease collect your stamps ...\n");
                        printf("\nBALANCE\n");
                        printf("\t 1x25 => 25\n");
                        printf("Your balance is 25 Rupees\n");
                        printf("\nPlease collect your balance ...\n");
                        }

                    else
                    {
                        printf("\nNo balance availabe!\n");
                    }

                    }


                else if (coin==25)
                {
                        S25--;
                        C25++;
                        printf("\nPlease collect your stamps\n");
                }

                else if (coin==10)
                {
                        printf("\nSorry, Coin you entered is insufficient !!\n");
                }

                else if (coin==5)
                {
                        printf("\nSorry, Coin you entered is insufficient !!\n");
                }

                else
                {
                    printf("\nCoin you entered is invalid\n");
                }

            }

                else
                {
                printf("\nSorry, 25 rupee stamps are currently unavailable!\n");
                }
        break;

        case 15:
             //user request 15 rupee stamp
            if(S15>0)
               {
                    printf("\nPlease Insert the Coin\n");
                    scanf("%d",&coin);
                    if(coin==50)
                    {
                        if(C25>=1)
                        {
                            if(C10>=1)
                            { //run only when atleast 1 50 and 10 rupee coin available
                                S15--;
                                C50++;
                                C25--;
                                C10--;
                                printf("\nPlease collect your stamps ...\n");
                                printf("\nBALANCE\n");
                                printf("\t 1x25 => 25\n");
                                printf("\t 1x10 => 10\n");
                                printf("Your balance is 35 Rupees\n");
                                printf("\nPlease collect your balance ...\n");
                            }

                        else
                        {
                            printf("\nNo balance availabe!\n");
                        }

                        }
                    }
                    else if (coin==25)
                        {
                            if(C10>=1)
                            { //run only when atleast 1 10 rupee coin available
                                S15--;
                                C25++;
                                C10--;
                                printf("\nPlease collect your stamps ...\n");
                                printf("\nBALANCE\n");
                                printf("\t 1x10 => 10\n");
                                printf("Your balance is 10 Rupees\n");
                                printf("\nPlease collect your balance ...\n");
                            }

                            else
                            {
                                printf("\nNo balance availabe\n");
                            }
                        }
                        else if (coin==10)
                        {
                            printf("\nSorry, Coin you entered is insufficient !!\n");
                        }


                        else if (coin==5)
                        {
                            printf("\nSorry, Coin you entered is insufficient !!\n");
                        }

                        else
                        {
                            printf("\nCoin you entered is invalid\n");
                        }

                    }


                    else
                    {
                        printf("\nSorry, 15 rupee stamps are currently unavailable!\n");
                    }
        break;

        case 10:
             //user request 10 rupee stamp
            if(S10>0)
            {
                printf("\nPlease Insert the Coin\n");
                scanf("%d",&coin);

                if(coin==50)
                {
                    if(C25>=1)
                    {
                        if(C10>=1)
                        {
                            if(C5>=1)
                            {//run only when atleast 1 25,10,5 rupee coin available
                                S10--;
                                C50++;
                                C25--;
                                C10--;
                                C5--;
                                printf("\nPlease collect your stamps ...\n");
                                printf("\nBALANCE\n");
                                printf("\t 1x25 => 25\n");
                                printf("\t 1x10 => 10\n");
                                printf("\t 1x5  => 10\n");
                                printf("Your balance is 40 Rupees\n");
                                printf("\nPlease collect your balance ...\n");
                            }
                    else
                    {
                        printf("\nNo balance availabe!\n");
                    }
                         }
                        else
                        {
                            printf("\nNo balance availabe!\n");
                        }
                    }
                    else
                    {
                        printf("\nNo balance availabe!\n");
                    }
                }
                else if (coin==25){
                        if(C10>=1){
                            if(C5>=1){
                            S10--;
                            C25++;
                            C10--;
                            C5--;
                            printf("\nPlease collect your stamps ...\n");
                            printf("\nBALANCE\n");
                            printf("\t 1x10 => 10\n");
                            printf("\t 1x5  => 05\n");
                            printf("Your balance is 15 Rupees\n");
                            printf("\nPlease collect your balance ...\n");

                        }
                        }
                        else{
                        printf("\nNo balance availabe\n");
                    }
                }
                else if (coin==10){
                    S10--;
                    C10++;
                    printf("\nPlease collect your stamps ...\n");

                }
                else if (coin==10)
                {
                    printf("\nSorry, Coin you entered is insufficient !!\n");
                }

                else
                {
                    printf("\nCoin you entered is invalid\n");
                }

               }


                else
                {
                    printf("\nSorry, 10 rupee stamps are currently unavailable!\n");
                }
        break;

        default: // any other request than 25,15,10
            printf("\nYou input is invalid!\n");

    }
        printf("\nDo you need another service?\n" );
        printf("\n\tIf you need another service ==> Enter '1'");
        printf("\n\tIf you to end the service   ==> Enter '0'\n");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
            goto start;
        }
        else
        {
            printf("\nThank you for using our service!!\n\n");
            printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
            goto start;
        }
}
// runs when no stamps available
    printf("\nNo stamps available!\n");
}
