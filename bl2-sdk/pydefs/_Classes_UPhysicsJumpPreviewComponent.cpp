#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsJumpPreviewComponent()
{
    py::class_< UPhysicsJumpPreviewComponent,  UWillowPreviewComponent   >("UPhysicsJumpPreviewComponent")
        .def_readwrite("JumpNode", &UPhysicsJumpPreviewComponent::JumpNode)
        .def("StaticClass", &UPhysicsJumpPreviewComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}