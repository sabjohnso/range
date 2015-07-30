/**

   @file
   rotate_test.cpp

   @brief
   Test the range based rotate function.

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
  
  {  
    std::vector<int> x = { 1, 2, 3, 4 };
    range::rotate( x, 0 );
    std::vector<int> xexpected = { 1, 2, 3, 4 };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size() );
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));
  }

  
  {
    std::vector<int> x = {1, 2, 3, 4 };
    range::rotate( x, 1 );
    std::vector<int> xexpected = { 2, 3, 4, 1 };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size() );
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));
  }

  
  return 0;
}
