#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCameraAnimInst()
{
    class_< UCameraAnimInst, bases< UObject >  , boost::noncopyable>("UCameraAnimInst", no_init)
        .def_readwrite("CamAnim", &UCameraAnimInst::CamAnim)
        .def_readwrite("InterpGroupInst", &UCameraAnimInst::InterpGroupInst)
        .def_readwrite("CurTime", &UCameraAnimInst::CurTime)
        .def_readwrite("BlendInTime", &UCameraAnimInst::BlendInTime)
        .def_readwrite("BlendOutTime", &UCameraAnimInst::BlendOutTime)
        .def_readwrite("CurBlendInTime", &UCameraAnimInst::CurBlendInTime)
        .def_readwrite("CurBlendOutTime", &UCameraAnimInst::CurBlendOutTime)
        .def_readwrite("PlayRate", &UCameraAnimInst::PlayRate)
        .def_readwrite("BasePlayScale", &UCameraAnimInst::BasePlayScale)
        .def_readwrite("TransientScaleModifier", &UCameraAnimInst::TransientScaleModifier)
        .def_readwrite("CurrentBlendWeight", &UCameraAnimInst::CurrentBlendWeight)
        .def_readwrite("RemainingTime", &UCameraAnimInst::RemainingTime)
        .def_readwrite("MoveTrack", &UCameraAnimInst::MoveTrack)
        .def_readwrite("MoveInst", &UCameraAnimInst::MoveInst)
        .def_readwrite("SourceAnimNode", &UCameraAnimInst::SourceAnimNode)
        .def_readwrite("PlaySpace", &UCameraAnimInst::PlaySpace)
        .def_readwrite("MirrorAxes", &UCameraAnimInst::MirrorAxes)
        .def_readwrite("UserPlaySpaceMatrix", &UCameraAnimInst::UserPlaySpaceMatrix)
        .def_readwrite("LastPPSettings", &UCameraAnimInst::LastPPSettings)
        .def_readwrite("LastPPSettingsAlpha", &UCameraAnimInst::LastPPSettingsAlpha)
        .def_readwrite("LastCameraLoc", &UCameraAnimInst::LastCameraLoc)
        .def("StaticClass", &UCameraAnimInst::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyMirroring", &UCameraAnimInst::ApplyMirroring)
        .def("SetPlaySpace", &UCameraAnimInst::SetPlaySpace)
        .def("ApplyTransientScaling", &UCameraAnimInst::ApplyTransientScaling)
        .def("Stop", &UCameraAnimInst::Stop)
        .def("AdvanceAnim", &UCameraAnimInst::AdvanceAnim)
        .def("Update", &UCameraAnimInst::Update)
        .def("Play", &UCameraAnimInst::Play)
        .staticmethod("StaticClass")
  ;
}