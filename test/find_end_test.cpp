/** 
    @file
    find_end_test.cpp

    @brief
    A test for the range based find_end function.

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
  {
    std::array< int, 4> patt = {1, 2, 3, 4};
    auto it = range::find_end( x, patt );
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 4 );
  }
  {
    std::array< int, 4> patt = {0, 0, 0, 0};
    auto it = range::find_end( x, patt );
    COMBINE_TEST_EQUAL( std::distance( end( x ), it ), 0 );
  }
  

  
  return 0;
}
