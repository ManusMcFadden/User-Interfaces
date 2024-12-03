#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QPainter>
#include <QPaintEvent>

// A simple widget to draw the Time Series Chart
class TimeSeriesChart : public QWidget {
protected:
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);

        // Draw axes
        painter.drawLine(50, height() - 50, width() - 20, height() - 50); // X-axis
        painter.drawLine(50, 20, 50, height() - 50);                     // Y-axis

        // Example time series points
        QVector<QPointF> points = { {50, 150}, {100, 100}, {150, 50}, {200, 100}, {250, 150} };

        // Draw lines connecting the points
        QPen pen(Qt::blue, 2);
        painter.setPen(pen);
        for (int i = 0; i < points.size() - 1; ++i) {
            painter.drawLine(points[i], points[i + 1]);
        }

        // Draw points
        painter.setBrush(Qt::red);
        for (const QPointF &point : points) {
            painter.drawEllipse(point, 3, 3);
        }
    }
};

// A simple widget to draw the Bar Chart
class BarChart : public QWidget {
protected:
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);

        // Draw axes
        painter.drawLine(50, height() - 50, width() - 20, height() - 50); // X-axis
        painter.drawLine(50, 20, 50, height() - 50);                     // Y-axis

        // Example bar heights
        QVector<int> barHeights = { 100, 150, 75, 50, 125 };

        // Draw bars
        int barWidth = 30;
        int spacing = 20;
        int x = 60; // Start position

        QVector<QColor> colors = {
            Qt::red,
            QColorConstants::Svg::orange,
            Qt::yellow,
            Qt::green,
            Qt::blue
        };

        for (int i = 0; i < barHeights.size(); ++i) {
            painter.setBrush(colors[i % colors.size()]);
            painter.drawRect(x, height() - 50 - barHeights[i], barWidth, barHeights[i]);
            x += barWidth + spacing;
        }
    }
};


// Main pollutant overview page widget
class PollutantOverviewPage : public QWidget {
public:
    PollutantOverviewPage() {
        QVBoxLayout *layout = new QVBoxLayout(this);

        // Dropdown menu for pollutants
        QComboBox *pollutantDropdown = new QComboBox();
        pollutantDropdown->addItems({ "1,1,2 Trichloroethane", "Chloroform" });

        // Add Time Series Chart
        QLabel *timeSeriesLabel = new QLabel("Time Series Chart:");
        TimeSeriesChart *timeSeriesChart = new TimeSeriesChart();
        timeSeriesChart->setMinimumHeight(200);

        // Add Bar Chart
        QLabel *barChartLabel = new QLabel("Bar Chart:");
        BarChart *barChart = new BarChart();
        barChart->setMinimumHeight(200);

        // Add widgets to layout
        layout->addWidget(pollutantDropdown);
        layout->addWidget(timeSeriesLabel);
        layout->addWidget(timeSeriesChart);
        layout->addWidget(barChartLabel);
        layout->addWidget(barChart);

        setLayout(layout);
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    PollutantOverviewPage mainWindow;
    mainWindow.resize(800, 600);
    mainWindow.setWindowTitle("Pollutant Overview Page");
    mainWindow.show();

    return app.exec();
}

