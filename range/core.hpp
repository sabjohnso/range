/**
   @file
   core.hpp

   @brief
   Transform the wrapped functions to struct with call operators accepting
   range arguments.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

*/


#ifndef CORE_HPP_INCLUDED
#define CORE_HPP_INCLUDED

#include <range/wrap.hpp>


namespace range
{
  namespace core
  {


    template< typename Function >
    struct ii
    {
      template< typename Range, typename ... Xs >
      auto
      operator ()(  Range&& rng, Xs&& ... xs )
      {
	return Function{}( begin( std::forward<Range>( rng )), end( std::forward<Range>( rng )),
			   std::forward< Xs >( xs ) ... );
      }
    };

    
    template< typename Function >
    struct iii
    {
      template< typename Range, typename Size, typename ... Xs >
      auto
      operator ()( Range& rng, Size n, Xs&& ... xs ){
	auto intermediate = begin( rng );
	std::advance( intermediate, n );
	return Function{}( begin( rng ),
			   intermediate,
			   end( rng ),
			   std::forward<Xs>( xs ) ... );
      }
    };

    
    

    template< typename Function >
    struct iiix
    {
      template< typename Range1, typename Range2, typename ... Xs >
      auto
      operator ()( Range1&& rng1, Range2&& rng2, Xs&& ... xs ){
	return Function{}( begin( std::forward<Range1>( rng1 )), end( std::forward<Range1>( rng1 )),
			   begin( std::forward<Range2>( rng2 )),
			   std::forward<Xs>( xs ) ... );
      }
    };

    

    template< typename Function >
    struct iiii
    {
      template< typename Range1, typename Range2, typename ... Xs >
      auto
      operator ()( Range1&& rng1, Range2&& rng2, Xs&& ... xs ){
	return Function{}( begin( rng1 ), end( rng1 ), 
			   begin( rng2 ), end( rng2 ),
			   std::forward< Xs >( xs ) ... );
      }
    };
    


    
    using all_of = ii< wrap::all_of >;
    using any_of = ii< wrap::any_of >;
    using none_of = ii< wrap::none_of >;
    using for_each = ii< wrap::for_each >;
    using find = ii< wrap::find >;
    using find_if = ii< wrap::find_if >;
    using find_if_not = ii< wrap::find_if_not >;
    using find_end = iiii< wrap::find_end >;
    using find_first_of = iiii< wrap::find_first_of >;
    using adjacent_find = ii< wrap::adjacent_find >;
    using count = ii< wrap::count >;
    using count_if = ii< wrap::count_if >;
    using mismatch = iiii< wrap::mismatch >;
    using equal = iiix< wrap::equal >;
    using is_permutation = iiix< wrap::is_permutation >;
    using search = iiii< wrap::search >;
    using search_n = ii< wrap::search_n >;    
    using copy = ii< wrap::copy >;
    using copy_if = ii< wrap::copy_if >;
    using copy_backward = ii< wrap::copy_backward >;
    using move = ii< wrap::move >;
    using move_backward = ii< wrap::move_backward >;
    using swap_ranges = iiix< wrap::swap_ranges >;
    using transform = ii< wrap::transform >;
    using transform2 = iiix< wrap::transform >;
    using replace = ii< wrap::replace >;
    using replace_if = ii< wrap::replace_if >;
    using replace_copy = ii< wrap::replace_copy >;
    using replace_copy_if = ii< wrap::replace_copy_if >;
    using fill = ii< wrap::fill >;
    using generate = ii< wrap::generate >;
    using remove = ii< wrap::remove >;
    using remove_if = ii< wrap::remove_if >;
    using remove_copy = ii< wrap::remove_copy >;
    using remove_copy_if = ii< wrap::remove_copy_if >;
    using unique = ii< wrap::unique >;
    using unique_copy = ii< wrap::unique_copy >;
    using reverse = ii< wrap::reverse >;
    using reverse_copy = ii< wrap::reverse_copy >;
    using rotate = iii< wrap::rotate >;
    using rotate_copy = iii< wrap::rotate_copy >;
    using random_shuffle = ii< wrap::random_shuffle >;
    using shuffle = ii< wrap::shuffle >;
    using is_partitioned = ii< wrap::is_partitioned >;
    using partition = ii< wrap::partition >;
    using stable_partition = ii< wrap::stable_partition >;
    using partition_copy = ii< wrap::partition_copy >;
    using partition_point = ii< wrap::partition_point >;
    using sort = ii< wrap::sort >;
    using stable_sort = ii< wrap::stable_sort >;
    using partial_sort = iii< wrap::partial_sort >;
    using partial_sort_copy = iiii< wrap::partial_sort_copy >;
    using is_sorted = ii< wrap::is_sorted >;
    using is_sorted_until = ii< wrap::is_sorted_until >;
    using nth_element = iii< wrap::nth_element >;
    using lower_bound = ii< wrap::lower_bound >;
    using upper_bound = ii< wrap::upper_bound >;
    using equal_range = ii< wrap::equal_range >;
    using binary_search = ii< wrap::binary_search >;
    using merge = iiii< wrap::merge >;
    using inplace_merge = iii< wrap::inplace_merge >;
    using includes = iiii< wrap::includes >;
    using set_union = iiii< wrap::set_union >;
    using set_intersection = iiii< wrap::set_intersection >;
    using set_difference = iiii< wrap::set_difference >;
    using set_symmetric_difference = iiii< wrap::set_symmetric_difference >;
    using push_heap = ii< wrap::push_heap >;
    using pop_heap = ii< wrap::pop_heap >;
    using make_heap = ii< wrap::make_heap >;
    using sort_heap = ii< wrap::sort_heap >;
    using is_heap = ii< wrap::is_heap >;
    using is_heap_until = ii< wrap::is_heap_until >;
    using min_element = ii< wrap::min_element >;
    using max_element = ii< wrap::max_element >;
    using minmax_element = ii< wrap::minmax_element >;
    using lexicographical_compare = iiii< wrap::lexicographical_compare >;
    using next_permutation = ii< wrap::next_permutation >;
    using prev_permutation = ii< wrap::prev_permutation >;





      

    
  } // end of namespace core
} // end of namespace range


#endif // CORE_HPP_INCLUDED
