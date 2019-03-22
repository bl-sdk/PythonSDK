#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsJumpNodeEditorComponent(py::module &m)
{
    py::class_< UPhysicsJumpNodeEditorComponent,  UPrimitiveComponent   >(m, "UPhysicsJumpNodeEditorComponent")
          ;
}