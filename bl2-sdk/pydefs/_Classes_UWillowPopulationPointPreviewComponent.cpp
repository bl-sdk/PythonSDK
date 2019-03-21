#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointPreviewComponent()
{
    py::class_< UWillowPopulationPointPreviewComponent,  UWillowPreviewComponent   >("UWillowPopulationPointPreviewComponent")
        .def_readwrite("PointDef", &UWillowPopulationPointPreviewComponent::PointDef)
        .def("StaticClass", &UWillowPopulationPointPreviewComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}