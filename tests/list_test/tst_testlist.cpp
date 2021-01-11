#include <QtTest>
#include <QCoreApplication>

#include "../../src/list.hpp"

class TestList : public QObject
{
    Q_OBJECT
    stc::ListLL<int> list;

public:
    TestList();
    ~TestList();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testCasePushItem();
    void testCasePopItem();
    void testCaseReverse();

};

TestList::TestList() : list {9, 1, 2, 4}
{
    list.to_str();
}

TestList::~TestList() {}

void TestList::initTestCase() {}

void TestList::cleanupTestCase() {}

void TestList::testCasePushItem()
{
    list.push_back(9);
    list.push_back(5.55454);
    list.push_back(9.1574);
    list.push_back(25.74);
    list.push_back(0.1574);
}

void TestList::testCasePopItem()
{
    QCOMPARE(list.pop_back(), 0.1574);
    QCOMPARE(list.pop(0), 9);
    QCOMPARE(list.pop_back(), 25.74);

    QCOMPARE(list.pop_front(), 1);
    QCOMPARE(list.pop_front(), 2);
    QCOMPARE(list.pop_front(), 4);
}

void TestList::testCaseReverse()
{
    list.reverse();
    list.to_str();
}

QTEST_APPLESS_MAIN(TestList)

#include "tst_testlist.moc"
