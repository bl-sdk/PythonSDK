#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_CastToInt()
{
    class_< USeqAct_CastToInt, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_CastToInt", no_init)
        .def_readwrite("Value", &USeqAct_CastToInt::Value)
        .def_readwrite("IntResult", &USeqAct_CastToInt::IntResult)
        .def("StaticClass", &USeqAct_CastToInt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}