#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APortalMarker(py::module &m)
{
    py::class_< APortalMarker,  ANavigationPoint   >(m, "APortalMarker")
		.def_static("StaticClass", &APortalMarker::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyPortal", &APortalMarker::MyPortal)
        .def("CanTeleport", &APortalMarker::CanTeleport)
          ;
}