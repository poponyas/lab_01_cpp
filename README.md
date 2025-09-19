LAB1CPP/ - корневая папка проекта
├── .devcontainer/ - конфигурация Docker контейнера для разработки
│ ├── devcontainer.json - настройки dev container
│ └── Dockerfile - образ Docker с инструментами разработки
├── build2/ - папка сборки проекта
│ └── [build artifacts] - скомпилированные файлы и кэш CMake
├── include/ - заголовочные файлы
│ └── turkish.h - заголовок с функциями для турецких чисел
├── src/ - исходный код
│ └── turkish.cpp - реализация функций преобразования чисел
├── test/ - тесты
│ └── tests01.cpp - unit-тесты с Google Test
├── CMakeLists.txt - конфигурация сборки CMake
├── main.cpp - основная программа
├── main.exe - исполняемый файл (скомпилированная программа)
└── README.md - документация проекта
