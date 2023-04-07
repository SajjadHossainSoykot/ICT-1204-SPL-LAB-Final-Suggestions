#include <stdio.h>
struct time_struct {
    int hour;
    int minute;
    int second;
};
int main() {
    struct time_struct t;
    printf("Enter the hour: ");
    scanf("%d", &t.hour);
    printf("Enter the minute: ");
    scanf("%d", &t.minute);
    printf("Enter the second: ");
    scanf("%d", &t.second);
    printf("Time: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
    return 0;
}
