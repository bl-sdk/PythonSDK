#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleCombatAreaRenderingComponent(py::module &m)
{
    py::class_< UWillowVehicleCombatAreaRenderingComponent,  UPrimitiveComponent   >(m, "UWillowVehicleCombatAreaRenderingComponent")
          ;
}