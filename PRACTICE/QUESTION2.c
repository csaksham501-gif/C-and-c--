#include <stdio.h>

// Function to convert a date into total days from year 0 using a standard calendar
long dateToDays(int day, int month, int year) {
    // Days in months for a non-leap year
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust February for leap years
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[2] = 29;
    }

    long total = year * 365 + day;
    
    // Add days for preceding months in the current year
    for (int i = 1; i < month; i++) {
        total += daysInMonth[i];
    }
    
    // Add leap days for previous years
    total += (year / 4) - (year / 100) + (year / 400);

    return total;
}

int main() {
    int studentID;
    int issue_day, issue_month, issue_year;
    int return_day, return_month, return_year;
    int total_days, days_late;
    int fine;

    printf("Enter Student ID: ");
    scanf("%d", &studentID);

    printf("Enter issue date (day month year): ");
    scanf("%d %d %d", &issue_day, &issue_month, &issue_year);

    printf("Enter return date (day month year): ");
    scanf("%d %d %d", &return_day, &return_month, &return_year);

    // Calculate actual difference in days
    total_days = dateToDays(return_day, return_month, return_year) - 
                 dateToDays(issue_day, issue_month, issue_year);

    if (total_days < 0) {
        printf("Invalid input: Return date cannot be before Issue date.\n");
    } 
    else if (total_days <= 7) {
        printf("Student ID: %d\nNO FINE, THANK YOU!\n", studentID);
    } 
    else if (total_days <= 15) {
        days_late = total_days - 7;
        fine = 5 * days_late;
        printf("Student ID: %d\nFine: Rs %d\n", studentID, fine);
    } 
    else {
        printf("Student ID: %d\nMembership cancelled due to late return.\n", studentID);
    }

    return 0;
}