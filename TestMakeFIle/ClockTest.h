/* 
 * File:   ClockTest.
 * Author: hloi
 *
 * Created on October 3, 2014, 6:41 PM
 * 
 * This file uses the CxxTest library <TestSuite> to create test cases 
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit: 
 * http://cxxtest.com/guide.html
 * 
 */

#ifndef CLOCKTEST_H
#define	CLOCKTEST_H

#include <cxxtest/TestSuite.h>
#include "Clock.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <strings.h>

class ClockTest : public CxxTest::TestSuite
{
 public:
    
	void testClock() {
		Clock clock;
		clock.set_clock(5,10,20);

		int exphr = 5;
		int expmin = 10;
		int expsec = 20;

		TS_ASSERT_EQUALS(clock.get_hours(), exphr);
		TS_ASSERT_EQUALS(clock.get_minutes(), expmin);
		TS_ASSERT_EQUALS(clock.get_seconds(), expsec);
	}

    Clock c;
    void testSetClock()
    {
     // A clock set to 0, should have a 0 value for hours, minutes, and seconds.
        
        
        c.set_clock(0,0,0);
        
        TS_ASSERT_EQUALS( c.get_hours(),   0 );
        TS_ASSERT_EQUALS( c.get_minutes(), 0 );
        TS_ASSERT_EQUALS( c.get_seconds(), 0 );
        
    }
    void testClockTick()
    {
        c.tick();
        //A clock ticked by one second should have a 1 for value second, and 0 
        //for the other two values.
        TS_ASSERT_EQUALS( c.get_seconds(), 1 );
        
        //Other two values unchanged.
        TS_ASSERT_EQUALS( c.get_hours(),   0 );
        TS_ASSERT_EQUALS( c.get_minutes(), 0 );
        
        //A clock ticked by 61 seconds should have a value of 1 for minute, 1
        //for second, and 0 for hours.
        
        //Advance clock by sixty seconds.
        for (int i = 0; i < 60; i++){
            c.tick();
        }
        TS_ASSERT_EQUALS( c.get_hours(), 0 );
        TS_ASSERT_EQUALS( c.get_minutes(), 1 );
        TS_ASSERT_EQUALS( c.get_seconds(), 1 );
        
        }
        
    
};
#endif	/* CLOCKTEST_H */

