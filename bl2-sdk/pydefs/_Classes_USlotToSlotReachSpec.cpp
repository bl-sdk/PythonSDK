#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USlotToSlotReachSpec(py::module &m)
{
    py::class_< USlotToSlotReachSpec,  UForcedReachSpec   >(m, "USlotToSlotReachSpec")
		.def_static("StaticClass", &USlotToSlotReachSpec::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpecDirection", &USlotToSlotReachSpec::SpecDirection)
          ;
}