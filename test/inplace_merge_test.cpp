/**
   
   @file
   inplace_merge_test.cpp

   @brief
   Test the range based inplace_merge function.

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

  std::vector<int> x = { 1, 2, 4, 3, 5, 6 };
  range::inplace_merge( x, 3 );

  std::vector<int> xexpected = { 1, 2, 3, 4, 5, 6 };
  
  COMBINE_TEST_EQUAL( x.size(), xexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));

 

  
  return 0;
  
} 
 
