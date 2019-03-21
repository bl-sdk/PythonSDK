#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetAttributeValue()
{
    py::class_< USeqAct_GetAttributeValue,  USequenceAction   >("USeqAct_GetAttributeValue")
        .def_readwrite("AttributeDef", &USeqAct_GetAttributeValue::AttributeDef)
        .def_readwrite("ResultValue", &USeqAct_GetAttributeValue::ResultValue)
        .def("StaticClass", &USeqAct_GetAttributeValue::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}