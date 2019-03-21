#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingCustomization()
{
    py::class_< FPendingCustomization >("FPendingCustomization")
        .def_readwrite("Definition", &FPendingCustomization::Definition)
        .def_readwrite("Targets", &FPendingCustomization::Targets)
  ;
}