#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPathRenderingComponent(py::module &m)
{
    py::class_< UPathRenderingComponent,  UPrimitiveComponent   >(m, "UPathRenderingComponent")
          ;
}