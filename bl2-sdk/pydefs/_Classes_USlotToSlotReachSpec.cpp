#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USlotToSlotReachSpec(py::object m)
{
    py::class_< USlotToSlotReachSpec,  UForcedReachSpec   >(m, "USlotToSlotReachSpec")
        .def_readwrite("SpecDirection", &USlotToSlotReachSpec::SpecDirection)
        .def("StaticClass", &USlotToSlotReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}