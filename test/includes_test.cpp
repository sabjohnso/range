/**
   
   @file
   includes_test.cpp

   @brief
   Test the range based includes function.

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

  std::vector<int> x = { 1, 2, 3, 4, 5, 6 };
  std::vector<int> y = { 3, 4 };
  std::vector<int> z = { 7, 8 };

  COMBINE_TEST_TRUE( range::includes( x, y ));
  COMBINE_TEST_FALSE( range::includes( x, z ));
  COMBINE_TEST_TRUE( range::includes( x, y, []( auto a, auto b ){ return a < b; }));
  COMBINE_TEST_FALSE( range::includes( x, z, []( auto a, auto b ){ return a < b; }));
  
  
  
  return 0;
  
}
 
