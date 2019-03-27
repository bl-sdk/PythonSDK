#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_MatchTransform(py::module &m)
{
    py::class_< UBehavior_MatchTransform,  UBehaviorBase   >(m, "UBehavior_MatchTransform")
		.def_static("StaticClass", &UBehavior_MatchTransform::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AttachmentName", &UBehavior_MatchTransform::AttachmentName)
        .def_readwrite("Source", &UBehavior_MatchTransform::Source)
        .def("ApplyBehaviorToContext", &UBehavior_MatchTransform::ApplyBehaviorToContext)
        .def("ApplyOffsets", &UBehavior_MatchTransform::ApplyOffsets)
          ;
}