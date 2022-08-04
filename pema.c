 #include<stdio.h>
#include <stdio.h>
int main()
{
    int tab[2][3];//tableau a deux dimension
    int i; // indice pour les colone
    int j; // indice pour les ligne
    char *A[50];
    char math, pc, svt;//les mathiers
    float S, M;
    float m1, m2, m3;//somme des notes pour chaque matier
     printf("entrez votre prenom: \n");//prenom de leleve
     scanf("%s",&A);

//saisi des notes
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 2; i++)
       {
             if (j == 0)
               {
                printf("veuillez saisi votre note math [%d][%d]\n", j, i);
                scanf("%d",&tab[j][i]);
               }
               /* if(tab[i]<0 || tab[i]>20)
                {   
        printf("veuillez saisir des notes comprises entre 0 et 20 [%d]\n",j,i);
        scanf("%d",&tab[j][i]);*/  
              if (j == 1)
              {
                printf("veuillez saisi votre note pc [%d][%d]\n", j, i);
                scanf("%d", &tab[j][i]);
              }
             
              /*   if(tab[j][i]<0 || tab[j][i]>20)
                {
        printf("veuillez saisir des notes comprises entre 0 et 20 [%d]\n",j,i);
        scanf("%d",&tab[j][i]);
                }*/
              
               if (j == 2)
              {
                printf("veuillez saisi votre note svt [%d][%d]\n", j, i);
                scanf("%d", &tab[j][i]);
              }
                /*  if(tab[j][i]<0 || tab[j][i]>20)
                {
                
         printf("veuillez saisir des notes comprises entre 0 et 20 [%d]\n",j,i);
        scanf("%d",&tab[j][i]);
                }*/
              }
        }
    

    
       //calcul de moyenne
        
m1=(tab[0][0]+tab[0][1])/2;
m2=(tab[1][0]+tab[1][1])/2;
m3=(tab[2][0]+tab[2][1])/2;
S=(m1*3+m2*4+m3*6);
M=S/13;
//affichage de prenom est moyenne
printf(" votre prenon est %s",A);
printf(" la moyenne est %f",M);
   if(M<10)
   {
   printf(" mediocre");
   }
   if(M==10)
   {
       printf(" passable");
   }
   if(12<M || M<14)
   {printf(" tres bien");
   }
   if(M>14)
   {printf(" exellant");
   }

return 0;
}  
