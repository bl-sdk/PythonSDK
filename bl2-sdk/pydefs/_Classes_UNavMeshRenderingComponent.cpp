#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshRenderingComponent(py::module &m)
{
    py::class_< UNavMeshRenderingComponent,  UPrimitiveComponent   >(m, "UNavMeshRenderingComponent")
		.def_static("StaticClass", &UNavMeshRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}