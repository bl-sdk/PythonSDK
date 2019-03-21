#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_ShootTarget()
{
    class_< UAction_ShootTarget, bases< UAction_GenericAttack >  , boost::noncopyable>("UAction_ShootTarget", no_init)
        .def_readwrite("ChanceToCrouch", &UAction_ShootTarget::ChanceToCrouch)
        .def_readwrite("ChanceToMoveCrouch", &UAction_ShootTarget::ChanceToMoveCrouch)
        .def_readwrite("Angle", &UAction_ShootTarget::Angle)
        .def_readwrite("Range", &UAction_ShootTarget::Range)
        .def_readwrite("RangeType", &UAction_ShootTarget::RangeType)
        .def_readwrite("ZoneSearch", &UAction_ShootTarget::ZoneSearch)
        .def("StaticClass", &UAction_ShootTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}