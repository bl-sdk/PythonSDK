#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAIMoveNodeRenderComponent()
{
    py::class_< UGearboxAIMoveNodeRenderComponent,  UPrimitiveComponent   >("UGearboxAIMoveNodeRenderComponent")
        .def("StaticClass", &UGearboxAIMoveNodeRenderComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}