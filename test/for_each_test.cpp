/** 
    @file
    for_each_test.cpp

    @brief
    A test for the range based for_each function.

    @copyright
    2015 Samuel B. Johnson

    @author
    Samuel B. Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <array>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>




int
main( int argc, char** argv )
{

  {
    std::array< int, 9 > x = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
    range::for_each( x, []( int& i ){ i = i*i;});

    for( int i = 0; i < x.size(); ++i ){
      COMBINE_TEST_EQUAL( x[ i ], i*i );
    }
    
  }
  return 0;
}
    
