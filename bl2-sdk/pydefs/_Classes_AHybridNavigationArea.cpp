#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AHybridNavigationArea()
{
    py::class_< AHybridNavigationArea,  AInfo   >("AHybridNavigationArea")
        .def_readwrite("CustomAreaName", &AHybridNavigationArea::CustomAreaName)
        .def_readwrite("AreaColor", &AHybridNavigationArea::AreaColor)
        .def("StaticClass", &AHybridNavigationArea::StaticClass, py::return_value_policy::reference)
        .def("GetAreaName", &AHybridNavigationArea::GetAreaName)
        .staticmethod("StaticClass")
  ;
}