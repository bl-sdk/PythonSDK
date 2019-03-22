#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeHealth(py::module &m)
{
    py::class_< UWillowTI_PrioritizeHealth,  UTI_Prioritize   >(m, "UWillowTI_PrioritizeHealth")
        .def_readwrite("Priority", &UWillowTI_PrioritizeHealth::Priority)
        .def("StaticClass", &UWillowTI_PrioritizeHealth::StaticClass, py::return_value_policy::reference)
          ;
}