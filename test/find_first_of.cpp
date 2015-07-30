/** 
    @file
    find_first_of.cpp

    @brief
    A test for the range based find_first_of function.

    @copyright
    2015 Samuel B. Johnson

    @author
    Samuel B. Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <iterator>
#include <vector>
#include <array>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>




int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 4, 1, 2, 3, 4, 5, 6, 7, 8 };
  std::array< int, 3 > y = { 5, 4, 3 };
  auto it = range::find_first_of( x, y );
  COMBINE_TEST_EQUAL( std::distance( begin( x ), it), 2 );

  
  return 0;
}
