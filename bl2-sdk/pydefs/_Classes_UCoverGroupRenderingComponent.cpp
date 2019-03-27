#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverGroupRenderingComponent(py::module &m)
{
    py::class_< UCoverGroupRenderingComponent,  UPrimitiveComponent   >(m, "UCoverGroupRenderingComponent")
		.def_static("StaticClass", &UCoverGroupRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}