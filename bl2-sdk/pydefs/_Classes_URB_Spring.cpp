#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_Spring()
{
    class_< URB_Spring, bases< UActorComponent >  , boost::noncopyable>("URB_Spring", no_init)
        .def_readwrite("Component1", &URB_Spring::Component1)
        .def_readwrite("BoneName1", &URB_Spring::BoneName1)
        .def_readwrite("Component2", &URB_Spring::Component2)
        .def_readwrite("BoneName2", &URB_Spring::BoneName2)
        .def_readwrite("SceneIndex", &URB_Spring::SceneIndex)
        .def_readwrite("SpringData", &URB_Spring::SpringData)
        .def_readwrite("TimeSinceActivation", &URB_Spring::TimeSinceActivation)
        .def_readwrite("MinBodyMass", &URB_Spring::MinBodyMass)
        .def_readwrite("SpringSaturateDist", &URB_Spring::SpringSaturateDist)
        .def_readwrite("SpringMaxForce", &URB_Spring::SpringMaxForce)
        .def_readwrite("MaxForceMassRatio", &URB_Spring::MaxForceMassRatio)
        .def_readwrite("SpringMaxForceTimeScale", &URB_Spring::SpringMaxForceTimeScale)
        .def_readwrite("DampSaturateVel", &URB_Spring::DampSaturateVel)
        .def_readwrite("DampMaxForce", &URB_Spring::DampMaxForce)
        .def("StaticClass", &URB_Spring::StaticClass, return_value_policy< reference_existing_object >())
        .def("Clear", &URB_Spring::Clear)
        .def("SetComponents", &URB_Spring::SetComponents)
        .staticmethod("StaticClass")
  ;
}