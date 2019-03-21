#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeOpinion()
{
    py::class_< UWillowTI_PrioritizeOpinion,  UTI_Prioritize   >("UWillowTI_PrioritizeOpinion")
        .def_readwrite("Opinion", &UWillowTI_PrioritizeOpinion::Opinion)
        .def("StaticClass", &UWillowTI_PrioritizeOpinion::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}