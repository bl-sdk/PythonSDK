#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationPointRenderingComponent(py::module &m)
{
    py::class_< UPopulationPointRenderingComponent,  UPrimitiveComponent   >(m, "UPopulationPointRenderingComponent")
		.def_static("StaticClass", &UPopulationPointRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}