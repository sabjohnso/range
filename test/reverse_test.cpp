/**

   @file
   reverse_test.cpp

   @brief
   Test the range based reverse function.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

*/

// Standard header files

#include <vector>


// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>


int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 4 };
  range::reverse( x );

  std::vector< int > xexpected = { 4, 3, 2, 1 };

  COMBINE_TEST_EQUAL( x.size(), xexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));

  
  
  return 0;
}


