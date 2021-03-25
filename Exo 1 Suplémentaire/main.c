#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Point3D[49][3];
    int x, n, p;

    for( x=0; x<49; x++)
    {
        Point3D[x][0] = 0;
        Point3D[x][1] = 0;
        Point3D[x][2] = 0;
    }


    printf("\nTableau : \n\n");

    printf("Entrez des valeurs pour les 10 premiers points : \n");

    for( x=0; x<10; x++)
    {
        printf("\nPoint %d :\n", x+1);

        printf("\tx = ");
        scanf("%d",&Point3D[x][0]);

        printf("\ty = ");
        scanf("%d",&Point3D[x][1]);

        printf("\tz = ");
        scanf("%d",&Point3D[x][2]);

    }

    for( x=0; x<10; x++){
        printf("\nPoint %d : ",x+1);
        printf("x= %d  y= %d  z= %d  ", Point3D[x][0], Point3D[x][1], Point3D[x][2]);
    }

}
