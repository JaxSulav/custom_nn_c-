#pragma once

#include <iostream>
#include <vector>

class Matrix
{
public:
    Matrix(int rows, int cols, bool setRandom);
    ~Matrix();

public:
    // Pointer to Matrix, transpose function
    Matrix *transpose();

    void print_matrix();

public:
    // Setters
    void setValue(int row, int col, double val) { this->matrixVals.at(row).at(col) = val;}

    // Getters
    double getValue(int row, int col) {return this->matrixVals.at(row).at(col);}
    int getRows() {return this->rows;}
    int getCols() {return this->cols;}
    
private:
    Matrix *m;
    std::vector<std::vector<double>> matrixVals;

    int rows;
    int cols;
    
};
