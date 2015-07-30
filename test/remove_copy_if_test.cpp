/**

   @file
   remove_copy_if_test.cpp
   
   @brief
   Test the range based remove_copy_if function.

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel B. Johnson <sabjohnso@yahoo.com>

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
  std::vector< int > x = { 1, 2, 3, 4, 5 };

  // Don't remove any elements
  {
    std::vector< int > y;
    auto it = range::remove_copy_if( x, std::back_inserter( y ), []( auto a ){ return a == 6; });
    COMBINE_TEST_EQUAL( x.size(), y.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( y )));
  }

  // Remove the second element
  {
    std::vector< int > y;
    auto it = range::remove_copy_if( x, std::back_inserter( y ),  []( auto a ) { return a == 2; });
    COMBINE_TEST_EQUAL( y.size(), 4 );
    std::vector< int > yexpected = { 1, 3, 4, 5 };
    COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));
  }
  return 0;
};
