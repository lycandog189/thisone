#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>


#include < string >
BOOST_AUTO_TEST_CASE(my_addition_test)
{
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((1 + 2), 3);
}
BOOST_AUTO_TEST_CASE(my_outofrange_test)
{
	std::string s = " Hello ";
	// Check no exception is thrown
	BOOST_CHECK_NO_THROW(s.at(0));
	// Check that an out_of_range exception *is* thrown
	BOOST_CHECK_THROW(s.at(10), std::out_of_range);
}
BOOST_AUTO_TEST_CASE(my_overflow_test)
{
	unsigned int n = 0;
	--n;
	// Check an arbitrary Boolean expression
	BOOST_CHECK(n > 0);
	// Better way to check 'greater than '
	BOOST_CHECK_GT(n, 0);
}

