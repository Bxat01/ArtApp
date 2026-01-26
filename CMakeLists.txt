cmake_minimum_required(VERSION 3.16)
project(MGS VERSION 1.0 LANGUAGES CXX)

# حل مشكلة الـ 156 خطأ وتوافق المترجم مع Qt
if(MSVC)
    add_compile_options(/Zc:__cplusplus /permissive-)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# الخطوة الحاسمة: تغيير المسار ليتوافق مع Visual Studio
# تأكد أن هذا المجلد موجود في C:/Qt/6.10.1/
set(CMAKE_PREFIX_PATH "C:/Qt/6.10.1/msvc2019_64") 

find_package(Qt6 COMPONENTS Widgets REQUIRED)

# تجميع الملفات تلقائياً
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")
set(UI_FILES "src/App/MainWindow.ui")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${UI_FILES})

# ربط المكتبات (هذا السطر سيحذف أخطاء LNK2019 تماماً)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)