#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QComboBox>
#include <QLineEdit>
#include <QLabel>
#include <QtCharts>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QValueAxis>

using namespace QtCharts;

class PollutantOverviewPage : public QWidget {
public:
    PollutantOverviewPage(QWidget *parent = nullptr) : QWidget(parent) {
        // Main layout
        QVBoxLayout *mainLayout = new QVBoxLayout(this);

        // Title
        QLabel *title = new QLabel("Pollutant Overview Page");
        title->setAlignment(Qt::AlignCenter);
        title->setStyleSheet("font-size: 20px; font-weight: bold;");
        mainLayout->addWidget(title);

        // Search Bar
        QHBoxLayout *searchLayout = new QHBoxLayout;
        QComboBox *searchBar = new QComboBox();
        searchBar->setEditable(true); // Allows typing
        searchBar->addItems({"1,1,2 Trichloroethane", "Chloroform"}); // Dropdown options
        searchLayout->addWidget(searchBar);
        mainLayout->addLayout(searchLayout);

        // Time Series Chart
        QChart *timeSeriesChart = new QChart();
        QLineSeries *series = new QLineSeries();
        series->append(0, 1);
        series->append(1, 3);
        series->append(2, 2);
        series->append(3, 5);
        series->append(4, 4);
        timeSeriesChart->addSeries(series);
        timeSeriesChart->createDefaultAxes();
        timeSeriesChart->setTitle("Time Series Chart");

        QChartView *timeChartView = new QChartView(timeSeriesChart);
        timeChartView->setRenderHint(QPainter::Antialiasing);
        mainLayout->addWidget(timeChartView);

        // Bar Chart
        QChart *barChart = new QChart();
        QBarSet *set1 = new QBarSet("Compliance Indicator");
        QBarSet *set2 = new QBarSet("Compliance Indicator");
        QBarSet *set3 = new QBarSet("Compliance Indicator");

        *set1 << 10;
        *set2 << 15;
        *set3 << 8;

        QBarSeries *barSeries = new QBarSeries();
        barSeries->append(set1);
        barSeries->append(set2);
        barSeries->append(set3);

        barChart->addSeries(barSeries);
        barChart->createDefaultAxes();
        barChart->setTitle("Bar Chart");

        QChartView *barChartView = new QChartView(barChart);
        barChartView->setRenderHint(QPainter::Antialiasing);
        mainLayout->addWidget(barChartView);

        // Compliance Indicators
        QHBoxLayout *complianceLayout = new QHBoxLayout;
        QLabel *complianceLabel1 = new QLabel("Compliance Indicator");
        complianceLabel1->setStyleSheet("background-color: green; color: white; padding: 5px;");
        QLabel *complianceLabel2 = new QLabel("Compliance Indicator");
        complianceLabel2->setStyleSheet("background-color: yellow; color: black; padding: 5px;");
        QLabel *complianceLabel3 = new QLabel("Compliance Indicator");
        complianceLabel3->setStyleSheet("background-color: red; color: white; padding: 5px;");

        complianceLayout->addWidget(complianceLabel1);
        complianceLayout->addWidget(complianceLabel2);
        complianceLayout->addWidget(complianceLabel3);
        mainLayout->addLayout(complianceLayout);
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    PollutantOverviewPage window;
    window.resize(800, 600);
    window.setWindowTitle("Pollutant Overview");
    window.show();

    return app.exec();
}
