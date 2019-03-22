#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWorldDiscoveryAreaRenderingComponent(py::module &m)
{
    py::class_< UWorldDiscoveryAreaRenderingComponent,  UPrimitiveComponent   >(m, "UWorldDiscoveryAreaRenderingComponent")
        .def("StaticClass", &UWorldDiscoveryAreaRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}