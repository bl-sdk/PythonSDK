#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USwatTurnReachSpec()
{
    py::class_< USwatTurnReachSpec,  UForcedReachSpec   >("USwatTurnReachSpec")
        .def_readwrite("SpecDirection", &USwatTurnReachSpec::SpecDirection)
        .def("StaticClass", &USwatTurnReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}