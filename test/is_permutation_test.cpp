/** 
    @file
    test/is_permutation_test.cpp

    @brief
    A test for the range based find function.

    @copyright
    2015 Samuel B. Johnson

    @author
    Samuel B. Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <algorithm>
#include <iterator>
#include <vector>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>




int
main( int argc, char** argv )
{
  const std::vector< int > x = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
  const std::vector< int > y = { 0, 1, 2, 3, 4, 5, 6, 8, 7 };
  COMBINE_TEST_TRUE( range::is_permutation( x, y ));
  COMBINE_TEST_TRUE( range::is_permutation( x, y, []( auto x, auto y ){ return x == y; }));

  
  return 0;
}




