#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRenderCommandFence_Mirror()
{
    py::class_< FRenderCommandFence_Mirror >("FRenderCommandFence_Mirror")
        .def_readwrite("NumPendingFences", &FRenderCommandFence_Mirror::NumPendingFences)
  ;
}