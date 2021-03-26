#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Point3d [50][3];
    int i;

    printf("Entrer des valeurs pour vos 10 points\n");

    for ( i=0; i<49; i++)
    {
        Point3d [i][3] = 0;
        Point3d [i][3] = 0;
        Point3d [i][3] = 0;
    }

    for (i=0; i<10; i++)
        {
        printf("Entrer une valeur pour le x de votre point %d\n", i+1);
        scanf("%d", &Point3d[i][0]);

        printf("Entrer une valeur pour le y de votre point %d\n", i+1);
        scanf("%d", &Point3d[i][1]);

        printf("Entrer une valeur pour le z de votre point %d\n", i+1);
        scanf("%d", &Point3d[i][2]);
        }

    for (i=0; i<10; i++)
        {
            printf("Le point %d a pour cooordone en x :\n", i+1, Point3d[i][0]);
            printf("Le point %d a pour cooordone en y :\n", i+1, Point3d[i][1]);
            printf("Le point %d a pour cooordone en z :\n\n", i+1, Point3d[i][2]);
        }
}
