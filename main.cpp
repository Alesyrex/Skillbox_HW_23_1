#include <iostream>

#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"


int main() {
    int numberWeek;

    do {
        std::cout << "Enter the day of the week:" << std::endl;
        std::cin >> numberWeek;
    } while (numberWeek < 1 || numberWeek > 7);

    if (numberWeek == 1) {
        std::cout << DAY_1 << std::endl;
    } else if (numberWeek == 2){
        std::cout << DAY_2 << std::endl;
    } else if (numberWeek == 3){
        std::cout << DAY_3 << std::endl;
    } else if (numberWeek == 4){
        std::cout << DAY_4 << std::endl;
    } else if (numberWeek == 5){
        std::cout << DAY_5 << std::endl;
    } else if (numberWeek == 6){
        std::cout << DAY_6 << std::endl;
    } else if (numberWeek == 7){
        std::cout << DAY_7 << std::endl;
    }
    
    return 0;
}
