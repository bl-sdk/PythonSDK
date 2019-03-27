#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSequenceAdditiveBlend(py::module &m)
{
    py::class_< UWillowAnimNodeSequenceAdditiveBlend,  UAnimNodeSequence   >(m, "UWillowAnimNodeSequenceAdditiveBlend")
		.def_static("StaticClass", &UWillowAnimNodeSequenceAdditiveBlend::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AddAnimSeqName", &UWillowAnimNodeSequenceAdditiveBlend::AddAnimSeqName)
        .def_readwrite("AddAnimSeq", &UWillowAnimNodeSequenceAdditiveBlend::AddAnimSeq)
        .def_readwrite("AddAnimLinkupIndex", &UWillowAnimNodeSequenceAdditiveBlend::AddAnimLinkupIndex)
        .def("SetAddAnim", &UWillowAnimNodeSequenceAdditiveBlend::SetAddAnim)
        .def("SetAnim", &UWillowAnimNodeSequenceAdditiveBlend::SetAnim)
          ;
}