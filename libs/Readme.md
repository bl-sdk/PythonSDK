# Used libraries
- [loguru](https://github.com/emilk/loguru), at commit [43a53def](https://github.com/emilk/loguru/tree/43a53def4ec7a9531f029fa75eae117e9964e48c). 
  We need some of the changes which have happened since the latest release (v2.1.0), e.g. Windows
  non blocking file lock.
- [minhook](https://github.com/TsudaKageyu/minhook), at commit [4a455528](https://github.com/TsudaKageyu/minhook/tree/4a455528f61b5a375b1f9d44e7d296d47f18bb18).
  Once again we need changes since the latest release (v1.3.3), e.g. compiling as C++ and the
  `intrin.h` header.
- [pybind](https://github.com/pybind/pybind11) v2.9
