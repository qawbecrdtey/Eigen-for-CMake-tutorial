#include <iostream>
#include <Eigen/Dense>

int main()
{
	Eigen::MatrixXd m(2, 2);
	Eigen::VectorXd v(2);
	m(0, 0) = 1;
	m(0, 1) = 2;
	m(1, 0) = 3;
	m(1, 1) = 4;
	v(0) = 3;
	v(1) = -1;
	std::cout << m * v << std::endl;
}