#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>

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


void StartMenu()
 {
        PrintMenu();
        int choix = Choice();
        if ( choix == 1)
            Houx();
        else if ( choix == 2)
            PommierSauvage();
        else if ( choix == 3)
            NeflierAllemand();
        else if ( choix == 4)
            PeuplierTremble();
         else if ( choix == 5)
            Merisier();
        else if ( choix == 6)
            cerisierdeSaintelaure();
        else if ( choix == 7)
            Prumellier();
        else if ( choix == 8)
            CheneSessile();
        else if ( choix == 9)
            ChenePubescent();
        else if ( choix == 10)
            ChenePedoncule();
         else if ( choix == 11)
             SauleMarsault();
        else if ( choix == 12)
            AliesierBlanc();
        else if ( choix == 13)
            SorbierOiseleurs();
         else if ( choix == 14)
            AlisierFontainebleau();
        else if ( choix == 15)
            AliersierTorminal();
         else if ( choix == 16)
            TilleulPetitesFeuilles();
        else if ( choix == 17)
            TilleulGrandesFeuilles();
        else if ( choix == 18)
            Amelanchier();
         else if ( choix == 19)
            EpineVinette();
        else if ( choix == 20)
            Buis();
        else if ( choix == 21)
            ClematiteVigneBlanche();
        else if ( choix == 22)
            Noisetier();
        else if ( choix == 23)
            Aubepine2Styles();
        else if ( choix == 24)
            FusainEurope();
         else if ( choix == 25)
            LierreGrimpant();
        else if ( choix == 26)
            Troene();
        else if ( choix == 27)
            ChevrefeuilleDesBois();
         else if ( choix == 28)
            Bourdaine();
        else if ( choix == 29)
            GrosseillerMarquerau();
        else if ( choix == 30)
            RosierChamps();
 }

 int Choice()
{
    int choix;
  scanf("%d", &choix);
    if ( choix == 1)
         Houx();
    else if ( choix == 2)
        PommierSauvage();
    else if ( choix == 3)
        NeflierAllemand();
    else if ( choix == 4)
        PeuplierTremble();
    else if ( choix == 5)
        Merisier();
    else if ( choix == 6)
        cerisierdeSaintelaure();
    else if ( choix == 7)
        Prumellier();
    else if ( choix == 8)
        CheneSessile();
    else if ( choix == 9)
        ChenePubescent();
    else if ( choix == 10)
        ChenePedoncule();
    else if ( choix == 11)
        SauleMarsault();
    else if ( choix == 12)
        AliesierBlanc();
    else if ( choix == 13)
        SorbierOiseleurs();
    else if ( choix == 14)
        AlisierFontainebleau();
    else if ( choix == 15)
        AliersierTorminal();
    else if ( choix == 16)
        TilleulPetitesFeuilles();
    else if ( choix == 17)
        TilleulGrandesFeuilles();
    else if ( choix == 18)
        Amelanchier();
    else if ( choix == 19)
        EpineVinette();
    else if ( choix == 20)
        Buis();
    else if ( choix == 21)
        ClematiteVigneBlanche();
    else if ( choix == 22)
        Noisetier();
    else if ( choix == 23)
        Aubepine2Styles();
    else if ( choix == 24)
        FusainEurope();
    else if ( choix == 25)
        LierreGrimpant();
    else if ( choix == 26)
        Troene();
    else if ( choix == 27)
        ChevrefeuilleDesBois();
    else if ( choix == 28)
        Bourdaine();
    else if ( choix == 29)
        GrosseillerMarquerau();
    else if ( choix == 30)
        RosierChamps();

}

