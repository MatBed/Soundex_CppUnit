#pragma once
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <iostream>
#include "SoundexAlgorithm.h"

class SoundexTests : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(SoundexTests);
    CPPUNIT_TEST(WhenTheWordIsEmptyThenReturn0000);
    CPPUNIT_TEST(WhenTheWordHaveOneCharThenFillTheWordBy0);
    CPPUNIT_TEST(WhenTheWordHaveUpperCaseThenChangeToLowerCase);
    CPPUNIT_TEST(WhenTheWordHaveFoutCharsWithDifferentNumbersThenReturnEncodedWord);
    CPPUNIT_TEST(WhenTheWordHaveMoreThanOneCharAndLessThanFourCharsThenAdd0);
    CPPUNIT_TEST(WhenTheWordHaveMoreThanFourCharsThenRemoveRedundantChars);
    CPPUNIT_TEST(WhenTheWordHaveNeighboringCharsWithTheSameNumberThenRemoveAllThisCharsWitchoutFirst);
    CPPUNIT_TEST(WhenTheWordHaveCharsWhichDoNotExistInDictionaryThenRemoveThisChars);
    CPPUNIT_TEST(WhenTheWordHaveSpecialCharsThenReplaceThisCharsTo0);
    CPPUNIT_TEST(WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByWThenEncodeLikeOneNumber);
    CPPUNIT_TEST(WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByHThenEncodeLikeOneNumber);
    CPPUNIT_TEST(WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByVowelThenEncodeTwice);
    CPPUNIT_TEST(WhentTheWordIsRobertThenReturnR163);
    CPPUNIT_TEST(WhentTheWordIsRuperThenReturnR163);
    CPPUNIT_TEST(WhentTheWordIsRubinThenReturnR150);
    CPPUNIT_TEST(WhentTheWordIsAshcraftThenReturnA261);
    CPPUNIT_TEST(WhentTheWordIsAshcroftThenReturnA261);
    CPPUNIT_TEST(WhentTheWordIsTymczakThenReturnT522);
    CPPUNIT_TEST(WhentTheWordIsPfisterThenReturnP123);
    CPPUNIT_TEST(WhentTheWordIsHoneymanThenReturnH555);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

protected:
    void WhenTheWordIsEmptyThenReturn0000();
    void WhenTheWordHaveOneCharThenFillTheWordBy0();
    void WhenTheWordHaveUpperCaseThenChangeToLowerCase();
    void WhenTheWordHaveFoutCharsWithDifferentNumbersThenReturnEncodedWord();
    void WhenTheWordHaveMoreThanOneCharAndLessThanFourCharsThenAdd0();
    void WhenTheWordHaveMoreThanFourCharsThenRemoveRedundantChars();
    void WhenTheWordHaveNeighboringCharsWithTheSameNumberThenRemoveAllThisCharsWitchoutFirst();
    void WhenTheWordHaveCharsWhichDoNotExistInDictionaryThenRemoveThisChars();
    void WhenTheWordHaveSpecialCharsThenReplaceThisCharsTo0();
    void WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByWThenEncodeLikeOneNumber();
    void WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByHThenEncodeLikeOneNumber();
    void WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByVowelThenEncodeTwice();
    void WhentTheWordIsRobertThenReturnR163();
    void WhentTheWordIsRuperThenReturnR163();
    void WhentTheWordIsRubinThenReturnR150();
    void WhentTheWordIsAshcraftThenReturnA261();
    void WhentTheWordIsAshcroftThenReturnA261();
    void WhentTheWordIsTymczakThenReturnT522();
    void WhentTheWordIsPfisterThenReturnP123();
    void WhentTheWordIsHoneymanThenReturnH555();

private:
    SoundexAlgorithm *soundexAlgorithm;
};


