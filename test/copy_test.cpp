/**
   
   @file
   copy_test.cpp

   @brief
   Test the range based copy algorithm

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel B. Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <vector>
#include <iterator>


// Third-party header files

#include <combine/macro_tools.hpp>


// range header files

#include <range/range.hpp>




int main ()
{

  {
    std::vector<int> x = { 10, 20, 30, 40, 50, 60, 70 };
    std::vector<int> y;
    
    range::copy( x, std::back_inserter( y ));

    COMBINE_TEST_EQUAL( x.size(), y.size());

    auto itx = begin( x );
    auto lastx = end( x );
    auto ity = begin( y );
    auto lasty = end( y );
  
    while( itx != lastx && ity != lasty )
    {
      COMBINE_TEST_EQUAL( *itx, *ity );
      ++itx;
      ++ity;
    }
  }


  {
    const std::vector<int> x = { 10, 20, 30, 40, 50, 60, 70 };
    std::vector<int> y;
    
    range::copy( x, std::back_inserter( y ));

    COMBINE_TEST_EQUAL( x.size(), y.size());

    auto itx = begin( x );
    auto lastx = end( x );
    auto ity = begin( y );
    auto lasty = end( y );
  
    while( itx != lastx && ity != lasty )
    {
      COMBINE_TEST_EQUAL( *itx, *ity );
      ++itx;
      ++ity;
    }
  }

  return 0;
  
}
