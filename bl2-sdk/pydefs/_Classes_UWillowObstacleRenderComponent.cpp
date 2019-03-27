#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowObstacleRenderComponent(py::module &m)
{
    py::class_< UWillowObstacleRenderComponent,  UPrimitiveComponent   >(m, "UWillowObstacleRenderComponent")
		.def_static("StaticClass", &UWillowObstacleRenderComponent::StaticClass, py::return_value_policy::reference)
          ;
}