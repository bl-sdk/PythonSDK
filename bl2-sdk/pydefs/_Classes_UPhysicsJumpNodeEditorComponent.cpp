#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsJumpNodeEditorComponent()
{
    py::class_< UPhysicsJumpNodeEditorComponent,  UPrimitiveComponent   >("UPhysicsJumpNodeEditorComponent")
        .def("StaticClass", &UPhysicsJumpNodeEditorComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}