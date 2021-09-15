/* github.com/atom1488 */

int main() {
    int h, m, s;
    int d = 1; // delay of 1s
    printf("Set time (hour, minute, seconds) : \n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 24 || m > 60 || s > 60)
    {
        printf("error\n");
        exit(0);
    }
    while(1)
    {
        printf("\nClock:");
        printf("\n%02d:%02d:%02d", h, m, s); // write time in 00:00:00 format
        s++; //increment second int every second...
        if (s>59)
        {
            s=0;
            m++; // when second is 60, it puts second to 0 and add 1 min
        }
        if (m>59)
        {
            m=0;
            h++; //same as before but with hour
        }
        if (h>24)
        {
            h=1; // when hour is 24, it put it back to 0
        }
        printf("\n Clock :");
        printf("%02d:%02d:%02d", h, m, s); // write time in 00:00:00 format
        sleep(d); // sleep is too slow down the while loop (execute while loop every second)
        printf("\e[1;1H\e[2J"); //regex to clear console
    }
}
