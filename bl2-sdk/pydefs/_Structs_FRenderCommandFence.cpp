#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRenderCommandFence()
{
    py::class_< FRenderCommandFence >("FRenderCommandFence")
        .def_readwrite("NumPendingFences", &FRenderCommandFence::NumPendingFences)
  ;
}