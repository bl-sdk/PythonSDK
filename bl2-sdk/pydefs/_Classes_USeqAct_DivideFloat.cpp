#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DivideFloat()
{
    class_< USeqAct_DivideFloat, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_DivideFloat", no_init)
        .def_readwrite("ValueA", &USeqAct_DivideFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_DivideFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_DivideFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_DivideFloat::IntResult)
        .def("StaticClass", &USeqAct_DivideFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}