#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_ConstraintSetup()
{
    py::class_< URB_ConstraintSetup,  UObject   >("URB_ConstraintSetup")
        .def_readwrite("JointName", &URB_ConstraintSetup::JointName)
        .def_readwrite("ConstraintBone1", &URB_ConstraintSetup::ConstraintBone1)
        .def_readwrite("ConstraintBone2", &URB_ConstraintSetup::ConstraintBone2)
        .def_readwrite("Pos1", &URB_ConstraintSetup::Pos1)
        .def_readwrite("PriAxis1", &URB_ConstraintSetup::PriAxis1)
        .def_readwrite("SecAxis1", &URB_ConstraintSetup::SecAxis1)
        .def_readwrite("Pos2", &URB_ConstraintSetup::Pos2)
        .def_readwrite("PriAxis2", &URB_ConstraintSetup::PriAxis2)
        .def_readwrite("SecAxis2", &URB_ConstraintSetup::SecAxis2)
        .def_readwrite("PulleyPivot1", &URB_ConstraintSetup::PulleyPivot1)
        .def_readwrite("PulleyPivot2", &URB_ConstraintSetup::PulleyPivot2)
        .def_readwrite("LinearXSetup", &URB_ConstraintSetup::LinearXSetup)
        .def_readwrite("LinearYSetup", &URB_ConstraintSetup::LinearYSetup)
        .def_readwrite("LinearZSetup", &URB_ConstraintSetup::LinearZSetup)
        .def_readwrite("LinearLimitStiffness", &URB_ConstraintSetup::LinearLimitStiffness)
        .def_readwrite("LinearLimitDamping", &URB_ConstraintSetup::LinearLimitDamping)
        .def_readwrite("LinearBreakThreshold", &URB_ConstraintSetup::LinearBreakThreshold)
        .def_readwrite("Swing1LimitAngle", &URB_ConstraintSetup::Swing1LimitAngle)
        .def_readwrite("Swing2LimitAngle", &URB_ConstraintSetup::Swing2LimitAngle)
        .def_readwrite("TwistLimitAngle", &URB_ConstraintSetup::TwistLimitAngle)
        .def_readwrite("SwingLimitStiffness", &URB_ConstraintSetup::SwingLimitStiffness)
        .def_readwrite("SwingLimitDamping", &URB_ConstraintSetup::SwingLimitDamping)
        .def_readwrite("TwistLimitStiffness", &URB_ConstraintSetup::TwistLimitStiffness)
        .def_readwrite("TwistLimitDamping", &URB_ConstraintSetup::TwistLimitDamping)
        .def_readwrite("AngularBreakThreshold", &URB_ConstraintSetup::AngularBreakThreshold)
        .def_readwrite("PulleyRatio", &URB_ConstraintSetup::PulleyRatio)
        .def("StaticClass", &URB_ConstraintSetup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}