#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlTrail()
{
    class_< USkelControlTrail, bases< USkelControlBase >  , boost::noncopyable>("USkelControlTrail", no_init)
        .def_readwrite("ChainLength", &USkelControlTrail::ChainLength)
        .def_readwrite("ChainBoneAxis", &USkelControlTrail::ChainBoneAxis)
        .def_readwrite("TrailRelaxation", &USkelControlTrail::TrailRelaxation)
        .def_readwrite("StretchLimit", &USkelControlTrail::StretchLimit)
        .def_readwrite("FakeVelocity", &USkelControlTrail::FakeVelocity)
        .def_readwrite("ThisTimstep", &USkelControlTrail::ThisTimstep)
        .def_readwrite("TrailBoneLocations", &USkelControlTrail::TrailBoneLocations)
        .def_readonly("UnknownData00", &USkelControlTrail::UnknownData00)
        .def_readwrite("OldLocalToWorld", &USkelControlTrail::OldLocalToWorld)
        .def("StaticClass", &USkelControlTrail::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}