/**
   
   @file
   is_sorted_until_test.cpp

   @brief
   Test the range based is_sorted_until function.

   @copyright	
   2015 Samuel B. Johnsonn

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

 */


// Standard header files

#include <algorithm>
#include <vector>
#include <iterator>


// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  
  std::vector<int> x = { 1, 2, 5, 4, 3 };
  auto it = range::is_sorted_until( x );
  COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 3 );

  std::vector<int> xexpected = { 1, 2, 5, 4, 3 };
  COMBINE_TEST_EQUAL( x.size(), xexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));

  
  
  
  return 0;
  
}
