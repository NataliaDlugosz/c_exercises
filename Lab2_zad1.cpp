#include <iostream>   // std::cout, std::cin
#include <vector>     // std::vector
#include <cstdlib>    // rand(), srand()
#include <ctime>      // time(NULL) - without it the matrix is ​​the same


/*The function of sum: even (p) columns or odd (np) rows  */

int CountingTheSum(const std::vector<std::vector<int>>& A) /*vector of vector, A - mother */
{
    int sum = 0;

    // A.size() - number of rows (w)
    for (std::size_t w = 0; w < A.size(); w++) {

     // A[w].size() -number of columns in row
        for (std::size_t k = 0; k < A[w].size(); k++) {

            
    // even column or odd row, % - the rest from division 3:2 .. =1r
            if (k % 2 == 0 || w % 2 == 1) {
                sum += A[w][k];    
            }
        }
    }

    return sum;   //sum syntax
}

int main()
{
    std::srand(std::time(NULL));   // random number (library)

    int w_row{};
    int k_column{};

    // data from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> w_row;

    std::cout << "Enter the number of columns: ";
    std::cin >> k_column;

    // creating a matrix of size
    std::vector<std::vector<int>> A(w_row, std::vector<int>(k_column));

    //  0-9
    for (int w = 0; w < w_row; w++) {
        for (int k = 0; k < k_column; k++) {
            A[w][k] = std::rand() % 10;
        }
    }

    // display A
    std::cout << "\nMother:\n";
    for (int w = 0; w < w_row; w++) {
        for (int k = 0; k < k_column; k++) {
            std::cout << A[w][k] << " ";
        }
        std::cout << "\n";
    }

    // We calculate the sum by calling the function
    int result = CountingTheSum(A);

    std::cout << "\nSum of elements = " << result << "\n";

    return 0;
}