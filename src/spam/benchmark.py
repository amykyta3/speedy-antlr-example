import time

import antlr4

from .parser import sa_mygrammar


def benchmark(input_file:str):
    stream = antlr4.FileStream(input_file)

    # Python implementation
    start = time.perf_counter()
    sa_mygrammar._py_parse(stream, "root")
    py_elapsed = time.perf_counter() - start

    # C++ Implementation
    start = time.perf_counter()
    sa_mygrammar._cpp_parse(stream, "root")
    cpp_elapsed = time.perf_counter() - start

    print("py_elapsed:  %.3f" % (py_elapsed * 1000), "ms")
    print("cpp_elapsed: %.3f" % (cpp_elapsed * 1000), "ms")
    print("Speedup: %.2f" % (py_elapsed / cpp_elapsed))
