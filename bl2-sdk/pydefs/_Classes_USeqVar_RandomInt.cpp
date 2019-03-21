#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_RandomInt()
{
    py::class_< USeqVar_RandomInt,  USequenceVariable   >("USeqVar_RandomInt")
        .def_readwrite("Min", &USeqVar_RandomInt::Min)
        .def_readwrite("Max", &USeqVar_RandomInt::Max)
        .def_readwrite("IntValue", &USeqVar_Int::IntValue)
        .def("StaticClass", &USeqVar_RandomInt::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}