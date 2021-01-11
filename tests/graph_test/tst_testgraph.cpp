#include <QtTest>
#include <QCoreApplication>

#include "../../src/graph.hpp"

class TestGraph : public QObject
{
    Q_OBJECT
    stc::Graph<float> graph;
public:
    TestGraph();
    ~TestGraph();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testCasePushItem();
    void testCasePopItem();
};

TestGraph::TestGraph() {}

TestGraph::~TestGraph() {}

void TestGraph::initTestCase() {}

void TestGraph::cleanupTestCase() {}

void TestGraph::testCasePushItem()
{
}

void TestGraph::testCasePopItem()
{
}

QTEST_APPLESS_MAIN(TestGraph)

#include "tst_testgraph.moc"
