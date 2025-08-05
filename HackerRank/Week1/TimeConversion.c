#include<stdio.h>
#include<string.h>
void timeConversion(char* s) {
    int hour;
    char ampm[3];
    sscanf(s, "%2d:%*d:%*d%2s", &hour, ampm);

    if (strcmp(ampm, "AM") ==0 && hour ==12){
        hour = 0;
    } else if (strcmp(ampm, "PM") == 0 && hour!= 12){
        hour +=12;
    }
    s[8] = '\0';
    printf("Converted 24-hour time: %02d%s\n", hour, s+2);
}

int main(){
    char timeStr[] = "07:05:45PM";
    printf("Original 12-hour format: %s\n", timeStr);
    timeConversion(timeStr);
    return 0;
}
