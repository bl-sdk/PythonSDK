#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPostProcessChain(py::module &m)
{
    py::class_< UPostProcessChain,  UObject   >(m, "UPostProcessChain")
        .def_readwrite("Effects", &UPostProcessChain::Effects)
        .def("StaticClass", &UPostProcessChain::StaticClass, py::return_value_policy::reference)
        .def("FindPostProcessEffect", &UPostProcessChain::FindPostProcessEffect, py::return_value_policy::reference)
          ;
}