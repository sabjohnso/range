/**
   @file
   equal_test.cpp

   @brief
   A test for the range based equal function.

   @copyright
   2015 Samuel B. Johnson

   @author
   Samuel B. Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <algorithm>
#include <utility>
#include <iterator>
#include <vector>
#include <list>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  
  std::vector< int > x = { 1, 2, 3, 4, 5 };
  {
    std::list< int > y = { 1, 2, 3, 4, 5 };
    COMBINE_TEST_TRUE( range::equal( x, y ));
    
  }
  
  {
    std::list< int > y = { 1, 2, 3, 4, 5 };
    COMBINE_TEST_TRUE( range::equal( x, y, []( auto a, auto b ){ return a == b; }));
  }
  
  {
    std::list< int > y = { 5, 4, 3, 2, 1 };
    COMBINE_TEST_FALSE( range::equal( x, y ));
  }

  {
    std::list< int > y = { 5, 4, 3, 2, 1 };
    COMBINE_TEST_FALSE( range::equal( x, y, []( auto a, auto b ){ return a == b; }));
  }

  
  
  return 0;
  
}
