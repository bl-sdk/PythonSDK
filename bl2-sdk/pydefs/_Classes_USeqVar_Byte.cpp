#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Byte()
{
    py::class_< USeqVar_Byte,  USequenceVariable   >("USeqVar_Byte")
        .def("StaticClass", &USeqVar_Byte::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}