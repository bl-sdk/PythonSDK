#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeHealth()
{
    py::class_< UWillowTI_PrioritizeHealth,  UTI_Prioritize   >("UWillowTI_PrioritizeHealth")
        .def_readwrite("Priority", &UWillowTI_PrioritizeHealth::Priority)
        .def("StaticClass", &UWillowTI_PrioritizeHealth::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}