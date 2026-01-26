#include <QApplication>
#include "MainWindow.h" // تم تعديل المسار ليكون مباشراً لأن الملفين في نفس المجلد

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    MainWindow window;
    window.show(); // التعديل هنا: النافذة ستأخذ حجمها من ملف الـ UI الذي صممته

    return app.exec();
}