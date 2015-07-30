/** 
    @file
    find_if_not_test.cpp

    @brief
    A test for the range based find_if_not function.

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
  std::vector< int > x = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
  for( int i = 0; i < x.size(); ++i ){
    auto it = range::find_if_not( x, [=]( int arg ){ return i > arg; });
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), i );
  }
  
  auto it = range::find_if_not( x, [=]( int arg ){ return 10 > arg; });
  COMBINE_TEST_EQUAL( std::distance( end( x ), it ), 0 );
  
  return 0;
}
