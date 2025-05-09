#include <stdio.h>


int main(void) {
    int dt1 = 480, at1 = 616;
    int dt2 = 583, at2 = 712;
    int dt3 = 679, at3 = 811;
    int dt4 = 767, at4 = 900;
    int dt5 = 840, at5 = 968;
    int dt6 = 945, at6 = 1075;
    int dt7 = 1140, at7 = 1280;
    int dt8 = 1305, at8 = 1438;
    int hours, minutes, time, dt, at, gap, temp;

    printf("Enter a time (hh:mm, 24hr): ");
    scanf("%2d:%2d", &hours, &minutes);

    time = hours * 60 + minutes;

    gap = time > dt1 ? time - dt1 : dt1 - time;
    dt = dt1;
    at = at1;

    if ((temp = time > dt2 ? time - dt2 : dt2 - time) < gap) {
        gap = temp;
        dt = dt2;
        at = at2;
    }

    if ((temp = time > dt3 ? time - dt3 : dt3 - time) < gap) {
        gap = temp;
        dt = dt3;
        at = at3;
    }

    if ((temp = time > dt4 ? time - dt4 : dt4 - time) < gap) {
        gap = temp;
        dt = dt4;
        at = at4;
    }

    if ((temp = time > dt5 ? time - dt5 : dt5 - time) < gap) {
        gap = temp;
        dt = dt5;
        at = at5;
    }

    if ((temp = time > dt6 ? time - dt6 : dt6 - time) < gap) {
        gap = temp;
        dt = dt6;
        at = at6;
    }

    if ((temp = time > dt7 ? time - dt7 : dt7 - time) < gap) {
        gap = temp;
        dt = dt7;
        at = at7;
    }

    if ((temp = time > dt8 ? time - dt8 : dt8 - time) < gap) {
        gap = temp;
        dt = dt8;
        at = at8;
    }

    if (dt < 60) {
        if (at < 60) {
            printf("Closest departure time is 12:%.2d AM, arriving at 12:%.2d AM\n",
                        dt % 60, at % 60);
        } else if (at < 720) {
            printf("Closest departure time is 12:%.2d AM, arriving at %.2d:%.2d AM\n",
                        dt % 60, at / 60, at % 60);
        } else if (at < 780) {
            printf("Closest departure time is 12:%.2d AM, arriving at 12:%.2d PM\n",
                        dt % 60, at % 60);
        } else {
            printf("Closest departure time is 12:%.2d AM, arriving at %.2d:%.2d PM\n",
                        dt % 60, at / 60 - 12, at % 60);
        }
    } else if (dt < 720) {
        if (at < 60) {
            printf("Closest departure time is %.2d:%.2d AM, arriving at 12:%.2d AM\n",
                        dt / 60, dt % 60, at % 60);
        } else if (at < 720) {
            printf("Closest departure time is %.2d:%.2d AM, arriving at %.2d:%.2d AM\n",
                        dt / 60, dt % 60, at / 60, at % 60);
        } else if (at < 780) {
            printf("Closest departure time is %.2d:%.2d AM, arriving at 12:%.2d PM\n",
                        dt / 60, dt % 60, at % 60);
        } else {
            printf("Closest departure time is %.2d:%.2d AM, arriving at %.2d:%.2d PM\n",
                        dt / 60, dt % 60, at / 60 - 12, at % 60);
        }
    } else if (dt < 780) {
        if (at < 60) {
            printf("Closest departure time is 12:%.2d PM, arriving at 12:%.2d AM\n",
                        dt % 60, at % 60);
        } else if (at < 720) {
            printf("Closest departure time is 12:%.2d PM, arriving at %.2d:%.2d AM\n",
                        dt % 60, at / 60, at % 60);
        } else if (at < 780) {
            printf("Closest departure time is 12:%.2d PM, arriving at 12:%.2d PM\n",
                        dt % 60, at % 60);
        } else {
            printf("Closest departure time is 12:%.2d PM, arriving at %.2d:%.2d PM\n",
                        dt % 60, at / 60 - 12, at % 60);
        }
    } else {
        if (at < 60) {
            printf("Closest departure time is %.2d:%.2d PM, arriving at 12:%.2d AM\n",
                        dt / 60 - 12, dt % 60, at % 60);
        } else if (at < 720) {
            printf("Closest departure time is %.2d:%.2d PM, arriving at %.2d:%.2d AM\n",
                        dt / 60 - 12, dt % 60, at / 60, at % 60);
        } else if (at < 780) {
            printf("Closest departure time is %.2d:%.2d PM, arriving at 12:%.2d PM\n",
                        dt / 60 - 12, dt % 60, at % 60);
        } else {
            printf("Closest departure time is %.2d:%.2d PM, arriving at %.2d:%.2d PM\n",
                        dt / 60 - 12, dt % 60, at / 60 - 12, at % 60);
        }
    }

    return 0;
}
