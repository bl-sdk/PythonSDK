#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWindDirectionalSource()
{
    py::class_< AWindDirectionalSource,  AInfo   >("AWindDirectionalSource")
        .def_readwrite("Component", &AWindDirectionalSource::Component)
        .def("StaticClass", &AWindDirectionalSource::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}