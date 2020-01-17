#!/bin/bash
cd "$( dirname "${BASH_SOURCE[0]}" )"

antlr4="java -Xmx500M -cp /usr/local/lib/antlr-4.8-complete.jar org.antlr.v4.Tool"

# Generate C++ target with visitor
$antlr4 -Dlanguage=Cpp -visitor -no-listener -o cpp_src MyGrammar.g4

# Generate Python target
$antlr4 -Dlanguage=Python3 -no-visitor -no-listener -o . MyGrammar.g4

# Run speedy-antlr-tool to generate parse accelerator
python3 <<EOF
from speedy_antlr_tool import generate

generate(
    py_parser_path="MyGrammarParser.py",
    cpp_output_dir="cpp_src",
)
EOF