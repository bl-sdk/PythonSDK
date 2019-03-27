#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFixedMarker(py::module &m)
{
    py::class_< AFixedMarker,  ATrigger   >(m, "AFixedMarker")
		.def_static("StaticClass", &AFixedMarker::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MarkerTexture", &AFixedMarker::MarkerTexture)
        .def_readwrite("MarkerColor", &AFixedMarker::MarkerColor)
        .def_readwrite("MarkerScale", &AFixedMarker::MarkerScale)
        .def("OnToggle", &AFixedMarker::OnToggle)
          ;
}