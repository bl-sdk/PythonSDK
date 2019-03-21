#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AResurrectTravelStation()
{
    py::class_< AResurrectTravelStation,  ATravelStation   >("AResurrectTravelStation")
        .def("StaticClass", &AResurrectTravelStation::StaticClass, py::return_value_policy::reference)
        .def("CanResurrectHere", &AResurrectTravelStation::CanResurrectHere)
        .staticmethod("StaticClass")
  ;
}