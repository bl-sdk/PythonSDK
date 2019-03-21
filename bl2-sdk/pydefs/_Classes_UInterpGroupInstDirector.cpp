#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInstDirector()
{
    py::class_< UInterpGroupInstDirector,  UInterpGroupInst   >("UInterpGroupInstDirector")
        .def("StaticClass", &UInterpGroupInstDirector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}