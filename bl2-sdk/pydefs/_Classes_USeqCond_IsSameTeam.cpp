#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsSameTeam(py::module &m)
{
    py::class_< USeqCond_IsSameTeam,  USequenceCondition   >(m, "USeqCond_IsSameTeam")
		.def_static("StaticClass", &USeqCond_IsSameTeam::StaticClass, py::return_value_policy::reference)
          ;
}