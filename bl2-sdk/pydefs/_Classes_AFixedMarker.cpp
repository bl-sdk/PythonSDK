#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFixedMarker(py::object m)
{
    py::class_< AFixedMarker,  ATrigger   >(m, "AFixedMarker")
        .def_readwrite("MarkerTexture", &AFixedMarker::MarkerTexture)
        .def_readwrite("MarkerColor", &AFixedMarker::MarkerColor)
        .def_readwrite("MarkerScale", &AFixedMarker::MarkerScale)
        .def("StaticClass", &AFixedMarker::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AFixedMarker::OnToggle)
          ;
}