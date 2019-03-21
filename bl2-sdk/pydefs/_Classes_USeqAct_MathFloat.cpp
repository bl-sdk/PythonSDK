#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_MathFloat()
{
    class_< USeqAct_MathFloat, bases< USequenceAction >  , boost::noncopyable>("USeqAct_MathFloat", no_init)
        .def_readwrite("ValueA", &USeqAct_MathFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_MathFloat::ValueB)
        .def_readwrite("Result", &USeqAct_MathFloat::Result)
        .def_readwrite("Operation", &USeqAct_MathBase::Operation)
        .def("StaticClass", &USeqAct_MathFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}