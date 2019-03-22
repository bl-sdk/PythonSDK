#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeAimOffset_BoundaryTurret(py::module &m)
{
    py::class_< UWillowAnimNodeAimOffset_BoundaryTurret,  UWillowAnimNodeAimOffset   >(m, "UWillowAnimNodeAimOffset_BoundaryTurret")
        .def("GetDesiredAim", &UWillowAnimNodeAimOffset_BoundaryTurret::GetDesiredAim)
          ;
}