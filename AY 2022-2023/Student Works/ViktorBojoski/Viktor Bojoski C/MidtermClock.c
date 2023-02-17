#include <stdio.h>
#include <math.h>

int main() {
    int hours, minutes;

    printf("Input number of hours: ");
    scanf("%d", &hours);
    printf("Input number of minutes: ");
    scanf("%d", &minutes);

    float angle_hours = (30.0 * hours + 0.5 * minutes);
    float angle_minutes = 6 * minutes;
    float angle_between_hands = abs(angle_hours - angle_minutes) > 180 ? 360 - abs(angle_hours - angle_minutes) : abs(angle_hours - angle_minutes);

    printf("The angle of hour hand is %.2f degrees.\n", angle_hours);
    printf("The angle of minute hand is %.2f degrees.\n", angle_minutes);
    printf("Angle between hands is %.2f degrees", angle_between_hands);
    return 0;
}
