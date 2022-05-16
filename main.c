#include <stdio.h>

int main() {
    int chose;
    printf("Chose option:\n1 Sec to min \n2 Sec to hour \n3 Min to sec \n4 Min to hours \n5 Hours to min \n6 Hours to sec\n");
    scanf("%d", &chose);
    if (chose == 1) {
        float secAmount;
        printf("Type second amount: \n");
        scanf("%f", &secAmount);
        printf("%f", secAmount / 60);
    } else if (chose == 2) {
        float secAmount1;
        printf("Type sec amount: \n");
        scanf("%f", &secAmount1);
        printf("%f", secAmount1 / 3600);
    } else if (chose == 3) {
        float minAmount;
        printf("Type min amount: \n");
        scanf("%f", &minAmount);
        printf("%f", minAmount * 60);
    } else if (chose == 4) {
        float minAmount1;
        printf("%f", "Type min amount: \n");
        scanf("%f", &minAmount1);
        printf("%f", minAmount1 / 60);
    } else if (chose == 5) {
        float hourAmount;
        printf("Type hour amount: \n");
        scanf("%f", &hourAmount);
        printf("%f", hourAmount * 60);
    } else if (chose == 6) {
        float hourAmount1;
        printf("Type hour amount: \n");
        scanf("%f", &hourAmount1);
        printf("%f", hourAmount1 * 3600);
    }
    return 0;
}
