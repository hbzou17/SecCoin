Compiling/running abcmint unit tests
------------------------------------

abcmint unit tests are in the `src/test/` directory; they
use the Boost::Test unit-testing framework.

To compile and run the tests:

	cd src
	make -f makefile.unix test_abcmint  # Replace makefile.unix if you're not on unix
	./test_abcmint   # Runs the unit tests

If all tests succeed the last line of output will be:
`*** No errors detected`

To add more tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the test/ directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections (the makefiles are
set up to add test/*.cpp to test_abcmint automatically).


Compiling/running AardvarkCoin-Qt unit tests
---------------------------------------

AardvarkCoin-Qt unit tests are in the src/qt/test/ directory; they
use the Qt unit-testing framework.

To compile and run the tests:

	qmake abcmint-qt.pro ARKMINT_QT_TEST=1
	make
	./abcmint-qt_test

To add more tests, add them to the `src/qt/test/` directory,
the `src/qt/test/test_main.cpp` file, and abcmint-qt.pro.
