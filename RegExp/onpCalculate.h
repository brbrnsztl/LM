#ifndef REGEXP_H
#define REGEXP_H
#include "iostream"
#include "QString"
#include <string>
#include "QDebug"
#include "QMessageBox"
#include "QStack"
#include <sstream>
#include <cstdlib>
#include <cctype>

class onpCalculate
{
public:
    onpCalculate();
    std::string calculate(std::string text);
    std::string expression = "a";
    QStack <double> stackOfElements;
    std::string elementsOfEquation;
    double element1;
    double element2;
    std::stringstream stringOfEquation;
    std::string temporaryElements;
};

#endif // REGEXP_H
