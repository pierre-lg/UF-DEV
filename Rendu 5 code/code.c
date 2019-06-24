#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>
#include <mysql.h>

void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
}

void sleep(unsigned long int n)
{

        int i = 0;
        unsigned long int max = n * 100000;
        do {

                i++;
        }
        while(i <= max);
}


void printMenu()
{
    color(14,0);
    printf("                                      ************************************************************\n\n");
    printf("                                      *******             PLANTES CONNECTER             *******\n\n");
    printf("                                      ************************************************************\n\n\n");
    color(15,0);
    printf("MAIN MENU : \n");
    printf("1. Houx  \n");
    printf("2. Pommier Sauvage \n");
    printf("3.  Neflier Allemand \n");
    printf("4.  Peuplier Tremble \n");
    printf("5.  Mérisier\n");
    printf("6.  Cerisier de Sainte-Lucie\n");
    printf("7.  Prunellier\n");
    printf("8.  Chêne sessile \n");
    printf("9.  Chêne pubescent\n");
    printf("10.  Chêne pédonculé\n");
    printf("11.  Saule marsault \n");
    printf("12.  Alisier blanc \n");
    printf("13.  Sorbier des oiseleurs\n");
    printf("14.  Alisier de Fontainebleau\n");
    printf("15.  Alisier torminal\n");
    printf("16.  Tilleul à petites feuilles \n");
    printf("17. Tilleul à grandes feuilles \n");
    printf("18. Amélanchier \n");
    printf("19. Epine-vinette \n");
    printf("20.  Buis \n");
    printf("21.  Clematite vigne blanche\n");
    printf("22.  Noisetier\n");
    printf("23.  Aubépine à 2 styles\n");
    printf("24.  Fusain d'Europe \n");
    printf("25.  Lierre grimpant\n");
    printf("26.  Troène\n");
    printf("27.  Chèvrefeuille des bois\n");
    printf("28.  Bourdaine \n");
    printf("29.  Grosseiller à marqueraux\n");
    printf("30.  Rosier des champs\n");
    printf(">");
    color(15,0);

}




void StartMenu()
 {
        printMenu();
        int choix ;
        scanf("%d",&choix);
        if ( choix == 1){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=1");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }


        if(choix==2){
             MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=2");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }


         if ( choix == 3){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=3");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }


         if ( choix == 4){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=4");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 5){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=5");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 6){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=6");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 7){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=7");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 8){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=8");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 9){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=9");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 10){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=10");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 11){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=11");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 12){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=12");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 13){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=13");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 14){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=14");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 15){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=15");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 16){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=16");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 17){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=17");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 18){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=18");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 19){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=19");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 20){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=20");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 21){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=21");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 22){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=22");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 23){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=23");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 24){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=24");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 25){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=25");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }


         if ( choix == 26){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=26");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 27){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=27");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 28){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=28");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }


         if ( choix == 29){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=29");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

         if ( choix == 30){
              MYSQL mysql;

        mysql_init(&mysql);

        mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");



        if(mysql_real_connect(&mysql,"localhost","root","","plante_connecter",0,NULL,0))

            {

            //Déclaration des pointeurs de structure

                MYSQL_RES *result = NULL;

                MYSQL_ROW row = NULL;





                unsigned int i = 0;

                unsigned int num_champs = 0;







// Cette fois, on va lire les données

                printf("\nCette fois, on va lire les donnees :\n");

            //à nouveau la requête qui sélectionne tout dans ma table ex_1

                mysql_query(&mysql, "SELECT * FROM Plante where id_Plante=30");



                result = mysql_use_result(&mysql);

            //On récupère le nombre de champs

                num_champs = mysql_num_fields(result);

                while (( row =  mysql_fetch_row(result)))

                {

              //On déclare un pointeur long non signé pour y stocker la taille des valeurs

                    unsigned long *lengths;

              //On stocke cette taille dans le pointeur

                    lengths = mysql_fetch_lengths(result);

              //On fait une boucle pour avoir la valeur de chaque champs

                    for(i = 0; i < num_champs; i++)

                    {

                //On ecrit toutes les valeurs

                        printf("[%.*s] ", (int) lengths[i], row[i] ? row[i] : "NULL");

                    }

                    printf("\n");

                }



            }



                else

                {

                    printf("Une erreur s est produite lors de la connexion a la BDD!");

                }
        }

        printf("Voulez vous voir d'autre plante?\n\n");
        printf("1.Oui\n 2.Non\n >");
        int C;
        scanf("%d", &C);
        if (C == 1){
            printMenu();
            StartMenu();
        }

        if (C == 2){
            printf("Au Revoir!");
        }
 }



