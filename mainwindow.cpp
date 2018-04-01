#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    image = QImage(this->size(), QImage::Format_RGB32);
    image.fill(Qt::white);

    drawing = false;
    brushColor = Qt::black;
    brushSize = 2;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        drawing = true;
        lastPoint = event->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && drawing)
    {
        QPainter painter(&image);
        painter.setPen(QPen(brushColor, brushSize, Qt::SolidLine,
                            Qt::RoundCap, Qt::RoundJoin));
        painter.drawLine(lastPoint, event->pos());

        lastPoint = event->pos();
        this->update();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        drawing = false;
    }
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter canvasPainter(this);
    canvasPainter.drawImage(this->rect(), image, image.rect());
}


void MainWindow::on_actionSalvar_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this,"Save Image", "", "PNG (*.png);;JPEG (*.jpg *.jpeg);;Todos os arquivos (*.*)");
    if (filePath == "")
        return;
    image.save(filePath);
}

void MainWindow::on_actionLimpar_triggered()
{
    image.fill(Qt::white);
    this->update();
}

void MainWindow::on_action2px_triggered()
{
    brushSize = 2;
}

void MainWindow::on_action5px_triggered()
{
    brushSize = 5;
}

void MainWindow::on_action10px_triggered()
{
     brushSize = 10;
}

void MainWindow::on_actionPreto_triggered()
{
    brushColor = Qt::black;
}

void MainWindow::on_actionBranco_triggered()
{
    brushColor = Qt::white;
}

void MainWindow::on_actionVermelho_triggered()
{
    brushColor = Qt::red;
}

void MainWindow::on_actionVerde_triggered()
{
    brushColor = Qt::green;
}

void MainWindow::on_actionAzul_triggered()
{
    brushColor = Qt::blue;
}
