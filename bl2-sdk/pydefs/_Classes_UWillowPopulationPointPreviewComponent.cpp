#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointPreviewComponent(py::module &m)
{
    py::class_< UWillowPopulationPointPreviewComponent,  UWillowPreviewComponent   >(m, "UWillowPopulationPointPreviewComponent")
		.def_static("StaticClass", &UWillowPopulationPointPreviewComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PointDef", &UWillowPopulationPointPreviewComponent::PointDef)
          ;
}