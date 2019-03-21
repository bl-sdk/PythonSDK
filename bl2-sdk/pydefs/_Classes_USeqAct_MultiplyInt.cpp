#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_MultiplyInt()
{
    class_< USeqAct_MultiplyInt, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_MultiplyInt", no_init)
        .def_readwrite("ValueA", &USeqAct_MultiplyInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_MultiplyInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_MultiplyInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_MultiplyInt::IntResult)
        .def("StaticClass", &USeqAct_MultiplyInt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}