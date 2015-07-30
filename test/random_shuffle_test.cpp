/**

   @file
   random_shuffle_test.cpp

   @brief
   Test the range based random_shuffle function.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <random>
#include <vector>
#include <iterator>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{

  {
    std::default_random_engine engine;
  
    std::vector<int> x = { 1, 2, 3, 4 };
    range::random_shuffle( x, [&]( auto i ){ return std::uniform_int_distribution< decltype( i ) >( 0, i-1 )( engine ); });

    std::vector<int> y = { 1, 2, 3, 4 };
    std::is_permutation( begin( x ), end( x ), begin( y ));
  }


  {
    std::vector<int> x = { 1, 2, 3, 4 };
    range::random_shuffle( x );

    std::vector<int> y = { 1, 2, 3, 4 };
    std::is_permutation( begin( x ), end( x ), begin( y ));
  }
  
    
  return 0;
  
}

