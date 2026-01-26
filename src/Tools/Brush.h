#ifndef BRUSH_H
#define BRUSH_H

#include <QPainter>
#include <QPen>

class Brush {
public:
    int size = 5;
    QColor color = Qt::black;

    void apply(QPainter& painter, QPoint lastPos, QPoint currentPos) {
        painter.setPen(QPen(color, size, Qt::SolidLine, Qt::RoundCap));
        painter.drawLine(lastPos, currentPos);
    }
};
#endif