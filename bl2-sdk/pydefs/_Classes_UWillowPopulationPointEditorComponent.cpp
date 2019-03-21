#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointEditorComponent()
{
    py::class_< UWillowPopulationPointEditorComponent,  UPrimitiveComponent   >("UWillowPopulationPointEditorComponent")
        .def("StaticClass", &UWillowPopulationPointEditorComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}