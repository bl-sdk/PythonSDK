#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_SinglePopulationDeath(py::module &m)
{
    py::class_< USeqEvent_SinglePopulationDeath,  USequenceEvent   >(m, "USeqEvent_SinglePopulationDeath")
		.def_static("StaticClass", &USeqEvent_SinglePopulationDeath::StaticClass, py::return_value_policy::reference)
          ;
}