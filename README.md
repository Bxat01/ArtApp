MyPainterApp/
├─ CMakeLists.txt                   
├─ src/
│  ├─ main.cpp
│  ├─ App/
│  │  ├─ MainWindow.cpp
│  │  ├─ MainWindow.h
│  │  └─ MainWindow.ui              
│  │
│  │  ├─ Core/                  
│  │  │  ├─ Canvas.cpp
│  │  │  ├─ Canvas.h
│  │  │  ├─ Layer.cpp
│  │  │  ├─ Layer.h
│  │  │  ├─ HistoryManager.cpp        
│  │  │  └─ HistoryManager.h
│  │  │
│  │  ├─ Tools/                
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
│  │  ├─ Effects/                   
│  │  │  ├─ Filter.cpp
│  │  │  ├─ Filter.h
│  │  │  ├─ ColorAdjust.cpp
│  │  │  └─ ColorAdjust.h
│  │  │
│  │  ├─ File/                    
│  │  │  ├─ FileManager.cpp
│  │  │  ├─ FileManager.h
│  │  │  └─ Formats/                 
│  │  │     ├─ PNGHandler.cpp
│  │  │     ├─ PNGHandler.h
│  │  │     ├─ JPEGHandler.cpp
│  │  │     └─ JPEGHandler.h
│  │  │
│  │  ├─ UI/                        
│  │  │  ├─ Toolbar.cpp
│  │  │  ├─ Toolbar.h
│  │  │  ├─ ColorPalette.cpp
│  │  │  ├─ ColorPalette.h
│  │  │  ├─ LayersPanel.cpp
│  │  │  └─ LayersPanel.h
│  │  │
│  │  └─ Utils/                       
│  │     ├─ Logger.cpp
│  │     ├─ Logger.h
│  │     ├─ MathUtils.cpp
│  │     └─ MathUtils.h
│  │
│  ├─ Animation/               
│  │  ├─ Frame.cpp
│  │  ├─ Frame.h
│  │  ├─ Timeline.cpp
│  │  ├─ Timeline.h
│  │  ├─ PlaybackEngine.cpp
│  │  ├─ PlaybackEngine.h
│  │  ├─ OnionSkin.cpp
│  │  └─ OnionSkin.h
│  │
│  ├─ ui/                             
│  │  └─ MainWindow.ui
│
├─ assets/                            
│  ├─ icons/
│  ├─ brushes/
│  └─ presets/
│
├─ docs/                              
├─ tests/                              
├─ scripts/                            
└─ README.md

