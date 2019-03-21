#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRigidBodyState()
{
    class_< FRigidBodyState >("FRigidBodyState", no_init)
        .def_readwrite("Position", &FRigidBodyState::Position)
        .def_readonly("UnknownData00", &FRigidBodyState::UnknownData00)
        .def_readwrite("Quaternion", &FRigidBodyState::Quaternion)
        .def_readwrite("LinVel", &FRigidBodyState::LinVel)
        .def_readwrite("AngVel", &FRigidBodyState::AngVel)
        .def_readwrite("bNewData", &FRigidBodyState::bNewData)
  ;
}