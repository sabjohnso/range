/**

   @file
   any_of_test.cpp
  
   @brief
   Test the range based any_of function.
   
   @copyright
   2015 Samuel B. Johnson

   @author
   Samuel Johnson <sabjohnso@yahoo.com>

*/

// Standard header files

#include <array>
#include <list>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>




int
main( int argc, char** argv )
{

  std::array< int, 8 > x = { 3, 5,7,11,13,17,19,23 };

  COMBINE_TEST_TRUE( range::any_of( x, []( int i ){ return i%2 == 1; }));
  COMBINE_TEST_FALSE( range::any_of( x, []( int i ){ return i%2 == 0; }));

  std::list< int > y = { 3, 5, 7, 11, 13, 17, 19, 23, 24 };

  COMBINE_TEST_TRUE( range::any_of( y, []( int i ){ return i%2 == 1; }));
  
  return 0;
}


