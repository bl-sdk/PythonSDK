#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DivideInt()
{
    class_< USeqAct_DivideInt, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_DivideInt", no_init)
        .def_readwrite("ValueA", &USeqAct_DivideInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_DivideInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_DivideInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_DivideInt::IntResult)
        .def("StaticClass", &USeqAct_DivideInt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}