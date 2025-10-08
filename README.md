# asio_cpp_training
https://think-async.com/Asio/

# Install

```
./configure

make
```

# 압축 풀고 강제 복사 ㅋㅋ

```bash
sudo cp -r include/asio /usr/local/include/
```

- 컴파일 할때 옵션 추가

- Simply point your compiler's include path to the current directory's include folder:

```
g++ -I/path/to/asio-1.36.0/include your_program.cpp
```

- cmake 이거만 추가해 주면됨. (macOS기준 설치 `brew install asio`)

```cmake
# asio
find_path(ASIO_INCLUDE_DIR asio.hpp
    PATHS /opt/homebrew/Cellar/asio/1.36.0/include
    NO_DEFAULT_PATH
)
if(NOT ASIO_INCLUDE_DIR)
    message(FATAL_ERROR "asio.hpp not found")
endif()
include_directories(${ASIO_INCLUDE_DIR})
```

# Doc
- https://think-async.com/Asio/AsioAndBoostAsio.html

# (소개영상 251007)Asio C++ Library - First Impression | Tsoding Daily
- https://youtu.be/aBYqGD41E9g?si=f-k9JZBxBJOwk6qy
