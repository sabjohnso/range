/**
   
   @file
   copy_backward_test.cpp

   @brief
   Test the range based copy_backward algorithm

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel B. Johnson <sabjohnso@yahoo.com>

*/

// Standard header files

#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  
  std::vector< int > x = { 1, 2, 3, 4, 5, 6 };
  std::vector< int > y( x.size());

  auto it = range::copy_backward( x, end( y ));
  
  COMBINE_TEST_EQUAL( std::distance( begin( y ), it ), 0 );
  COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( y )));
  
  return 0;
}
