#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AddFloat()
{
    class_< USeqAct_AddFloat, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_AddFloat", no_init)
        .def_readwrite("ValueA", &USeqAct_AddFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_AddFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_AddFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_AddFloat::IntResult)
        .def("StaticClass", &USeqAct_AddFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}