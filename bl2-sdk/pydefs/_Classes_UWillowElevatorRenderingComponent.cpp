#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowElevatorRenderingComponent(py::module &m)
{
    py::class_< UWillowElevatorRenderingComponent,  UPrimitiveComponent   >(m, "UWillowElevatorRenderingComponent")
          ;
}