#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstPerson()
{
    class_< USpecialMove_FirstPerson, bases< UGearboxAnimDefinition >  , boost::noncopyable>("USpecialMove_FirstPerson", no_init)
        .def("StaticClass", &USpecialMove_FirstPerson::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSMNode", &USpecialMove_FirstPerson::GetSMNode, return_value_policy< reference_existing_object >())
        .def("PlayAnim", &USpecialMove_FirstPerson::PlayAnim)
        .def("StopWeaponRecoilAnimImp", &USpecialMove_FirstPerson::StopWeaponRecoilAnimImp)
        .def("StopWeaponRecoilAnim", &USpecialMove_FirstPerson::StopWeaponRecoilAnim)
        .def("eventClientStarted", &USpecialMove_FirstPerson::eventClientStarted)
        .def("GetSkeletalMesh", &USpecialMove_FirstPerson::GetSkeletalMesh, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}