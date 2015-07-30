/**
   
   @file
   max_element_test.cpp

   @brief
   Test for the range based max_element function.

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
  {
    std::vector<int> x = { 1, 2, 3, 4 };

    std::random_shuffle( begin( x ), end( x ));
    auto it = range::max_element( x );

    COMBINE_TEST_EQUAL( *it, 4 );
  }

  {

    std::vector<int> x = { 1, 2, 3, 4 };

    std::random_shuffle( begin( x ), end( x ));
    auto it = range::max_element( x, []( auto a, auto b ){ return a < b; });

    COMBINE_TEST_EQUAL( *it, 4 );
  }
  
  return 0;
  
} 
