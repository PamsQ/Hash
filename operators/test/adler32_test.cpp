#define BOOST_TEST_MODULE "Addler test"
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <iostream>
#include <bitset>
#include <operators.hpp>

using namespace std;

BOOST_AUTO_TEST_SUITE(HashOpTEST)

#define  m 65521

/*
 * Adler operator key generation test
 */
BOOST_AUTO_TEST_CASE( adler_key_test )
{
	bool flag{false};

	if(Adler32_hash{}("cadena", m) == 137560668)
		flag = true;

	BOOST_CHECK_EQUAL( flag, true);
	
}


BOOST_AUTO_TEST_SUITE_END()
