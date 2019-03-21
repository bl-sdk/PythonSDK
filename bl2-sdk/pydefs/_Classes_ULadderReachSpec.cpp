#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULadderReachSpec(py::object m)
{
    py::class_< ULadderReachSpec,  UReachSpec   >(m, "ULadderReachSpec")
        .def("StaticClass", &ULadderReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}