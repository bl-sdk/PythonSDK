#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingCustomization(py::module &m)
{
    py::class_< FPendingCustomization >(m, "FPendingCustomization")
        .def_readwrite("Definition", &FPendingCustomization::Definition)
        .def_readwrite("Targets", &FPendingCustomization::Targets)
  ;
}