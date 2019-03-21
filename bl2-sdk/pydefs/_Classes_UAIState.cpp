#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIState(py::object m)
{
    py::class_< UAIState,  UAIStateBase   >(m, "UAIState")
        .def("StaticClass", &UAIState::StaticClass, py::return_value_policy::reference)
          ;
}