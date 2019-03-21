#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APortalMarker()
{
    py::class_< APortalMarker,  ANavigationPoint   >("APortalMarker")
        .def_readwrite("MyPortal", &APortalMarker::MyPortal)
        .def("StaticClass", &APortalMarker::StaticClass, py::return_value_policy::reference)
        .def("CanTeleport", &APortalMarker::CanTeleport)
        .staticmethod("StaticClass")
  ;
}