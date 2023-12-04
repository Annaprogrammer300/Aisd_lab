#include "C:\Users\user\Desktop\Aisd_lab\Aisd_1\include\matrix.h"




int main()
{ // Пример использования

    Matrix<double> mat(3, 3, 1, 5);

    std::cout << "Matrix A:\n";
    mat.Print();
    std::cout << std::endl;

    try {
        std::cout << "Inverse of Matrix A: \n" ;
		
        inverse(mat).Print();
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}