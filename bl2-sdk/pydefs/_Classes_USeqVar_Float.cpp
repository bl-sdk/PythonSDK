#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Float()
{
    py::class_< USeqVar_Float,  USequenceVariable   >("USeqVar_Float")
        .def_readwrite("FloatValue", &USeqVar_Float::FloatValue)
        .def("StaticClass", &USeqVar_Float::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}