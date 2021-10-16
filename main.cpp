include <boost/utility/addressof.hpp>
#include <boost/utility/enable_if.hpp> // disable_if

#if !defined(BOOST_RANGE_DETAIL_MICROSOFT_RANGE_VERSION_1)
    #include <boost/range/mutable_iterator.hpp>
#else
    #include <iterator> // distance
    #include <boost/range/begin.hpp>
    #include <boost/range/end.hpp>
    #include <boost/range/iterator.hpp>
#endif


namespace boost { namespace range_detail_microsoft {


    // customization point
    //

    template< class Tag >
    struct customization;


    template< class T >
    struct customization_tag;


    struct using_type_as_tag
    { };


    // Topic:
    // In fact, it is unnecessary for VC++.
    // VC++'s behavior seems conforming, while GCC fails without this.
    template< class Iterator, class T >
    struct mutable_ :
        disable_if< is_const<T>, Iterator >
    { };


    // helpers
    //

    template< class Tag, class T >
    struct customization_tag_of
    {
        typedef typename mpl::if_< is_same<using_type_as_tag, Tag>,
            T,
            Tag
        >::type type;
    };


    template< class T >
    struct customization_of
    {
        typedef typename remove_cv<T>::type bare_t;
        typedef typename customization_tag<bare_t>::type tag_t;
        typedef customization<tag_t> type;
    };


    template< class T >
    struct mutable_iterator_of
    {
        typedef typename remove_cv<T>::type bare_t;
        typedef typename customization_of<bare_t>::type cust_t;
        typedef typename cust_t::template meta<bare_t>::mutable_iterator type;
    };


    template< class T >
    struct const_iterator_of
    {
        typedef typename remove_cv<T>::type bare_t;
        typedef typename customization_of<bare_t>::type cust_t;
        typedef typename cust_t::template meta<bare_t>::const_iterator type;
    };


    template< class T >
    struct size_type_of
    {
        typedef typename range_detail_microsoft::mutable_iterator_of<T>::type miter_t;
        typedef typename iterator_difference<miter_t>::type type;
    };


    template< class T > inline
    typename mutable_iterator_of<T>::type
    begin_of(T& x)
    {
        typedef typename customization_of<T>::type cust_t;
        return cust_t().template begin<typename mutable_iterator_of<T>::type>(x);
    }


    template< class T > inline
    typename const_iterator_of<T>::type
    begin_of(T const& x)
    {
        typedef typename customization_of<T>::type cust_t;
        return cust_t().template begin<typename const_iterator_of<T>::type>(x);
    }


    template< class T > inline
    typename mutable_iterator_of<T>::type
    end_of(T& x)
    {
        typedef typename customization_of<T>::type cust_t;
        return cust_t().template end<typename mutable_iterator_of<T>::type>(x);
    }


    template< class T > inline
    typename const_iterator_of<T>::type
    end_of(T const& x)
    {
        typedef typename customization_of<T>::type cust_t;
        return cust_t().template end<typename const_iterator_of<T>::type>(x);
    }


#if defined(BOOST_RANGE_DETAIL_MICROSOFT_RANGE_VERSION_1)

    template< class T > inline
    typename size_type_of<T>::type
    size_of(T const& x)
    {
        return std::distance(boost::begin(x), boost::end(x));
    }

#endif



    template< class Range >
    struct compatible_mutable_iterator : 
        BOOST_RANGE_DETAIL_MICROSOFT_range_mutable_iterator<Range>
    { };


} } // namespace boost::range_detail_microsoft


#define BOOST_RANGE_DETAIL_MICROSOFT_CUSTOMIZATION_namespace_open(NamespaceList) \
    BOOST_PP_LIST_FOR_EACH(BOOST_RANGE_DETAIL_MICROSOFT_CUSTOMIZATION_namespace_open_op, ~, NamespaceList) \
/**/

    #define BOOST_RANGE_DETAIL_MICROSOFT_CUSTOMIZATION_namespace_open_op(r, data, elem) \
        namespace elem { \
    /**/


#define BOOST_RANGE_DETAIL_MICROSOFT_CUSTOMIZATION_namespace_close(NamespaceList) \
    BOOST_PP_LIST_FOR_EACH(BOOST_RANGE_DETAIL_MICROSOFT_CUSTOMIZATION_namespace_close_op, ~, NamespaceList) \
/**/

    #define BOOST_RANGE_DETAIL_MICROSOFT_CUSTOMIZATION_namespace_close_op(r, data, elem) \
        } \
    /**/


#define BOOST_RANGE_DETAIL_MICROSOFT_CUSTOMIZATION_namespace_expand_op(r, data, elem) \
    :: elem \
/**/

