#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TextOutputter.h>
#include "../Data-Structures/arrays/Array.h"

template<typename T>
class ArrayTest : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE(ArrayTest);
    CPPUNIT_TEST(testInsert);
    CPPUNIT_TEST(testDeleteAt);
    CPPUNIT_TEST(testAccess);
    CPPUNIT_TEST(testUpdate);
    CPPUNIT_TEST(testResize);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() {}
    void tearDown() {}

    void testInsert() {
        Array<T> arr(5);
        arr.Insert(0, T(10));
        CPPUNIT_ASSERT(arr.Access(0) == T(10));
    }

    void testDeleteAt() {
        Array<T> arr(5);
        arr.Insert(0, T(10));
        arr.DeleteAt(0);
        // Additional checks can be added here
    }

    void testAccess() {
        Array<T> arr(5);
        arr.Insert(0, T(20));
        CPPUNIT_ASSERT(arr.Access(0) == T(20));
    }

    void testUpdate() {
        Array<T> arr(5);
        arr.Insert(0, T(30));
        arr.Update(0, T(40));
        CPPUNIT_ASSERT(arr.Access(0) == T(40));
    }

    void testResize() {
        Array<T> arr(5);
        arr.Resize(10);
        // Additional checks can be added here
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(ArrayTest<int>);

// Main function for running tests
int main(int argc, char* argv[]) {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(ArrayTest<int>::suite());
    runner.setOutputter(new CppUnit::TextOutputter(&runner.result(), std::cerr));
    bool wasSuccessful = runner.run();
    return wasSuccessful ? 0 : 1;
}
