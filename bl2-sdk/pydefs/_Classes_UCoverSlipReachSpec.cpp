#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverSlipReachSpec()
{
    py::class_< UCoverSlipReachSpec,  UForcedReachSpec   >("UCoverSlipReachSpec")
        .def_readwrite("SpecDirection", &UCoverSlipReachSpec::SpecDirection)
        .def("StaticClass", &UCoverSlipReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}