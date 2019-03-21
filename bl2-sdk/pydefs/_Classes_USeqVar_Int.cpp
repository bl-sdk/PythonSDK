#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Int()
{
    py::class_< USeqVar_Int,  USequenceVariable   >("USeqVar_Int")
        .def_readwrite("IntValue", &USeqVar_Int::IntValue)
        .def("StaticClass", &USeqVar_Int::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}