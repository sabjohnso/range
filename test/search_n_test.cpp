/** 
    @file
    test/search_test.cpp

    @brief
    A test for the range based search_n function.

    @copyright
    2015 Samuel B. Johnson

    @author
    Samuel B. Johnson <sabjohnso@yahoo.com>

*/

// Standard header files

#include <vector>
#include <iterator>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  
  std::vector< int > x = { 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 1 };
  COMBINE_TEST_EQUAL( std::distance( end( x ), range::search_n( x, 5, 1 )), 0 );
  COMBINE_TEST_EQUAL( std::distance( begin( x ), range::search_n( x, 2, 1 )), 0 );
  COMBINE_TEST_EQUAL( std::distance( begin( x ), range::search_n( x, 3, 1 )), 3 );
  COMBINE_TEST_EQUAL( std::distance( begin( x ), range::search_n( x, 4, 1 )), 7 );
  COMBINE_TEST_EQUAL( std::distance( begin( x ), range::search_n( x, 2, 1, []( auto i, auto j ){ return i == j; })), 0);
  
  return 0;
  
}
