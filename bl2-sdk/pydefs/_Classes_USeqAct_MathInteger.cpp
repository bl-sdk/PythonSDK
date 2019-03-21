#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_MathInteger()
{
    class_< USeqAct_MathInteger, bases< USeqAct_MathBase >  , boost::noncopyable>("USeqAct_MathInteger", no_init)
        .def_readwrite("ValueA", &USeqAct_MathInteger::ValueA)
        .def_readwrite("ValueB", &USeqAct_MathInteger::ValueB)
        .def_readwrite("Result", &USeqAct_MathInteger::Result)
        .def("StaticClass", &USeqAct_MathInteger::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}