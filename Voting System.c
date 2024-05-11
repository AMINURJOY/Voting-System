#include<stdio.h>


int main()
{



    printf("\t\t\t\t|**************************************************************|\n");
    printf("\t\t\t\t|**************************************************************|\n");
    printf("\t\t\t\t|**********                                          **********|\n");
    printf("\t\t\t\t|**********    WEICOME TO ELECTRIC VOTING MACHINE    **********|\n");
    printf("\t\t\t\t|**********                                          **********|\n");
    printf("\t\t\t\t|**************************************************************|\n");
    printf("\t\t\t\t|**************************************************************|\n");
    printf("\n\n\n");
    printf("Press anywhere to continue...........\n");
    getch();
    system("cls");
    int Select;
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t|----------------------------------------|\n");
    printf("\t\t\t\t\t|            Select a Option:            |\n");
    printf("\t\t\t\t\t|----------------------------------------|\n");
    printf("\t\t\t\t\t|            1.Admin:                    |\n");
    printf("\t\t\t\t\t|----------------------------------------|\n");
    printf("\t\t\t\t\t|            2.User:                     |\n");
    printf("\t\t\t\t\t|----------------------------------------|\n");
    printf("\t\t\t\t\t|            3.About Dev:                |\n");
    printf("\t\t\t\t\t|----------------------------------------|\n");
    printf("SELECT YOUR OPTION: ");
    scanf("%d",&Select);
    system("cls");
    if(Select==1)

    {


        int ID,Password;
        printf("\n\n\n\t\t\t\t\tENTER YOUR ID : ");
        scanf("%d",&ID);

        if(0<ID && ID<=10)
        {
            printf("\t\t\t\t\tPassword: ");
            scanf("%d",&Password);
            system("cls");
            if(Password==1274 || Password==1050 || Password==1766)
            {
                printf("\n");
                printf("\n");
                printf("\t\t\t\t|----------------------------------------|\n");
                printf("\t\t\t\t|----------------------------------------|\n");
                printf("\t\t\t\t|----------|                  |----------|\n");
                printf("\t\t\t\t|----------|       Admin      |----------|\n");
                printf("\t\t\t\t|----------|                  |----------|\n");
                printf("\t\t\t\t|----------------------------------------|\n");
                printf("\t\t\t\t|----------------------------------------|\n\n\n");


                printf("Election Type: ");
                char election;
                scanf(" %c",&election);

                printf("Allowed Votes Per User: ");
                int allowed_votes;
                scanf("%d",&allowed_votes);


                printf("Total Candidates:3");

                system("cls");


                printf("Name of Candidates");

                printf("Name of Candidate 1:Noori sir\n\n");
                printf("Symbol of Candidate 1:+\n\n");

                printf("Name of Candidate 2:Ashik Bhai\n\n");
                printf("Symbol of Candidate 2:=\n\n");

                printf("Name of Candidate 3:Fahim Sir\n\n");
                printf("Symbol of Candidate 3:-\n\n");

            }

        }
    }

    else if(Select==2)

    {
        int id;
        printf("Enter Your ID:");
        scanf("%d",&id);
        if(id>1000&&1800>id)
        {

            printf("\n");
            printf("\t\t\t\t|----------------------------------------|\n");
            printf("\t\t\t\t|----------------------------------------|\n");
            printf("\t\t\t\t|----------|                  |----------|\n");
            printf("\t\t\t\t|----------|      USER        |----------|\n");
            printf("\t\t\t\t|----------|                  |----------|\n");
            printf("\t\t\t\t|----------------------------------------|\n");
            printf("\t\t\t\t|----------------------------------------|\n\n\n");
            printf("Press Any Key to Continue...........\n");
            getch();
            system("cls");



            int choice,count1=0,count2=0,count3=0;

            for(int i=0; i<=1000; i++)
            {



                printf("\t\t\t\t\t/-----------------------------------------/\n");
                printf("\t\t\t\t\t/-----------------------------------------/\n");
                printf("\t\t\t\t\t/            Cast Your Vote               /\n");
                printf("\t\t\t\t\t/-----------------------------------------/\n");
                printf("\t\t\t\t\t/-----------------------------------------/\n\n\n");

                printf("|CLICK 1 TO VOTE Noori sir |\n");
                printf("|CLICK 2 TO VOTE Ashik Bhai|\n");
                printf("|CLICK 3 TO VOTE Fahim Sir |\n\n");
                printf("|Press 4 to view result |\n\n\n");


                printf("CAST YOUR VOTE: ");
                scanf(" %d",&choice);
                system("cls");



                switch(choice)
                {
                case 1:

                    count1++;
                    break;

                case 2:

                    count2++;
                    break;
                    ;
                case 3:

                    count3++;
                    break;


                }

                if(choice==4)
                {
                    if(count1>count2 && count1>count3)
                    {
                        if(count2>count3)
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                        }

                        else
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);

                        }

                    }
                    else if(count2>count1 && count2>count3)
                    {
                        if(count1>count3)
                        {
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);

                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                        }

                        else
                        {
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);

                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);

                        }


                    }
                    else if(count3>count1 && count3>count2)
                    {
                        if(count2>count1)
                        {
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);

                        }

                        else
                        {
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);

                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);

                        }
                    }
                    else if(count1==count2)
                    {
                        if(count2>count3)
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);

                        }
                        else if(count2<count3)
                        {
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);

                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);

                        }
                        else if(count2==count3)
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);

                        }

                    }
                    else if(count1==count3)
                    {
                        if(count3>count2)
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);

                        }
                        else if(count3<count2)
                        {
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);

                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);


                        }
                        else if(count3==count2)
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);

                        }
                    }
                    else if(count2==count3)
                    {
                        if(count3>count1)
                        {

                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                        }
                        else if(count1>count3)
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);
                        }
                        else if(count1==count3)
                        {
                            printf("Candidate 1:Noori sir\nVote:%d\n\n",count1);
                            printf("Candidate 2:Ashik Bhai\nVote:%d\n\n",count2);
                            printf("Candidate 3:Fahim Sir\nVote:%d\n\n",count3);

                        }
                    }

                }
            }

        }
    }
    else if(Select==3)
    {

        printf("1.Aminur Rahman Joy\nProject leader\nDept. of CSE,DIU\n\n\n");
        printf("2.Md.Tarik\nDept. of CSE,DIU\n\n\n");
        printf("3.Abdur Razzak Chowdhury\nDept. of CSE,DIU\n\n");


    }


}
