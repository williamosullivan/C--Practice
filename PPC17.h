#include <stdexcept>
using namespace std;

class DivideByZeroException : public runtime_error 
{
public:
   DivideByZeroException()
      : runtime_error( "attempted to divide by zero" ) {}
};
class AnswerIsOneException : public runtime_error
{
public:
   AnswerIsOneException()
	   : runtime_error( "can not divide same integers" ) {}
};