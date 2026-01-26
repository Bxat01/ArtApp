#include "Canvas.h"
#include <QMouseEvent>
#include <QPainter>

Canvas::Canvas(QWidget* parent) : QWidget(parent) {
    setAttribute(Qt::WA_StaticContents);
    image = QImage(800, 600, QImage::Format_RGB32);
    image.fill(Qt::white);
}

void Canvas::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        lastPoint = event->pos();
        drawing = true;
    }
}

void Canvas::mouseMoveEvent(QMouseEvent* event) {
    if ((event->buttons() & Qt::LeftButton) && drawing) {
        QPainter painter(&image);
        painter.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap));
        painter.drawLine(lastPoint, event->pos());
        lastPoint = event->pos();
        update();
    }
}

void Canvas::mouseReleaseEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) drawing = false;
}

void Canvas::paintEvent(QPaintEvent* event) {
    QPainter canvasPainter(this);
    canvasPainter.drawImage(this->rect(), image);
}