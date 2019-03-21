#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPostProcessChain()
{
    py::class_< UPostProcessChain,  UObject   >("UPostProcessChain")
        .def_readwrite("Effects", &UPostProcessChain::Effects)
        .def("StaticClass", &UPostProcessChain::StaticClass, py::return_value_policy::reference)
        .def("FindPostProcessEffect", &UPostProcessChain::FindPostProcessEffect, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}