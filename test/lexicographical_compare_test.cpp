/**
   
   @file
   lexicographical_compare_test.cpp

   @brief
   Test for the range based lexicographical_compare function.

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <vector>
#include <iterator>
#include <algorithm>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>

   
   
int
main( int argc, char** argv )
{
  std::vector<int> x = { 1, 2, 3, 4 };
  std::vector<int> y = { 1, 2, 4, 3 };
    
  COMBINE_TEST_TRUE( range::lexicographical_compare( x, y ));
  COMBINE_TEST_TRUE( range::lexicographical_compare( x, y, []( auto a, auto b ){ return a < b; }));

  return 0;
  
} 
