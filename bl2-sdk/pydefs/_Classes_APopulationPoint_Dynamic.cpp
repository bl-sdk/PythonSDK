#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationPoint_Dynamic(py::module &m)
{
    py::class_< APopulationPoint_Dynamic,  APopulationPoint   >(m, "APopulationPoint_Dynamic")
		.def_static("StaticClass", &APopulationPoint_Dynamic::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DynamicPointName", &APopulationPoint_Dynamic::DynamicPointName)
          ;
}