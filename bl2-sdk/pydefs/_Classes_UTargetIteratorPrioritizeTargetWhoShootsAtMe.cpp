#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetWhoShootsAtMe()
{
    py::class_< UTargetIteratorPrioritizeTargetWhoShootsAtMe,  UTI_Prioritize   >("UTargetIteratorPrioritizeTargetWhoShootsAtMe")
        .def("StaticClass", &UTargetIteratorPrioritizeTargetWhoShootsAtMe::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}