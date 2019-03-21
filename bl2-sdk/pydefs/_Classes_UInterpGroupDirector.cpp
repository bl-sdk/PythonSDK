#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupDirector()
{
    py::class_< UInterpGroupDirector,  UInterpGroup   >("UInterpGroupDirector")
        .def_readwrite("AttachedGroupName", &UInterpGroupDirector::AttachedGroupName)
        .def("StaticClass", &UInterpGroupDirector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}