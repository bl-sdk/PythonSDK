#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleCombatAreaRenderingComponent()
{
    py::class_< UWillowVehicleCombatAreaRenderingComponent,  UPrimitiveComponent   >("UWillowVehicleCombatAreaRenderingComponent")
        .def("StaticClass", &UWillowVehicleCombatAreaRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}