void PrintMenu()
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
    printf("5.  M�risier\n");
    printf("6.  Cerisier de Sainte-Lucie\n");
    printf("7.  Prunellier\n");
    printf("8.  Ch�ne sessile \n");
    printf("9.  Ch�ne pubescent\n");
    printf("10.  Ch�ne p�doncul�\n");
    printf("11.  Saule marsault \n");
    printf("12.  Alisier blanc \n");
    printf("13.  Sorbier des oiseleurs\n");
    printf("14.  Alisier de Fontainebleau\n");
    printf("15.  Alisier torminal\n");
    printf("16.  Tilleul � petites feuilles \n");
    printf("17. Tilleul � grandes feuilles \n");
    printf("18. Am�lanchier \n");
    printf("19. Epine-vinette \n");
    printf("20.  Buis \n");
    printf("21.  Clematite vigne blanche\n");
    printf("22.  Noisetier\n");
    printf("23.  Aub�pine � 2 styles\n");
    printf("24.  Fusain d'Europe \n");
    printf("25.  Lierre grimpant\n");
    printf("26.  Tro�ne\n");
    printf("27.  Ch�vrefeuille des bois\n");
    printf("28.  Bourdaine \n");
    printf("29.  Grosseiller � marqueraux\n");
    printf("30.  Rosier des champs\n");
    printf(">");
    color(15,0);

}



 void Houx()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, marqueterie, artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("argilosableux ou sablocaillouteux\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
    sleep(500);
     printf("voulez vous voir les autres caracteristique?\n\n");
     int B;
     scanf("%d", &B);
     printf("1. OUI\n 2. NON\n");
     if (B = 1)
        sleep(500);
        Houx();
     if (B = 2)
        printf("vous allez etre diriger vers le menu principale.");
        sleep(500);
        PrintMenu();

 }

  void  PommierSauvage()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, mellif�re,�b�nisterie\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

 void NeflierAllemand()
 {
      printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, comestible,artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

 void PeuplierTremble()
 {
    printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, p�te � papier\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

 void  Merisier()
 {
       printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, comestible, �b�nisterie\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

 void cerisierdeSaintelaure()
 {
      printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

 void Prumellier()
 {
       printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("comestible\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("riche en �l�ments nutritifs\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e\n\n ");
     PrintMenu();
 }

 void CheneSessile()
 {
       printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("drainant\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

 void ChenePubescent()
 {
   printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, bois de charpente\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("caillouteux, rocheux\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

 void  ChenePedoncule()
 {
   printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, menuiserie, �b�nisterie\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("drainant\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

 void SauleMarsault()
 {
   printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, mellif�re, vannerie, tinctoriale\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

 void AliesierBlanc()
 {
    printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

  void SorbierOiseleurs()
 {
       printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, �b�nisterie artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e ");
     PrintMenu();
 }

 void  AlisierFontainebleau()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinale, artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

 void  AliersierTorminal()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("m�dicinal, artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e\n\n ");
     PrintMenu();
 }


 void TilleulPetitesFeuilles()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("mellif�re, m�dicinale, artisanat, �b�nisterie");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

  void TilleulGrandesFeuilles()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate arbor�e\n\n");
     else if (A = 2)
        printf("mellif�re, m�dicinale, artisanat, �b�nisterie\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("peu ensoleill�e\n\n");
     PrintMenu();
 }

 void  Amelanchier()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("baies\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("tr�s ensoleill�e\n\n");
     PrintMenu();
 }

 void  EpineVinette()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("m�dicinale, baies\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("caillouteux, rocheux\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e \n\n");
     PrintMenu();
 }

 void  Buis()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("m�dicinale, bois\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("pierreux\n\n");
     else if (A = 5)
        printf("peu ensoleill�e\n\n");
     PrintMenu();
 }


 void ClematiteVigneBlanche()
 {
      printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("paniers\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

 void Noisetier()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("comestible, marqueterie, vannerie\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

 void Aubepine2Styles()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("m�dicinale, artisanat\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
 }

 void FusainEurope()
 {
    printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("marqueterie, artisanat, tinctoriale\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("riche en �l�ments nutritifs\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e\n\n");
     PrintMenu();
 }

 void LierreGrimpant()
 {
      printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("m�dicinale\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e\n\n");
     PrintMenu();

 }

 void  Troene()
 {
 printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("mellif�re, m�dicinale, tinctoriale\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e\n\n");
     PrintMenu();
 }

 void ChevrefeuilleDesBois()
 {
    printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("m�dicinale\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("moyennement ensoleill�e\n\n");
     PrintMenu();
 }

  void  Bourdaine()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("bois\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }

 void GrosseillerMarquerau()
 {
   printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("mellif�re, comestible, m�dicinale\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("riche en �l�ments nutritifs\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }


 void RosierChamps()
 {
     printf("1.Categorisation de la plante :\n");
     printf("2.Description et interets \n");
     printf("3.Photos :\n");
     printf("4.Sol :\n");
     printf("5.Temperature atmospherique Optimal :\n");
     printf(">");
     int A;
     scanf("%d", &A);
     if (A = 1)
        printf("Strate Arbustive\n\n");
     else if (A = 2)
        printf("horticulture, hybrides\n\n");
     else if (A = 3)
        printf("");
     else if (A = 4)
        printf("non sp�cifique\n\n");
     else if (A = 5)
        printf("indiff�rente\n\n");
     PrintMenu();
 }
