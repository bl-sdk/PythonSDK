#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeOpinion(py::module &m)
{
    py::class_< UWillowTI_PrioritizeOpinion,  UTI_Prioritize   >(m, "UWillowTI_PrioritizeOpinion")
		.def_static("StaticClass", &UWillowTI_PrioritizeOpinion::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Opinion", &UWillowTI_PrioritizeOpinion::Opinion)
          ;
}