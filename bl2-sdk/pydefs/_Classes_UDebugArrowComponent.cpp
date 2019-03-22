#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDebugArrowComponent(py::module &m)
{
    py::class_< UDebugArrowComponent,  UArrowComponent   >(m, "UDebugArrowComponent")
          ;
}