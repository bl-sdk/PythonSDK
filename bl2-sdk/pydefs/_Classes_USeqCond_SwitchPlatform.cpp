#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchPlatform(py::object m)
{
    py::class_< USeqCond_SwitchPlatform,  USequenceCondition   >(m, "USeqCond_SwitchPlatform")
        .def("StaticClass", &USeqCond_SwitchPlatform::StaticClass, py::return_value_policy::reference)
          ;
}