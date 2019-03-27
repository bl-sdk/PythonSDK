#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AHybridNavigationArea(py::module &m)
{
    py::class_< AHybridNavigationArea,  AInfo   >(m, "AHybridNavigationArea")
		.def_static("StaticClass", &AHybridNavigationArea::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomAreaName", &AHybridNavigationArea::CustomAreaName)
        .def_readwrite("AreaColor", &AHybridNavigationArea::AreaColor)
        .def("GetAreaName", &AHybridNavigationArea::GetAreaName)
          ;
}