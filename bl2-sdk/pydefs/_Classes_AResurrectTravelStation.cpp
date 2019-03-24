#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AResurrectTravelStation(py::module &m)
{
    py::class_< AResurrectTravelStation,  ATravelStation   >(m, "AResurrectTravelStation")
		.def_static("StaticClass", &AResurrectTravelStation::StaticClass, py::return_value_policy::reference)
        .def("CanResurrectHere", &AResurrectTravelStation::CanResurrectHere)
          ;
}