#include "C:\Users\user\Desktop\Aisd_lab\Aisd_1\include\matrix.h"




int main()
{ // Пример использования

    Matrix<double> mat(3, 3, 0);
    mat(0, 0) = 2;
    mat(0, 1) = 4;
    mat(0, 2) = 5;
    mat(1, 0) = 3;
    mat(1, 1) = -1;
    mat(1, 2) = 2;
    mat(2, 0) = -4;
    mat(2, 1) = 1;
    mat(2, 2) = 1;

    std::cout << "Matrix A:\n";
    mat.Print();
    std::cout << std::endl;

    
    std::cout << "Inverse of Matrix A: \n" ;
    Matrix inv_m = inverse(mat);
    inv_m.Print();
    
    inv_m = inv_m / 55;
    std::cout << "Inverse of Matrix A: \n";
    (inv_m * mat * 55).Print();
    

    return 0;
}