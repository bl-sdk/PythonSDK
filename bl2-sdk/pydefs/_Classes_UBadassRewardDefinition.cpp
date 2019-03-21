#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBadassRewardDefinition()
{
    class_< UBadassRewardDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBadassRewardDefinition", no_init)
        .def_readwrite("RewardName", &UBadassRewardDefinition::RewardName)
        .def_readwrite("Description", &UBadassRewardDefinition::Description)
        .def_readwrite("RewardString", &UBadassRewardDefinition::RewardString)
        .def_readwrite("AttrInitDef", &UBadassRewardDefinition::AttrInitDef)
        .def_readwrite("Presentation", &UBadassRewardDefinition::Presentation)
        .def_readwrite("CachedRewardIndex", &UBadassRewardDefinition::CachedRewardIndex)
        .def("StaticClass", &UBadassRewardDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateCachedRewardIndex", &UBadassRewardDefinition::UpdateCachedRewardIndex)
        .staticmethod("StaticClass")
  ;
}