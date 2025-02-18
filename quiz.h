struct quiz
{
    char answer[22];
    int option;
}q[10];
void wrongAnswer()
{
    printf("\n\t-> Wrong Answer !! \n\n");sleep(3);
}
void rightAnswer()
{
    printf("\n\t-> You Are Goddamn Right , Answer Is ");sleep(2);
}
int quizQuestionsAndAnswers()
{
    printf("***************************************************************************************************************************************************************************\n");
    printf("--------------------------------------------------------------------------------WELCOME TO QUIZ----------------------------------------------------------------------------\n");
    printf("***************************************************************************************************************************************************************************\n");
    int ch=1;
    system("COLOR 0E");
    switch(ch)
    {

        case 1:
            {
                f2:
                system("cls");
                printf("\t\tEnter 5 To Previous Question\t 6. To Next Question\t7. Exit The Program\n\n");
                printf("   1.Who was the monkey father of lord hanuman: \n");
                printf("\n\tOptions:\n\t\t1.Vali\t\t2.Kesari\n\t\t3.Sugriva\t4.Vayu\n  :");
                scanf("%d",&q[1].option);
                strcpy(q[1].answer,"Kesari");
                switch(q[1].option)
                {
                    case 1:wrongAnswer();goto f2;break;
                    case 2:rightAnswer();printf("%s\n\n",q[1].answer);sleep(2);break;
                    case 3:wrongAnswer();goto f2;break;
                    case 4:wrongAnswer();goto f2;break;
                    case 5:wrongAnswer();break;
                    case 6:goto f3;break;
                    case 7:return 18;
                    default:printf("\n\t-> Enter The Valid Option !\n\n");goto f2;
                }
                sleep(6);
            }
        case 2:
            {
                f3:
                system("cls");
                printf("\t\tEnter 5 for the Previous Question\t 6 for the Next Question\t7 to Exit from the Program\n\n");
                printf("   2.The first person to get 'Jnanapitha' Award for Kannada Literature\n");
                printf("\n\tOptions:\n\t\t1.Dha.Ra.Bendre\t\t\t2.Dr.V K Gokak\n\t\t3.Masti Venkatesh Iyengar\t4.Kuvempu\n  :");
                scanf("%d",&q[2].option);
                strcpy(q[2].answer,"Kuvempu");
                switch(q[2].option)
                {
                    case 1:wrongAnswer();goto f3;break;
                    case 2:wrongAnswer();goto f3;break;
                    case 3:wrongAnswer();goto f3;break;
                    case 4:rightAnswer();printf("%s\n\n",q[2].answer);sleep(2);break;
                    case 5:goto f2;break;
                    case 6:goto f6;break;
                    case 7:return 18;
                    default:printf("\n\t-> Enter The Valid Option !\n\n");goto f3;
                }
                sleep(6);
            }
          case 3:
            {
                f6:
                system("cls");
                printf("\t\tEnter 5 To Previous Question\t 6. To Next Question\t7. Exit The Program\n\n");
                printf("   3.The Current Foreign Minister of India \n");
                printf("\n\tOptions:\n\t\t1.Shashi Tharoor\t2.S.Jaishankar\n\t\t3.Hemanth Biswa\t\t4.Sudhanshu Trivedi\n  :");
                scanf("%d",&q[5].option);
                strcpy(q[5].answer,"S.Jaishankar");
                switch(q[5].option)
                {
                    case 1:wrongAnswer();goto f6;break;
                    case 2:rightAnswer();printf("%s\n\n",q[3].answer);sleep(2);break;
                    case 3:wrongAnswer();goto f6;break;
                    case 4:wrongAnswer();goto f6;break;
                    case 5:goto f3;break;
                    case 6:goto f7;break;
                    case 7:return 18;
                    default:printf("\n\t-> Enter The Valid Option !\n\n");goto f6;
                }
                sleep(6);
            }
        case 4:
            {
                f7:
                system("cls");
                printf("\t\tEnter 5 To Previous Question\t 6. To Next Question\t7. Exit The Program\n\n");
                printf("   4.Which one of these Cricket Players has scored the First 200+ runs in an ODI Innings\n");
                printf("\n\tOptions:\n\t\t1.Sachin Tendulkar\t2.Rohit Sharma\n\t\t3.Virat Kohli\t\t4.Sunil Gavaskar\n  :");
                scanf("%d",&q[6].option);
                strcpy(q[6].answer,"Sachin Tendulkar");
                switch(q[6].option)
                {
                    case 1:rightAnswer();printf("%s\n\n",q[4].answer);sleep(2);break;
                    case 2:wrongAnswer();goto f7;break;
                    case 3:wrongAnswer();goto f7;break;
                    case 4:wrongAnswer();goto f7;break;
                    case 5:goto f6;break;
                    case 6:goto f8;break;
                    case 7:return 18;
                    default:printf("\n\t-> Enter The Valid Option !\n\n");goto f7;
                }
                sleep(6);
            }
        case 5:
            {
                f8:
                system("cls");
                printf("\t\tEnter 5 To Previous Question\t 6. To Next Question\t7. Exit The Program\n\n");
                printf("   5.Who is called as the Shining Star(Minugu Taare) in Kannada Film Industry\n");
                printf("\n\tOptions:\n\t\t1.Jayanthi\t\t2.Pandaribhai\n\t\t3.Sudharani\t\t4.Kalpana\n  :");
                scanf("%d",&q[7].option);
                strcpy(q[7].answer,"Kalpana");
                switch(q[7].option)
                {
                    case 1:wrongAnswer();goto f8;break;
                    case 2:wrongAnswer();goto f8;break;
                    case 3:wrongAnswer();goto f8;break;
                    case 4:rightAnswer();printf("%s\n\n",q[7].answer);sleep(2);break;
                    case 5:goto f7;break;
                    case 6:printf("\n\t->It Is The Last Question , No Further Questions Are There,Thank You!\n\n");break;
                    case 7:return 18;
                    default:printf("\n\t-> Enter The Valid Option !\n\n");goto f8;
                }
                sleep(6);
            }
            system("cls");
        default:printf("\n\n\n\t\t\t\t\t\t\t\tThank You For Playing - _ -\n\n");
        sleep(50);
        system("cls");
    }
}
