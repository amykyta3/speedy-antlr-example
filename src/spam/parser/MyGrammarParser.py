# Generated from MyGrammar.g4 by ANTLR 4.11.1
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,14,52,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,5,
        0,14,8,0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,39,8,1,10,1,12,1,42,
        9,1,1,2,1,2,3,2,46,8,2,1,3,1,3,1,4,1,4,1,4,0,1,2,5,0,2,4,6,8,0,2,
        2,0,10,10,12,13,1,0,8,9,52,0,15,1,0,0,0,2,20,1,0,0,0,4,45,1,0,0,
        0,6,47,1,0,0,0,8,49,1,0,0,0,10,11,3,2,1,0,11,12,5,1,0,0,12,14,1,
        0,0,0,13,10,1,0,0,0,14,17,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,
        18,1,0,0,0,17,15,1,0,0,0,18,19,5,0,0,1,19,1,1,0,0,0,20,21,6,1,-1,
        0,21,22,3,4,2,0,22,40,1,0,0,0,23,24,10,5,0,0,24,25,5,11,0,0,25,39,
        3,2,1,6,26,27,10,4,0,0,27,28,7,0,0,0,28,39,3,2,1,5,29,30,10,3,0,
        0,30,31,7,1,0,0,31,39,3,2,1,4,32,33,10,2,0,0,33,34,5,2,0,0,34,35,
        3,2,1,0,35,36,5,3,0,0,36,37,3,2,1,2,37,39,1,0,0,0,38,23,1,0,0,0,
        38,26,1,0,0,0,38,29,1,0,0,0,38,32,1,0,0,0,39,42,1,0,0,0,40,38,1,
        0,0,0,40,41,1,0,0,0,41,3,1,0,0,0,42,40,1,0,0,0,43,46,3,6,3,0,44,
        46,3,8,4,0,45,43,1,0,0,0,45,44,1,0,0,0,46,5,1,0,0,0,47,48,5,6,0,
        0,48,7,1,0,0,0,49,50,5,7,0,0,50,9,1,0,0,0,4,15,38,40,45
    ]

