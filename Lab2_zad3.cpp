/*Palindrome => left=right: ALA, LEVEL OKO ,1221*/

//START

#include <iostream>     
#include <string>       
#include <algorithm>    // std::reverse()

int main()
{
    std::string text{};    //user

    std::cout << "Pleas write the text: "; 
    

    std::getline(std::cin, text);  //text + spaces
    

  
    // 1) PALINDROME - manual version


    bool PALINDROME_manual = true; //bool = true or false  
    // palindrom START
    // the loop overthrows (obala) the Palindrome

    // We don't need the whole text because half is enough
    for (std::size_t i = 0; i < text.size() / 2; i++) {

        // right = left?
        if (text[i] != text[text.size() - 1 - i]) {

            PALINDROME_manual = false;   
            break;                       
        }
    }

    // wypisujemy wynik dla ręcznego sprawdzania
    if (PALINDROME_manual) {
        std::cout << "Manual: The text:\""
        << text
        << "\" is a palindrome \n";
    } else {
        std::cout << "Manual: The text: \"" 
        << text
        << "\" is NOT a palindrome\n";
    }
   
    // 2) PALINDROME - using std::reverse()
  

    std::string reversed = text; //A<>D D<>A Copy of text 
    

    std::reverse(reversed.begin(), reversed.end());
    // reverse the string in place ALA A=A

    bool palindrome_reverse = (text == reversed);
    // palindrome ↔ oryginal == reverseed

    
    if (palindrome_reverse) {
        std::cout << "reverse(): \""
        << text
        << "\" is a palindrome.\n";
    } else {
        std::cout << "reverse(): \""
        << text
        << "\" is NOT a palindrome.\n";
    }

    return 0;  
}