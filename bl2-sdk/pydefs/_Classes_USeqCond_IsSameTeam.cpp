#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsSameTeam()
{
    py::class_< USeqCond_IsSameTeam,  USequenceCondition   >("USeqCond_IsSameTeam")
        .def("StaticClass", &USeqCond_IsSameTeam::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}