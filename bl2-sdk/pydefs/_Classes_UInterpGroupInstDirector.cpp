#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInstDirector(py::object m)
{
    py::class_< UInterpGroupInstDirector,  UInterpGroupInst   >(m, "UInterpGroupInstDirector")
        .def("StaticClass", &UInterpGroupInstDirector::StaticClass, py::return_value_policy::reference)
          ;
}