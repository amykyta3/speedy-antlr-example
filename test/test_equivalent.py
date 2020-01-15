
import unittest

import antlr4
from speedy_antlr_tool.validate import validate_top_ctx

from spam.parser import sa_mygrammar

class TestEquivalent(unittest.TestCase):
    def test_equivalent(self):
        """
        Test if C++ and pure python implementations result in an equivalent
        parse tree
        """

        # Test requires the C++ implementation to exist
        self.assertTrue(sa_mygrammar.USE_CPP_IMPLEMENTATION)
        
        stream = antlr4.InputStream("1+2+3*4/5;")

        # Parse the same stream using both parsers
        py = sa_mygrammar._py_parse(stream, "root")
        cpp = sa_mygrammar._cpp_parse(stream, "root")

        # Validate them!
        validate_top_ctx(py, cpp)

