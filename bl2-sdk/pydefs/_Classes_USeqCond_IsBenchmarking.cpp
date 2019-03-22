#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsBenchmarking(py::module &m)
{
    py::class_< USeqCond_IsBenchmarking,  USequenceCondition   >(m, "USeqCond_IsBenchmarking")
        .def("StaticClass", &USeqCond_IsBenchmarking::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqCond_IsBenchmarking::eventGetObjClassVersion)
          ;
}