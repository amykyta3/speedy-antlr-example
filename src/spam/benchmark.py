import timeit

import antlr4

from .parser import sa_mygrammar


def benchmark(input_file:str, count=100):

    cpp_elapsed = timeit.timeit(lambda: sa_mygrammar._cpp_parse(antlr4.FileStream(input_file), "root"), number=count)
    py_elapsed = timeit.timeit(lambda: sa_mygrammar._py_parse(antlr4.FileStream(input_file), "root"), number=count)

    py_elapsed = py_elapsed / count
    cpp_elapsed = cpp_elapsed / count

    print("py_elapsed:  %.3f" % (py_elapsed * 1000), "ms")
    print("cpp_elapsed: %.3f" % (cpp_elapsed * 1000), "ms")
    print("Speedup: %.2f" % (py_elapsed / cpp_elapsed))
