#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "../Core/Canvas.h"
#include <QToolBar>
#include <QAction>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Canvas* canvas = new Canvas(this);
    setCentralWidget(canvas);

    // 2. نظام الأدوات (Toolbar System)
    QToolBar* toolBar = addToolBar("Tools");

    auto* brushAct = toolBar->addAction("Brush");
    auto* eraserAct = toolBar->addAction("Eraser");

    connect(brushAct, &QAction::triggered, [canvas]() {
        });
}