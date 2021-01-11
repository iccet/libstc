#include <QtTest>

#include "../../src/xlist.hpp"

using namespace stc;

class XorListTest : public QObject
{
    Q_OBJECT
    ListXL<float> list;

public:
    XorListTest() : list {9, 1, 2, 4}
    {
        std::cout << list.to_str();
    };
    ~XorListTest(){};

private slots:
    void testCasePushItem()
    {
        list.push_back(9);
        list.push_back(5.55454);
        list.push_back(9.1574);
        list.push_back(25.74);
        list.push_back(0.1574);
    };

    void lenTestCase()
    {
        QCOMPARE(list.len(), 9);
    };

    void testCasePopItem()
    {
        QCOMPARE(list.pop(), 0.1574);
        QCOMPARE(list.pop(0), 9);
        QCOMPARE(list.pop(), 25.74);

        QCOMPARE(list.pop_front(), 1);
        QCOMPARE(list.pop_front(), 2);
        QCOMPARE(list.pop_front(), 4);
    };

    void testCaseReverse()
    {
        list.reverse();
        std::cout << list.to_str();
    };

};

QTEST_APPLESS_MAIN(XorListTest)

#include "tst_xorlisttest.moc"
