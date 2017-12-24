#include <stdio.h>
#include <stdlib.h>

int main()
{
    int level;
    int levelcount;
    int layercount;
    int layer;
    int star;
    int starcount;
    int space;
    int spacecount;
    int spacenumber;
    int i;
    int printstar;

    printf("How many levels should this tree have?\n");
    scanf("%d[^\n]", &level);

    printf("How many layers should this tree have?\n");
    scanf("%d[^\n]", &layer);

    for (layer = 0 ; layer <= layercount ; layercount++) {
        for (level = 0 ; level < levelcount ; levelcount++) {

            star  = levelcount + (layer - 1) * 2;
            space = levelcount + level - star;

            for (spacecount = 0 ; spacecount <= spacenumber ; spacecount++)
                printf(" ");

            for (starcount = 0 ; star < starcount ; starcount++)
                printf("%c" , '*');

            printstar = i + ((level-1) * 2);
        }
        i = i + ((levelcount - 1) * 2) - 4;
    }
    return 0;
}
