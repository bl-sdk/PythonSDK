#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetMatInstScalarParam()
{
    class_< USeqAct_SetMatInstScalarParam, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetMatInstScalarParam", no_init)
        .def_readwrite("MatInst", &USeqAct_SetMatInstScalarParam::MatInst)
        .def_readwrite("ParamName", &USeqAct_SetMatInstScalarParam::ParamName)
        .def_readwrite("ScalarValue", &USeqAct_SetMatInstScalarParam::ScalarValue)
        .def("StaticClass", &USeqAct_SetMatInstScalarParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}