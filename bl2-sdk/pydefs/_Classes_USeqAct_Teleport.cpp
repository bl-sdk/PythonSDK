#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Teleport(py::module &m)
{
    py::class_< USeqAct_Teleport,  USequenceAction   >(m, "USeqAct_Teleport")
        .def_readwrite("TeleportDistance", &USeqAct_Teleport::TeleportDistance)
        .def_readwrite("TeleportVolumes", &USeqAct_Teleport::TeleportVolumes)
        .def_readwrite("Source", &USeqAct_Teleport::Source)
        .def_readwrite("ResurrectStation", &USeqAct_Teleport::ResurrectStation)
        .def("eventGetObjClassVersion", &USeqAct_Teleport::eventGetObjClassVersion)
        .def("GetFirstValidActorFromObjectInput", &USeqAct_Teleport::GetFirstValidActorFromObjectInput, py::return_value_policy::reference)
        .def("GetTeleportHoldingCell", &USeqAct_Teleport::GetTeleportHoldingCell, py::return_value_policy::reference)
        .def("GetTeleportDestination", &USeqAct_Teleport::GetTeleportDestination, py::return_value_policy::reference)
        .def("ShouldTeleport", &USeqAct_Teleport::ShouldTeleport)
          ;
}