class MyGrammarParser ( Parser ):

    grammarFileName = "MyGrammar.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "';'", "'?'", "':'", "<INVALID>", "<INVALID>", 
                     "<INVALID>", "<INVALID>", "'+'", "'-'", "'*'", "'**'", 
                     "'/'", "'%'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "SL_COMMENT", "ML_COMMENT", "INT", "STRING", "PLUS", 
                      "MINUS", "MULT", "EXP", "DIV", "MOD", "WS" ]

    RULE_root = 0
    RULE_expr = 1
    RULE_literal = 2
    RULE_number = 3
    RULE_string_literal = 4

    ruleNames =  [ "root", "expr", "literal", "number", "string_literal" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    SL_COMMENT=4
    ML_COMMENT=5
    INT=6
    STRING=7
    PLUS=8
    MINUS=9
    MULT=10
    EXP=11
    DIV=12
    MOD=13
    WS=14

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.11.1")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class RootContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EOF(self):
            return self.getToken(MyGrammarParser.EOF, 0)

        def expr(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(MyGrammarParser.ExprContext)
            else:
                return self.getTypedRuleContext(MyGrammarParser.ExprContext,i)


        def getRuleIndex(self):
            return MyGrammarParser.RULE_root




    def root(self):

        localctx = MyGrammarParser.RootContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_root)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 15
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==6 or _la==7:
                self.state = 10
                self.expr(0)
                self.state = 11
                self.match(MyGrammarParser.T__0)
                self.state = 17
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 18
            self.match(MyGrammarParser.EOF)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExprContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return MyGrammarParser.RULE_expr

     
        def copyFrom(self, ctx:ParserRuleContext):
            super().copyFrom(ctx)


    class BinaryExprContext(ExprContext):

        def __init__(self, parser, ctx:ParserRuleContext): # actually a MyGrammarParser.ExprContext
            super().__init__(parser)
            self.op = None # Token
            self.copyFrom(ctx)

        def expr(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(MyGrammarParser.ExprContext)
            else:
                return self.getTypedRuleContext(MyGrammarParser.ExprContext,i)

        def EXP(self):
            return self.getToken(MyGrammarParser.EXP, 0)
        def MULT(self):
            return self.getToken(MyGrammarParser.MULT, 0)
        def DIV(self):
            return self.getToken(MyGrammarParser.DIV, 0)
        def MOD(self):
            return self.getToken(MyGrammarParser.MOD, 0)
        def PLUS(self):
            return self.getToken(MyGrammarParser.PLUS, 0)
        def MINUS(self):
            return self.getToken(MyGrammarParser.MINUS, 0)


    class NOPContext(ExprContext):

        def __init__(self, parser, ctx:ParserRuleContext): # actually a MyGrammarParser.ExprContext
            super().__init__(parser)
            self.copyFrom(ctx)

        def literal(self):
            return self.getTypedRuleContext(MyGrammarParser.LiteralContext,0)



    class TernaryExprContext(ExprContext):

        def __init__(self, parser, ctx:ParserRuleContext): # actually a MyGrammarParser.ExprContext
            super().__init__(parser)
            self.one = None # ExprContext
            self.two = None # ExprContext
            self.three = None # ExprContext
            self.copyFrom(ctx)

        def expr(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(MyGrammarParser.ExprContext)
            else:
                return self.getTypedRuleContext(MyGrammarParser.ExprContext,i)




    def expr(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = MyGrammarParser.ExprContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 2
        self.enterRecursionRule(localctx, 2, self.RULE_expr, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            localctx = MyGrammarParser.NOPContext(self, localctx)
            self._ctx = localctx
            _prevctx = localctx

            self.state = 21
            self.literal()
            self._ctx.stop = self._input.LT(-1)
            self.state = 40
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,2,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 38
                    self._errHandler.sync(self)
                    la_ = self._interp.adaptivePredict(self._input,1,self._ctx)
                    if la_ == 1:
                        localctx = MyGrammarParser.BinaryExprContext(self, MyGrammarParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 23
                        if not self.precpred(self._ctx, 5):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 5)")
                        self.state = 24
                        localctx.op = self.match(MyGrammarParser.EXP)
                        self.state = 25
                        self.expr(6)
                        pass

                    elif la_ == 2:
                        localctx = MyGrammarParser.BinaryExprContext(self, MyGrammarParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 26
                        if not self.precpred(self._ctx, 4):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 4)")
                        self.state = 27
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(((_la) & ~0x3f) == 0 and ((1 << _la) & 13312) != 0):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self._errHandler.reportMatch(self)
                            self.consume()
                        self.state = 28
                        self.expr(5)
                        pass

                    elif la_ == 3:
                        localctx = MyGrammarParser.BinaryExprContext(self, MyGrammarParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 29
                        if not self.precpred(self._ctx, 3):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 3)")
                        self.state = 30
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==8 or _la==9):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self._errHandler.reportMatch(self)
                            self.consume()
                        self.state = 31
                        self.expr(4)
                        pass

                    elif la_ == 4:
                        localctx = MyGrammarParser.TernaryExprContext(self, MyGrammarParser.ExprContext(self, _parentctx, _parentState))
                        localctx.one = _prevctx
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 32
                        if not self.precpred(self._ctx, 2):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                        self.state = 33
                        self.match(MyGrammarParser.T__1)
                        self.state = 34
                        localctx.two = self.expr(0)
                        self.state = 35
                        self.match(MyGrammarParser.T__2)
                        self.state = 36
                        localctx.three = self.expr(2)
                        pass

             
                self.state = 42
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,2,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class LiteralContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser
            self.xnum = None # NumberContext
            self.xstr = None # String_literalContext

        def number(self):
            return self.getTypedRuleContext(MyGrammarParser.NumberContext,0)


        def string_literal(self):
            return self.getTypedRuleContext(MyGrammarParser.String_literalContext,0)


        def getRuleIndex(self):
            return MyGrammarParser.RULE_literal




    def literal(self):

        localctx = MyGrammarParser.LiteralContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_literal)
        try:
            self.state = 45
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [6]:
                self.enterOuterAlt(localctx, 1)
                self.state = 43
                localctx.xnum = self.number()
                pass
            elif token in [7]:
                self.enterOuterAlt(localctx, 2)
                self.state = 44
                localctx.xstr = self.string_literal()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class NumberContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def INT(self):
            return self.getToken(MyGrammarParser.INT, 0)

        def getRuleIndex(self):
            return MyGrammarParser.RULE_number




    def number(self):

        localctx = MyGrammarParser.NumberContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_number)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 47
            self.match(MyGrammarParser.INT)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class String_literalContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self):
            return self.getToken(MyGrammarParser.STRING, 0)

        def getRuleIndex(self):
            return MyGrammarParser.RULE_string_literal




    def string_literal(self):

        localctx = MyGrammarParser.String_literalContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_string_literal)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 49
            self.match(MyGrammarParser.STRING)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx



    def sempred(self, localctx:RuleContext, ruleIndex:int, predIndex:int):
        if self._predicates == None:
            self._predicates = dict()
        self._predicates[1] = self.expr_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def expr_sempred(self, localctx:ExprContext, predIndex:int):
            if predIndex == 0:
                return self.precpred(self._ctx, 5)
         

            if predIndex == 1:
                return self.precpred(self._ctx, 4)
         

            if predIndex == 2:
                return self.precpred(self._ctx, 3)
         

            if predIndex == 3:
                return self.precpred(self._ctx, 2)
         




