#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRenderCommandFence(py::object m)
{
    py::class_< FRenderCommandFence >(m, "FRenderCommandFence")
        .def_readwrite("NumPendingFences", &FRenderCommandFence::NumPendingFences)
  ;
}