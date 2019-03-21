#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRigidBodyState(py::object m)
{
    py::class_< FRigidBodyState >(m, "FRigidBodyState")
        .def_readwrite("Position", &FRigidBodyState::Position)
        .def_readonly("UnknownData00", &FRigidBodyState::UnknownData00)
        .def_readwrite("Quaternion", &FRigidBodyState::Quaternion)
        .def_readwrite("LinVel", &FRigidBodyState::LinVel)
        .def_readwrite("AngVel", &FRigidBodyState::AngVel)
        .def_readwrite("bNewData", &FRigidBodyState::bNewData)
  ;
}