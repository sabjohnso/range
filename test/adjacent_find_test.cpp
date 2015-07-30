/**
   @file
   adjacent_find_test.cpp

   @brief
   A test for the range based adjacent find function.

   @copyright
   2015 Samuel B. Johnson

   @author
   Samuel B. Johnson <sabjohnso@yahoo.com>
*/


// Standard header files

#include <iterator>
#include <vector>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 4, 5, 5, 6, 7 };
  {
    auto it = range::adjacent_find( x );
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 4 );
  }

  {
    auto it = range::adjacent_find( x, []( int a, int b ){ return ( a%2 ) == ( b%2 ); });
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 4 );
  }

  {
    auto it  = range::adjacent_find( x, []( int a, int b ){ return false; });
    COMBINE_TEST_EQUAL( std::distance( end( x ), it ), 0 );
  }
  
  return 0;
}
