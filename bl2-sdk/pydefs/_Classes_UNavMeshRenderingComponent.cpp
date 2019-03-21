#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshRenderingComponent(py::object m)
{
    py::class_< UNavMeshRenderingComponent,  UPrimitiveComponent   >(m, "UNavMeshRenderingComponent")
        .def("StaticClass", &UNavMeshRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}