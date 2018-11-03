#include "pch.h"
#include "SoundexTests.h"

CPPUNIT_TEST_SUITE_REGISTRATION(SoundexTests);


void SoundexTests::setUp()
{
    soundexAlgorithm = new SoundexAlgorithm();
}

void SoundexTests::tearDown()
{
    delete soundexAlgorithm;
    soundexAlgorithm = NULL;
}


void SoundexTests::WhenTheWordIsEmptyThenReturn0000()
{
    std::string expected = soundexAlgorithm->Encode("");
    CPPUNIT_ASSERT_EQUAL(std::string("0000"), expected);
}

void SoundexTests::WhenTheWordHaveOneCharThenFillTheWordBy0()
{
    std::string expected = soundexAlgorithm->Encode("w");
    CPPUNIT_ASSERT_EQUAL(std::string("w000"), expected);
}

void SoundexTests::WhenTheWordHaveUpperCaseThenChangeToLowerCase()
{
    std::string expected = soundexAlgorithm->Encode("ABCD");
    CPPUNIT_ASSERT_EQUAL(std::string("a123"), expected);
}

void SoundexTests::WhenTheWordHaveFoutCharsWithDifferentNumbersThenReturnEncodedWord()
{
    std::string expected = soundexAlgorithm->Encode("bcdm");
    CPPUNIT_ASSERT_EQUAL(std::string("b235"), expected);
}

void SoundexTests::WhenTheWordHaveMoreThanOneCharAndLessThanFourCharsThenAdd0()
{
    std::string expected = soundexAlgorithm->Encode("an");
    CPPUNIT_ASSERT_EQUAL(std::string("a500"), expected);
}

void SoundexTests::WhenTheWordHaveMoreThanFourCharsThenRemoveRedundantChars()
{
    std::string expected = soundexAlgorithm->Encode("anrtzv");
    CPPUNIT_ASSERT_EQUAL(std::string("a563"), expected);
}

void SoundexTests::WhenTheWordHaveNeighboringCharsWithTheSameNumberThenRemoveAllThisCharsWitchoutFirst()
{
    std::string expected = soundexAlgorithm->Encode("accb");
    CPPUNIT_ASSERT_EQUAL(std::string("a210"), expected);
}

void SoundexTests::WhenTheWordHaveCharsWhichDoNotExistInDictionaryThenRemoveThisChars()
{
    std::string expected = soundexAlgorithm->Encode("acob");
    CPPUNIT_ASSERT_EQUAL(std::string("a210"), expected);
}

void SoundexTests::WhenTheWordHaveSpecialCharsThenReplaceThisCharsTo0()
{
    std::string expected = soundexAlgorithm->Encode("!%#&");
    CPPUNIT_ASSERT_EQUAL(std::string("0000"), expected);
}

void SoundexTests::WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByWThenEncodeLikeOneNumber()
{
    std::string expected = soundexAlgorithm->Encode("bgwjlm");
    CPPUNIT_ASSERT_EQUAL(std::string("b245"), expected);
}

void SoundexTests::WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByHThenEncodeLikeOneNumber()
{
    std::string expected = soundexAlgorithm->Encode("bghjlm");
    CPPUNIT_ASSERT_EQUAL(std::string("b245"), expected);
}

void SoundexTests::WhenInTheWordTwoLettersWithTheSameNumberAreSeparatedByVowelThenEncodeTwice()
{
    std::string expected = soundexAlgorithm->Encode("bditv");
    CPPUNIT_ASSERT_EQUAL(std::string("b331"), expected);
}

void SoundexTests::WhentTheWordIsRobertThenReturnR163()
{
    std::string expected = soundexAlgorithm->Encode("Robert");
    CPPUNIT_ASSERT_EQUAL(std::string("r163"), expected);
}

void SoundexTests::WhentTheWordIsRuperThenReturnR163()
{
    std::string expected = soundexAlgorithm->Encode("Rupert");
    CPPUNIT_ASSERT_EQUAL(std::string("r163"), expected);
}

void SoundexTests::WhentTheWordIsRubinThenReturnR150()
{
    std::string expected = soundexAlgorithm->Encode("Rubin");
    CPPUNIT_ASSERT_EQUAL(std::string("r150"), expected);
}

void SoundexTests::WhentTheWordIsAshcraftThenReturnA261()
{
    std::string expected = soundexAlgorithm->Encode("Ashcraft");
    CPPUNIT_ASSERT_EQUAL(std::string("a261"), expected);
}

void SoundexTests::WhentTheWordIsAshcroftThenReturnA261()
{
    std::string expected = soundexAlgorithm->Encode("Ashcroft");
    CPPUNIT_ASSERT_EQUAL(std::string("a261"), expected);
}

void SoundexTests::WhentTheWordIsTymczakThenReturnT522()
{
    std::string expected = soundexAlgorithm->Encode("Tymczak");
    CPPUNIT_ASSERT_EQUAL(std::string("t522"), expected);
}

void SoundexTests::WhentTheWordIsPfisterThenReturnP123()
{
    std::string expected = soundexAlgorithm->Encode("Pfister");
    CPPUNIT_ASSERT_EQUAL(std::string("p123"), expected);
}

void SoundexTests::WhentTheWordIsHoneymanThenReturnH555()
{
    std::string expected = soundexAlgorithm->Encode("Honeyman");
    CPPUNIT_ASSERT_EQUAL(std::string("h555"), expected);
}
