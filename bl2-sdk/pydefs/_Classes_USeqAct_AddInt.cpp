#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AddInt()
{
    class_< USeqAct_AddInt, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_AddInt", no_init)
        .def_readwrite("ValueA", &USeqAct_AddInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_AddInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_AddInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_AddInt::IntResult)
        .def("StaticClass", &USeqAct_AddInt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}