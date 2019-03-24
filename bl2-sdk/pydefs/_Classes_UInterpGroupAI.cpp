#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupAI(py::module &m)
{
    py::class_< UInterpGroupAI,  UInterpGroup   >(m, "UInterpGroupAI")
		.def_static("StaticClass", &UInterpGroupAI::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StageMarkGroup", &UInterpGroupAI::StageMarkGroup)
        .def_readwrite("Alignment", &UInterpGroupAI::Alignment)
        .def_readwrite("AlignmentLerpTime", &UInterpGroupAI::AlignmentLerpTime)
          ;
}