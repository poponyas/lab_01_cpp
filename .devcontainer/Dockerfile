# Используем базовый образ с GCC и CMake
FROM gcc:14.2.0

# Устанавливаем необходимые зависимости
RUN apt-get update && apt-get install -y \
    cmake git wrk clangd\
    && rm -rf /var/lib/apt/lists/*

WORKDIR /test
RUN git clone https://github.com/google/googletest.git && \
    cd googletest && \
    mkdir build && cd build && \
    cmake .. && \
    make && \
    make install && \
    cd /test && rm -rf googletest


# Устанавливаем рабочую директорию
WORKDIR /workspace