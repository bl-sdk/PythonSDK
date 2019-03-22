#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationPoint_Dynamic(py::module &m)
{
    py::class_< APopulationPoint_Dynamic,  APopulationPoint   >(m, "APopulationPoint_Dynamic")
        .def_readwrite("DynamicPointName", &APopulationPoint_Dynamic::DynamicPointName)
          ;
}