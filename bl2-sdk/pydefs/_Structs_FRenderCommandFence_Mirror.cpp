#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRenderCommandFence_Mirror(py::module &m)
{
    py::class_< FRenderCommandFence_Mirror >(m, "FRenderCommandFence_Mirror")
        .def_readwrite("NumPendingFences", &FRenderCommandFence_Mirror::NumPendingFences)
  ;
}