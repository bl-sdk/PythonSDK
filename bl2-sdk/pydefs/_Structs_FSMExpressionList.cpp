#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSMExpressionList()
{
    class_< FSMExpressionList >("FSMExpressionList", no_init)
        .def_readwrite("Expression", &FSMExpressionList::Expression)
        .def_readwrite("SMD", &FSMExpressionList::SMD)
  ;
}