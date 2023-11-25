#ifndef STACK_TEST_H
#define STACK_TEST_H

#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Data-Structures/stack/Stack.h" // Adjust the path as necessary

template <typename T>
class StackTest : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE(StackTest);
    CPPUNIT_TEST(testPush);
    CPPUNIT_TEST(testPop);
    CPPUNIT_TEST(testSize);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() {}
    void tearDown() {}

    void testPush() {
        Stack<T> stack;
        stack.push(T(10));
        CPPUNIT_ASSERT(stack.size() == 1);
    }

    void testPop() {
        Stack<T> stack;
        stack.push(T(20));
        const T* topElement = stack.pop();
        CPPUNIT_ASSERT(topElement != nullptr && *topElement == T(20));
        CPPUNIT_ASSERT(stack.size() == 0);
    }

    void testSize() {
        Stack<T> stack;
        stack.push(T(30));
        stack.push(T(40));
        CPPUNIT_ASSERT(stack.size() == 2);
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(StackTest<int>);

#endif // STACK_TEST_H
