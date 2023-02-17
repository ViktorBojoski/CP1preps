#include <stdio.h>
#include <math.h>
int main() {
    int pickaxes, long_swords, rejuvenation_beads, tiamat_items;

    printf("Number of pickaxes: ");
    scanf("%d", &pickaxes);
    printf("Number of long swords: ");
    scanf("%d", &long_swords);
    printf("Number of rejuvenation beads: ");
    scanf("%d", &rejuvenation_beads);

    tiamat_items = fmin(fmin(pickaxes, long_swords), rejuvenation_beads / 2);
    pickaxes -= tiamat_items;
    long_swords -= tiamat_items;
    rejuvenation_beads -= 2 * tiamat_items;

    printf("Maximum number of Tiamat items you can craft: %d\n", tiamat_items);
    printf("Remaining pickaxes: %d\n", pickaxes);
    printf("Remaining long swords: %d\n", long_swords);
    printf("Remaining rejuvenation beads: %d\n", rejuvenation_beads);

    return 0;
}
