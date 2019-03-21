#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupDirector(py::object m)
{
    py::class_< UInterpGroupDirector,  UInterpGroup   >(m, "UInterpGroupDirector")
        .def_readwrite("AttachedGroupName", &UInterpGroupDirector::AttachedGroupName)
        .def("StaticClass", &UInterpGroupDirector::StaticClass, py::return_value_policy::reference)
          ;
}