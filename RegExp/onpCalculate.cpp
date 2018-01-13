#include "onpCalculate.h"

onpCalculate::onpCalculate()
{
}
std::string onpCalculate::calculate(std::string elementsOfEquation)
{
   std::cout << "elementsOfEquation: " << elementsOfEquation << std::endl;
   for(int i = 0; i < elementsOfEquation.length() ; i++)
   {
      std::cout << "i: " << i << " | length: " << elementsOfEquation.length() << std::endl;
      if(!temporaryElements.empty() && isspace(elementsOfEquation[i]))
      {
         std::cout << "if | temporaryElements: " << temporaryElements << std::endl;
         double a = ::atof(temporaryElements.c_str());
         stackOfElements.push(a);
         std::cout << "stack: " << stackOfElements.top() << std::endl;
         temporaryElements.clear();
      }
      else if(elementsOfEquation.at(i)=='+'||
              elementsOfEquation.at(i)=='-'||
              elementsOfEquation.at(i)=='*'||
              elementsOfEquation.at(i)=='/')
      {
          std::cout << "znak" << std::endl;
          element2 = stackOfElements.top();
          std::cout << "element2: " << element2 << std::endl;
          stackOfElements.pop();
          element1 = stackOfElements.top();
          std::cout << "element1: " << element1 << std::endl;
          stackOfElements.pop();
          switch(elementsOfEquation[i])
                      {
                          case '+' : element1 += element2; break;
                          case '-' : element1 -= element2; break;
                          case '*' : element1 *= element2; break;
                          case '/' : element1 /= element2; break;
                      }
                      stackOfElements.push(element1);
                      std::cout << "stack's top: " << stackOfElements.top() << std::endl;
      }
      else
      {
          std::cout << "else" << std::endl;
          temporaryElements += elementsOfEquation[i];
      }
   }

   expression = std::to_string(stackOfElements.top());
   return expression;
}


