#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetWhoShootsAtMe(py::module &m)
{
    py::class_< UTargetIteratorPrioritizeTargetWhoShootsAtMe,  UTI_Prioritize   >(m, "UTargetIteratorPrioritizeTargetWhoShootsAtMe")
        .def("StaticClass", &UTargetIteratorPrioritizeTargetWhoShootsAtMe::StaticClass, py::return_value_policy::reference)
          ;
}