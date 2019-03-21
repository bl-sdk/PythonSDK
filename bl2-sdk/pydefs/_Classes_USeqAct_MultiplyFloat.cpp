#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_MultiplyFloat()
{
    class_< USeqAct_MultiplyFloat, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_MultiplyFloat", no_init)
        .def_readwrite("ValueA", &USeqAct_MultiplyFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_MultiplyFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_MultiplyFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_MultiplyFloat::IntResult)
        .def("StaticClass", &USeqAct_MultiplyFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}