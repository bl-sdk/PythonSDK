#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_CastToFloat()
{
    class_< USeqAct_CastToFloat, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_CastToFloat", no_init)
        .def_readwrite("Value", &USeqAct_CastToFloat::Value)
        .def_readwrite("FloatResult", &USeqAct_CastToFloat::FloatResult)
        .def("StaticClass", &USeqAct_CastToFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}