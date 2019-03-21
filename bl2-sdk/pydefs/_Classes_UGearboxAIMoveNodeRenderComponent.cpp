#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAIMoveNodeRenderComponent(py::object m)
{
    py::class_< UGearboxAIMoveNodeRenderComponent,  UPrimitiveComponent   >(m, "UGearboxAIMoveNodeRenderComponent")
        .def("StaticClass", &UGearboxAIMoveNodeRenderComponent::StaticClass, py::return_value_policy::reference)
          ;
}