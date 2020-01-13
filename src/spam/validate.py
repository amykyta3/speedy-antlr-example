from .parser import sa_mygrammar
import antlr4

def validate(input_file:str):
    from speedy_antlr_tool.validate import validate_top_ctx

    stream = antlr4.FileStream(input_file)
    py = sa_mygrammar._py_parse(stream, "root")
    cpp = sa_mygrammar._cpp_parse(stream, "root")

    validate_top_ctx(py, cpp)