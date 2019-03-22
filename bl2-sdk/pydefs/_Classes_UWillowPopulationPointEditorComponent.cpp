#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointEditorComponent(py::module &m)
{
    py::class_< UWillowPopulationPointEditorComponent,  UPrimitiveComponent   >(m, "UWillowPopulationPointEditorComponent")
        .def("StaticClass", &UWillowPopulationPointEditorComponent::StaticClass, py::return_value_policy::reference)
          ;
}