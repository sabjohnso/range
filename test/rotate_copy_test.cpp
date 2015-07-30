/**

   @file
   rotate_copy_test.cpp

   @brief
   Test the range based rotate_copy function.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <vector>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  
  {  
    std::vector<int> x = { 1, 2, 3, 4 };
    std::vector< int > y;
    range::rotate_copy( x, 0, std::back_inserter( y ));
    std::vector<int> yexpected = { 1, 2, 3, 4 };
    COMBINE_TEST_EQUAL( y.size(), yexpected.size() );
    COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));
  }

  
  {
    std::vector<int> x = {1, 2, 3, 4 };
    std::vector<int> y;
    range::rotate_copy( x, 1, std::back_inserter( y ));
    std::vector<int> yexpected = { 2, 3, 4, 1 };
    COMBINE_TEST_EQUAL( y.size(), yexpected.size() );
    COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));
  }

  
  return 0;
  
}
