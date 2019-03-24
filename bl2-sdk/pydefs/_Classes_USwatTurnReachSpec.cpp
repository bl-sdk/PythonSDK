#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USwatTurnReachSpec(py::module &m)
{
    py::class_< USwatTurnReachSpec,  UForcedReachSpec   >(m, "USwatTurnReachSpec")
		.def_static("StaticClass", &USwatTurnReachSpec::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpecDirection", &USwatTurnReachSpec::SpecDirection)
          ;
}