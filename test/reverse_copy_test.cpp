/**

   @file
   reverse_copy_test.cpp

   @brief
   Test the range based reverse_copy function.

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
  std::vector< int > y;
  range::reverse_copy( x, std::back_inserter( y ));

  std::vector< int > yexpected = { 4, 3, 2, 1 };

  COMBINE_TEST_EQUAL( y.size(), yexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));

  
  
  return 0;
}


