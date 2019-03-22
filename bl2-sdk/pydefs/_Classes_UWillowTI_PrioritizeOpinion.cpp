#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeOpinion(py::module &m)
{
    py::class_< UWillowTI_PrioritizeOpinion,  UTI_Prioritize   >(m, "UWillowTI_PrioritizeOpinion")
        .def_readwrite("Opinion", &UWillowTI_PrioritizeOpinion::Opinion)
          ;
}