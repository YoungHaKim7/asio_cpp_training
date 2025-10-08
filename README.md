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

- 설치되었는지 확인

```
$ find /opt/homebrew -name "*asio*" -type d 2>/dev/null | head -10
  ⎿  /opt/homebrew/Cellar/boost/1.89.0/include/boost/asio
     /opt/homebrew/Cellar/asio
     /opt/homebrew/Cellar/asio/1.36.0/include/asio
     /opt/homebrew/Cellar/asio/1.36.0/share/asio

# fd
fd -g '*asio*' | head -10
```

- fd 사용법
  - https://inpa.tistory.com/entry/Modern-Linux-%F0%9F%90%A7-fd-%EB%AA%85%EB%A0%B9%EC%96%B4-%EC%82%AC%EC%9A%A9%EB%B2%95-find-%EB%8C%80%EC%8B%A0-%EC%9D%B4%EA%B1%B0-%EC%93%B0%EC%9E%90

# Doc
- https://think-async.com/Asio/AsioAndBoostAsio.html

# (소개영상 251007)Asio C++ Library - First Impression | Tsoding Daily
- https://youtu.be/aBYqGD41E9g?si=f-k9JZBxBJOwk6qy
