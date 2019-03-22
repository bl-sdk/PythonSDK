#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULockoutDefinition(py::module &m)
{
    py::class_< ULockoutDefinition,  UGBXDefinition   >(m, "ULockoutDefinition")
        .def_readwrite("Style", &ULockoutDefinition::Style)
        .def_readwrite("Days", &ULockoutDefinition::Days)
        .def_readwrite("Hours", &ULockoutDefinition::Hours)
        .def_readwrite("Minutes", &ULockoutDefinition::Minutes)
        .def_readwrite("DlcExpansion", &ULockoutDefinition::DlcExpansion)
        .def("ComputePackedSystemTime", &ULockoutDefinition::ComputePackedSystemTime)
          ;
}