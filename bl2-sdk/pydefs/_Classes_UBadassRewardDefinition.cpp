#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBadassRewardDefinition()
{
    py::class_< UBadassRewardDefinition,  UGBXDefinition   >("UBadassRewardDefinition")
        .def_readwrite("RewardName", &UBadassRewardDefinition::RewardName)
        .def_readwrite("Description", &UBadassRewardDefinition::Description)
        .def_readwrite("RewardString", &UBadassRewardDefinition::RewardString)
        .def_readwrite("AttrInitDef", &UBadassRewardDefinition::AttrInitDef)
        .def_readwrite("Presentation", &UBadassRewardDefinition::Presentation)
        .def_readwrite("CachedRewardIndex", &UBadassRewardDefinition::CachedRewardIndex)
        .def("StaticClass", &UBadassRewardDefinition::StaticClass, py::return_value_policy::reference)
        .def("UpdateCachedRewardIndex", &UBadassRewardDefinition::UpdateCachedRewardIndex)
        .staticmethod("StaticClass")
  ;
}