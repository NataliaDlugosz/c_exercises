//mark = znak, question for teacher why not?: register=licznik, meter licznik

/*std::tolower() causes the program to always compare LOWER case letters. 
If user use K or k its olways be the same */

//START

#include <iostream>   
#include <string>     // std::string, std::getline
#include <cctype>     // std::tolower(), std::toupper(), std::islower(), std::isupper()

int main()
{
    // 1) User

    std::string sentence{};   //variable that stores the entire sentence

    std::cout << "Pleas write the sentence: ";

    std::getline(std::cin, sentence); //getline for spaces
    
    // 2) Loading a single mark
  

    char mark{};    // The mark that will be counted

    std::cout << "Pleas enter a single mark: ";
    std::cin >> mark;   // (np. 'a', 'b', 'X')


   
    // 3) how many- case insensitive
   

    int meter = 0;    // how many

    //A =a 
    char small_sign = static_cast<char>(std::tolower(mark));

    // whole characters in a sentence
    for (char c : sentence) {

        // A=a
        char c_small = static_cast<char>(std::tolower(c));

        // if lowercase letters are equal → we add 1 to the counter
        if (c_small == small_sign) {
            meter++;
        }
    }


    
    // 4) Result


    std::cout << "Mark '" << mark << "' (ignoring case like A,B,C) "
              << "appears in the given sentence " 
              << meter << " times.\n";

    return 0;   
}