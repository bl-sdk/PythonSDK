#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SubtractFloat()
{
    class_< USeqAct_SubtractFloat, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SubtractFloat", no_init)
        .def_readwrite("ValueA", &USeqAct_SubtractFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_SubtractFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_SubtractFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_SubtractFloat::IntResult)
        .def("StaticClass", &USeqAct_SubtractFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}