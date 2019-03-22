#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_ConstraintActor(py::module &m)
{
    py::class_< ARB_ConstraintActor,  ARigidBodyBase   >(m, "ARB_ConstraintActor")
        .def_readwrite("ConstraintActor1", &ARB_ConstraintActor::ConstraintActor1)
        .def_readwrite("ConstraintActor2", &ARB_ConstraintActor::ConstraintActor2)
        .def_readwrite("ConstraintSetup", &ARB_ConstraintActor::ConstraintSetup)
        .def_readwrite("ConstraintInstance", &ARB_ConstraintActor::ConstraintInstance)
        .def_readwrite("PulleyPivotActor1", &ARB_ConstraintActor::PulleyPivotActor1)
        .def_readwrite("PulleyPivotActor2", &ARB_ConstraintActor::PulleyPivotActor2)
        .def("StaticClass", &ARB_ConstraintActor::StaticClass, py::return_value_policy::reference)
        .def("OnToggleConstraintDrive", &ARB_ConstraintActor::OnToggleConstraintDrive)
        .def("OnToggle", &ARB_ConstraintActor::OnToggle)
        .def("OnDestroy", &ARB_ConstraintActor::OnDestroy)
        .def("TermConstraint", &ARB_ConstraintActor::TermConstraint)
        .def("InitConstraint", &ARB_ConstraintActor::InitConstraint)
        .def("SetDisableCollision", &ARB_ConstraintActor::SetDisableCollision)
          ;
}