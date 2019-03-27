#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverSlot(py::module &m)
{
    py::class_< FCoverSlot >(m, "FCoverSlot")
        .def_readwrite("SlotOwner", &FCoverSlot::SlotOwner)
        .def_readwrite("SlotValidAfterTime", &FCoverSlot::SlotValidAfterTime)
        .def_readwrite("ForceCoverType", &FCoverSlot::ForceCoverType)
        .def_readwrite("CoverType", &FCoverSlot::CoverType)
        .def_readwrite("LocationDescription", &FCoverSlot::LocationDescription)
        .def_readwrite("LocationOffset", &FCoverSlot::LocationOffset)
        .def_readwrite("RotationOffset", &FCoverSlot::RotationOffset)
        .def_readwrite("Actions", &FCoverSlot::Actions)
        .def_readwrite("FireLinks", &FCoverSlot::FireLinks)
        .def_readwrite("RejectedFireLinks", &FCoverSlot::RejectedFireLinks)
        .def_readwrite("ExposedCoverPackedProperties", &FCoverSlot::ExposedCoverPackedProperties)
        .def_readwrite("TurnTargetPackedProperties", &FCoverSlot::TurnTargetPackedProperties)
        .def_readwrite("SlipRefs", &FCoverSlot::SlipRefs)
        .def_readwrite("OverlapClaimsList", &FCoverSlot::OverlapClaimsList)
  ;
}