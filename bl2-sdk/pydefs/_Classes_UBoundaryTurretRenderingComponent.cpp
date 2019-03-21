#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBoundaryTurretRenderingComponent()
{
    py::class_< UBoundaryTurretRenderingComponent,  UPrimitiveComponent   >("UBoundaryTurretRenderingComponent")
        .def("StaticClass", &UBoundaryTurretRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}