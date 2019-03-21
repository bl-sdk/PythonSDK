#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_String()
{
    py::class_< USeqVar_String,  USequenceVariable   >("USeqVar_String")
        .def_readwrite("StrValue", &USeqVar_String::StrValue)
        .def("StaticClass", &USeqVar_String::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}