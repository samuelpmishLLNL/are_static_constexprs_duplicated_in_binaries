mylib.hpp has a large `static constexpr` global variable that is used by two translation units: `foo.cpp` and `bar.cpp`

this CMake project builds 3 binaries: one with only foo.cpp, one with only bar.cpp and one with both. The sizes of the binaries are (on my machine):

```
% ls -la
...
-rw-r--r--   1 mish2  27421   65056 Oct 13 11:24 libbar.a
-rw-r--r--   1 mish2  27421   65064 Oct 13 11:24 libfoo.a
-rw-r--r--   1 mish2  27421  130016 Oct 13 11:24 libboth.a
```

which makes it seem that the large table is being duplicated binaries that link the two translation units.
