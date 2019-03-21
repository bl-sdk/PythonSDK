#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeAimOffset_BoundaryTurret(py::object m)
{
    py::class_< UWillowAnimNodeAimOffset_BoundaryTurret,  UWillowAnimNodeAimOffset   >(m, "UWillowAnimNodeAimOffset_BoundaryTurret")
        .def("StaticClass", &UWillowAnimNodeAimOffset_BoundaryTurret::StaticClass, py::return_value_policy::reference)
        .def("GetDesiredAim", &UWillowAnimNodeAimOffset_BoundaryTurret::GetDesiredAim)
          ;
}