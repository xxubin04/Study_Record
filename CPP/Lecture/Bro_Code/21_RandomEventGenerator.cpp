#include <iostream>
#include <ctime>

int main() 
{
    srand(time(0));  // uses the current time to generate random numbers
    int randNum = rand() % 5 + 1;  // generates from 1 to 5

    switch (randNum) {
        case 1: std::cout << "You win a bumper sticker!\n";
                break;
        case 2: std::cout << "You win a t-shirt!\n";
                break;
        case 3: std::cout << "You win a free lunch!\n";
                break;
        case 4: std::cout << "You win a gift card!\n";
                break;
        case 5: std::cout << "You win concert tickets!\n";
                break;

        return 0;
    }

}