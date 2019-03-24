#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWwiseSoundGroup(py::module &m)
{
    py::class_< AWwiseSoundGroup,  AKeypoint   >(m, "AWwiseSoundGroup")
		.def_static("StaticClass", &AWwiseSoundGroup::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IISpecialOcclusionProvider", &AWwiseSoundGroup::VfTable_IISpecialOcclusionProvider)
        .def_readwrite("VfTable_IISpecialOcclusionAccumulator", &AWwiseSoundGroup::VfTable_IISpecialOcclusionAccumulator)
        .def_readwrite("Members", &AWwiseSoundGroup::Members)
        .def_readwrite("ActiveOccluders", &AWwiseSoundGroup::ActiveOccluders)
        .def("RemoveOcclusionProvider", &AWwiseSoundGroup::RemoveOcclusionProvider)
        .def("SetOcclusionForProvider", &AWwiseSoundGroup::SetOcclusionForProvider)
        .def("GetOcclusionAmount", &AWwiseSoundGroup::GetOcclusionAmount)
        .def("SetAkSwitchObject", &AWwiseSoundGroup::SetAkSwitchObject)
        .def("SetRTPCObjectValue", &AWwiseSoundGroup::SetRTPCObjectValue)
          ;
}