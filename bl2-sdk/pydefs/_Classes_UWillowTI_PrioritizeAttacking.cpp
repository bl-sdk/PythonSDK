#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeAttacking(py::module &m)
{
    py::class_< UWillowTI_PrioritizeAttacking,  UTI_Prioritize   >(m, "UWillowTI_PrioritizeAttacking")
        .def_readwrite("DecayRate", &UWillowTI_PrioritizeAttacking::DecayRate)
        .def_readwrite("FullyEngagedPct", &UWillowTI_PrioritizeAttacking::FullyEngagedPct)
        .def("StaticClass", &UWillowTI_PrioritizeAttacking::StaticClass, py::return_value_policy::reference)
          ;
}