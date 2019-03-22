#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverGroupRenderingComponent(py::module &m)
{
    py::class_< UCoverGroupRenderingComponent,  UPrimitiveComponent   >(m, "UCoverGroupRenderingComponent")
          ;
}