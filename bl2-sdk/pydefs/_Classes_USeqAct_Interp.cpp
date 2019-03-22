#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Interp(py::module &m)
{
    py::class_< USeqAct_Interp,  USeqAct_Latent   >(m, "USeqAct_Interp")
        .def_readwrite("PlayRate", &USeqAct_Interp::PlayRate)
        .def_readwrite("Position", &USeqAct_Interp::Position)
        .def_readwrite("ForceStartPosition", &USeqAct_Interp::ForceStartPosition)
        .def_readwrite("LinkedCover", &USeqAct_Interp::LinkedCover)
        .def_readwrite("InterpData", &USeqAct_Interp::InterpData)
        .def_readwrite("GroupInst", &USeqAct_Interp::GroupInst)
        .def_readwrite("ReplicatedActorClass", &USeqAct_Interp::ReplicatedActorClass)
        .def_readwrite("ReplicatedActor", &USeqAct_Interp::ReplicatedActor)
        .def_readwrite("PreferredSplitScreenNum", &USeqAct_Interp::PreferredSplitScreenNum)
        .def_readwrite("CameraCuts", &USeqAct_Interp::CameraCuts)
        .def_readwrite("TerminationTime", &USeqAct_Interp::TerminationTime)
        .def_readwrite("RenderingOverrides", &USeqAct_Interp::RenderingOverrides)
        .def("IsNetworkReady", &USeqAct_Interp::IsNetworkReady)
        .def("eventGetObjClassVersion", &USeqAct_Interp::eventGetObjClassVersion)
        .def("Reset", &USeqAct_Interp::Reset)
        .def("AddPlayerToDirectorTracks", &USeqAct_Interp::AddPlayerToDirectorTracks)
        .def("Stop", &USeqAct_Interp::Stop)
        .def("SetPosition", &USeqAct_Interp::SetPosition)
          ;
}