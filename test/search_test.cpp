/** 
    @file
    test/search_test.cpp

    @brief
    A test for the range based search function.

    @copyright
    2015 Samuel B. Johnson

    @author
    Samuel B. Johnson <sabjohnso@yahoo.com>

*/

// Standard header files


// Third-party header files

#include <combine/macro_tools.hpp>


// range header files

#include <range/range.hpp>


int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 1, 2 };

  // search should not find the sequence 9,10 in x and should return an iterator to
  // the end of x: end( x )
  {
    std::vector< int > y = { 9, 10 };
    COMBINE_TEST_EQUAL( std::distance( end( x ), range::search( x, y )), 0 );
  }

  // search should return an iterator to the first occurance of 1, 2 which is at
  // the begining of x: begin( x )
  {
    std::vector< int > y = { 1, 2 };
    COMBINE_TEST_EQUAL( std::distance( begin( x ), range::search( x, y )), 0 );
  }
  
  return 0;
  
}
