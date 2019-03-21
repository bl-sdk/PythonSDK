#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFixedMarker()
{
    py::class_< AFixedMarker,  ATrigger   >("AFixedMarker")
        .def_readwrite("MarkerTexture", &AFixedMarker::MarkerTexture)
        .def_readwrite("MarkerColor", &AFixedMarker::MarkerColor)
        .def_readwrite("MarkerScale", &AFixedMarker::MarkerScale)
        .def("StaticClass", &AFixedMarker::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AFixedMarker::OnToggle)
        .staticmethod("StaticClass")
  ;
}