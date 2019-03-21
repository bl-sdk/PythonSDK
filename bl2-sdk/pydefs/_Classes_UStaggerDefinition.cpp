#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStaggerDefinition()
{
    class_< UStaggerDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UStaggerDefinition", no_init)
        .def_readwrite("StaggeredPhysicalMaterial", &UStaggerDefinition::StaggeredPhysicalMaterial)
        .def_readwrite("StaggeredGravity", &UStaggerDefinition::StaggeredGravity)
        .def_readwrite("StaggeredRestVelocity", &UStaggerDefinition::StaggeredRestVelocity)
        .def_readwrite("StaggeredRestTimeMin", &UStaggerDefinition::StaggeredRestTimeMin)
        .def_readwrite("StaggeredRestTimeMax", &UStaggerDefinition::StaggeredRestTimeMax)
        .def_readwrite("StaggeredPhysicsBlendOutSpeed", &UStaggerDefinition::StaggeredPhysicsBlendOutSpeed)
        .def_readwrite("StaggeredRestGiveUpTime", &UStaggerDefinition::StaggeredRestGiveUpTime)
        .def_readwrite("VehicleStaggerSpeed", &UStaggerDefinition::VehicleStaggerSpeed)
        .def_readwrite("StaggeredOverHoodMinSpeed", &UStaggerDefinition::StaggeredOverHoodMinSpeed)
        .def_readwrite("MaxStaggerAdjustExtents", &UStaggerDefinition::MaxStaggerAdjustExtents)
        .def_readwrite("StaggeredRecoveryRotation", &UStaggerDefinition::StaggeredRecoveryRotation)
        .def_readwrite("HardFlinchAnimation", &UStaggerDefinition::HardFlinchAnimation)
        .def_readwrite("UnstaggerGiveUpTime", &UStaggerDefinition::UnstaggerGiveUpTime)
        .def("StaticClass", &UStaggerDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}