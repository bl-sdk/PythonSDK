#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowObstacleRenderComponent()
{
    py::class_< UWillowObstacleRenderComponent,  UPrimitiveComponent   >("UWillowObstacleRenderComponent")
        .def("StaticClass", &UWillowObstacleRenderComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}