#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SubtractInt()
{
    class_< USeqAct_SubtractInt, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SubtractInt", no_init)
        .def_readwrite("ValueA", &USeqAct_SubtractInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_SubtractInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_SubtractInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_SubtractInt::IntResult)
        .def("StaticClass", &USeqAct_SubtractInt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}