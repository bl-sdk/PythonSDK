#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerStart(py::module &m)
{
    py::class_< APlayerStart,  ANavigationPoint   >(m, "APlayerStart")
        .def_readwrite("TeamIndex", &APlayerStart::TeamIndex)
        .def_readwrite("Score", &APlayerStart::Score)
        .def_readwrite("SelectionIndex", &APlayerStart::SelectionIndex)
        .def("StaticClass", &APlayerStart::StaticClass, py::return_value_policy::reference)
        .def("eventPostRenderFor", &APlayerStart::eventPostRenderFor)
        .def("OnToggle", &APlayerStart::OnToggle)
          ;
}