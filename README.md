MyPainterApp/
├─ CMakeLists.txt                     # ملف بناء المشروع
├─ src/
│  ├─ main.cpp
│  ├─ App/
│  │  ├─ MainWindow.cpp
│  │  ├─ MainWindow.h
│  │  └─ MainWindow.ui               # واجهة Qt Designer
│  │
│  │  ├─ Core/                        # الوظائف الأساسية للرسم وإدارة المشروع
│  │  │  ├─ Canvas.cpp
│  │  │  ├─ Canvas.h
│  │  │  ├─ Layer.cpp
│  │  │  ├─ Layer.h
│  │  │  ├─ HistoryManager.cpp        # Undo/Redo
│  │  │  └─ HistoryManager.h
│  │  │
│  │  ├─ Tools/                       # كل أدوات الرسم
│  │  │  ├─ Brush.cpp
│  │  │  ├─ Brush.h
│  │  │  ├─ Eraser.cpp
│  │  │  ├─ Eraser.h
│  │  │  ├─ LineTool.cpp
│  │  │  ├─ LineTool.h
│  │  │  ├─ RectangleTool.cpp
│  │  │  ├─ RectangleTool.h
│  │  │  └─ EllipseTool.cpp
│  │  │  └─ EllipseTool.h
│  │  │
│  │  ├─ Effects/                     # مؤثرات وألوان
│  │  │  ├─ Filter.cpp
│  │  │  ├─ Filter.h
│  │  │  ├─ ColorAdjust.cpp
│  │  │  └─ ColorAdjust.h
│  │  │
│  │  ├─ File/                        # حفظ وفتح الملفات
│  │  │  ├─ FileManager.cpp
│  │  │  ├─ FileManager.h
│  │  │  └─ Formats/                  # صيغ ملفات خاصة
│  │  │     ├─ PNGHandler.cpp
│  │  │     ├─ PNGHandler.h
│  │  │     ├─ JPEGHandler.cpp
│  │  │     └─ JPEGHandler.h
│  │  │
│  │  ├─ UI/                          # عناصر واجهة المستخدم الخاصة بالبرنامج
│  │  │  ├─ Toolbar.cpp
│  │  │  ├─ Toolbar.h
│  │  │  ├─ ColorPalette.cpp
│  │  │  ├─ ColorPalette.h
│  │  │  ├─ LayersPanel.cpp
│  │  │  └─ LayersPanel.h
│  │  │
│  │  └─ Utils/                       # وظائف مساعدة عامة
│  │     ├─ Logger.cpp
│  │     ├─ Logger.h
│  │     ├─ MathUtils.cpp
│  │     └─ MathUtils.h
│  │
│  ├─ Animation/                      # مجلد الأنميشن الجديد
│  │  ├─ Frame.cpp
│  │  ├─ Frame.h
│  │  ├─ Timeline.cpp
│  │  ├─ Timeline.h
│  │  ├─ PlaybackEngine.cpp
│  │  ├─ PlaybackEngine.h
│  │  ├─ OnionSkin.cpp
│  │  └─ OnionSkin.h
│  │
│  ├─ ui/                             # ملفات Qt Designer الإضافية
│  │  └─ MainWindow.ui
│
├─ assets/                             # أيقونات، فرش جاهزة، ألوان
│  ├─ icons/
│  ├─ brushes/
│  └─ presets/
│
├─ docs/                               # التوثيق
├─ tests/                              # اختبارات لكل موديول
├─ scripts/                            # سكربتات بناء أو أتمتة
└─ README.md
