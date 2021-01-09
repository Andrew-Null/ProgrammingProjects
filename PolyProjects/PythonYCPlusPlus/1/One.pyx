import cython

cdef extern from One.cpp:
	pass

cdef extern from "One.h" namespace "tester":
	cdef cppclass PolyTester:
		HelloDeCPP()

from One cimport PolyTester

uno = new PolyTester
uno.HelloDeCPP()
