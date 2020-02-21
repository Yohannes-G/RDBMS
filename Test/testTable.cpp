/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TableSuite_init = false;
#include "TableSuite.hpp"

static TableSuite suite_TableSuite;

static CxxTest::List Tests_TableSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TableSuite( "TableSuite.hpp", 71, "TableSuite", suite_TableSuite, Tests_TableSuite );

static class TestDescription_suite_TableSuite_test_getTableName : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TableSuite_test_getTableName() : CxxTest::RealTestDescription( Tests_TableSuite, suiteDescription_TableSuite, 74, "test_getTableName" ) {}
 void runTest() { suite_TableSuite.test_getTableName(); }
} testDescription_suite_TableSuite_test_getTableName;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
