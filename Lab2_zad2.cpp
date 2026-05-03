#include <iostream>    
#include <string>      // std::string
#include <algorithm>   // std::reverse() - faster A B C D = A<>D, D<>A

int main()
{
    std::string text{};  // string variable (empty)

    std::cout << "Pleas write something: ";  

    std::getline(std::cin, text);  // full text + spaces

    
    // 1) MANUAL REVERSAL - the "na piechotę" method
   

    std::string MANUAL_REVERSAL{};  
    // variable, where the reversed text

    // the loop starts from the last '..' (text.size()- 1) and ends at 0
    for (int i = text.size() - 1; i >= 0; i--) {
        MANUAL_REVERSAL += text[i];  
        // add from the end
    }

    std::cout << "manual reversal: " << MANUAL_REVERSAL << "\n";
   

    // 2) REVERSE WITH - std::reverse()

    /*a)Takes the first character (begin())
    b)Takes the last character (end() - 1)
    c)Swaps them
    d)Moves to the center and repeats*/
  

    std::string aut_reversed = text;
    // copy oryginal text, for not change start

    std::reverse(aut_reversed.begin(), aut_reversed.end());
    // one row can inverting the entire string 

    std::cout << "reversed reverse(): " << aut_reversed << "\n";

    return 0;  
}