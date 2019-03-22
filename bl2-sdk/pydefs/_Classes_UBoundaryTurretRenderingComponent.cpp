#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBoundaryTurretRenderingComponent(py::module &m)
{
    py::class_< UBoundaryTurretRenderingComponent,  UPrimitiveComponent   >(m, "UBoundaryTurretRenderingComponent")
        .def("StaticClass", &UBoundaryTurretRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}