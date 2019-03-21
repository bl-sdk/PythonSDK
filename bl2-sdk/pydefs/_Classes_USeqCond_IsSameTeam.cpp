#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsSameTeam(py::object m)
{
    py::class_< USeqCond_IsSameTeam,  USequenceCondition   >(m, "USeqCond_IsSameTeam")
        .def("StaticClass", &USeqCond_IsSameTeam::StaticClass, py::return_value_policy::reference)
          ;
}