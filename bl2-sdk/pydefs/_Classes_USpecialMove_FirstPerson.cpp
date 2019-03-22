#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstPerson(py::module &m)
{
    py::class_< USpecialMove_FirstPerson,  UGearboxAnimDefinition   >(m, "USpecialMove_FirstPerson")
        .def("GetSMNode", &USpecialMove_FirstPerson::GetSMNode, py::return_value_policy::reference)
        .def("PlayAnim", &USpecialMove_FirstPerson::PlayAnim)
        .def("StopWeaponRecoilAnimImp", &USpecialMove_FirstPerson::StopWeaponRecoilAnimImp)
        .def("StopWeaponRecoilAnim", &USpecialMove_FirstPerson::StopWeaponRecoilAnim)
        .def("eventClientStarted", &USpecialMove_FirstPerson::eventClientStarted)
        .def("GetSkeletalMesh", &USpecialMove_FirstPerson::GetSkeletalMesh, py::return_value_policy::reference)
          ;
}