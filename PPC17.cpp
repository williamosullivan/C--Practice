#include <iostream>
#include "PPC17.h"

using namespace std;

double quotient( int numerator, int denominator )
{
   if ( denominator == 0 | numerator == 0 )
      throw DivideByZeroException();

   else if ( numerator == denominator )
	   throw AnswerIsOneException();

   return static_cast< double >( numerator ) / denominator;
} 

int main()
{
   int number1;
   int number2;

   cout << "Enter two integers (end-of-file to end): ";

   while ( cin >> number1 >> number2 ) 
   {

      try 
      {
         double result = quotient( number1, number2 );
         cout << "The quotient is: " << result << endl;
      } 

	  catch ( AnswerIsOneException &answerIsOneException )
	  {
		  cout << "Exception occured: " <<
			  answerIsOneException.what() << endl;
	  }
      catch ( DivideByZeroException &divideByZeroException ) 
      {
         cout << "Exception occurred: " 
            << divideByZeroException.what() << endl;
      }

      cout << "\nEnter two integers (end-of-file to end): ";
   }

   cout << endl;
}


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
