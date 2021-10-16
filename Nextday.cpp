#include <stdio.h>
#include<ctype.h>

typedef enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec } month;
typedef struct date { enum month m; int d; int y; } date;

static const char * const month_name[] = {
    "January",  "February", "March",
    "April",    "May",      "June",
    "July",     "August",   "September",
    "October",  "November", "December",
};

void print_month(struct date date) 
{ //simple function for displaying month and day
    switch (date.m) 
    {
      case jan:
      case feb:
      case mar:
      case apr:
      case may:
      case jun:
      case jul:
      case aug:
      case sep:
      case oct:
      case nov:
      case dec:
        printf("%s %d, %d\n", month_name[date.m], date.d, date.y);
          break;
      default:
        printf("Out of range!\n");
        break;
    }
}

date next_day(struct date next) { //next month|day function which is the problem.
    int last_day;
    switch (next.m) {
      case jan:
      case mar:
      case may:
      case jul:
      case aug:
      case oct:
      case dec:
        last_day = 31;
        break;
      case apr:
      case jun:
      case sep:
      case nov:
        last_day = 30;
        break;
      case feb:
        // see https://stackoverflow.com/questions/3220163/how-to-find-leap-year-programmatically-in-c
        if (next.y % 4 == 0 && (next.y % 100 != 0 || next.y % 400 == 0))
            last_day = 29;
        else
            last_day = 28;
        break;
      default:
        return next;
    }
    if (next.d++ == last_day) {
        next.d = 1;
        if (next.m++ == dec) {
            next.m = jan;
            next.y++;
        }
    }
    return next;
}

int main() {
    struct date date_1 = { feb, 28, 2020 };
    struct date date_2 = { mar, 14, 2020 };
    struct date date_3 = { oct, 31, 2020 };
    struct date date_4 = { dec, 31, 2020 };
    struct date date_5 = { feb, 28, 2021 };

    print_month(date_1);  // see https://stackoverflow.com/questions/3220163/how-to-find-leap-year-programmatically-in-c
        if (next.y % 4 == 0 && (next.y % 100 != 0 || next.y % 400 == 0))
            last_day = 29;
        else
            last_day = 28;
        break;
      default:
        return next;
    }
    if (next.d++ == last_day) {
        next.d = 1;
        if (next.m++ == dec) {
            next.m = jan;
            next.y++;
        }
    }
    return next;
}

int main() {
    struct date date_1 = { feb, 28, 2020 };
    struct date date_2 = { mar, 14, 2020 };
    struct date date_3 = { oct, 31, 2020 };
    struct date date_4 = { dec, 31, 2020 };
    struct date date_5 = { feb, 28, 2021 };

    print_month(date_1);
      print_month(date_2);
    print_month(date_3);
    print_month(date_4);
    print_month(date_5);
    printf("\n");

    print_month(next_day(date_1));
    print_month(next_day(date_2));
    print_month(next_day(date_3));
    print_month(next_day(date_4));
    print_month(next_day(date_5));
    printf("\n\n");

    return 0;
}