#include <stdio.h>

void timeConversion(char s[]) {
    int hh, mm, ss;
    char ampm[3];

    // Extract the components of the time string directly
    sscanf(s, "%d:%d:%d%s", &hh, &mm, &ss, ampm);

    // Convert to 24-hour format
    if (ampm[0] == 'P' && hh != 12) {
        hh += 12;
    } else if (ampm[0] == 'A' && hh == 12) {
        hh = 0;
    }

    printf("%02d:%02d:%02d\n", hh, mm, ss);
}

int main() {
    char s[11];  // Assuming the input time format is hh:mm:ssAM or hh:mm:ssPM
    scanf("%s", s);

    timeConversion(s);

    return 0;
}

