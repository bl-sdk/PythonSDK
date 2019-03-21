#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorVolumeDefinition()
{
    class_< UBehaviorVolumeDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBehaviorVolumeDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UBehaviorVolumeDefinition::VfTable_IIConstructObject)
        .def_readwrite("VfTable_IIBehaviorProvider", &UBehaviorVolumeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("DefaultTouchImpact", &UBehaviorVolumeDefinition::DefaultTouchImpact)
        .def_readwrite("DefaultUntouchImpact", &UBehaviorVolumeDefinition::DefaultUntouchImpact)
        .def_readwrite("DefaultTraceImpact", &UBehaviorVolumeDefinition::DefaultTraceImpact)
        .def_readwrite("PhysicalMaterial", &UBehaviorVolumeDefinition::PhysicalMaterial)
        .def_readwrite("BehaviorProviderDefinition", &UBehaviorVolumeDefinition::BehaviorProviderDefinition)
        .def("StaticClass", &UBehaviorVolumeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnShoot", &UBehaviorVolumeDefinition::OnShoot)
        .def("OnExit", &UBehaviorVolumeDefinition::OnExit)
        .def("OnEntry", &UBehaviorVolumeDefinition::OnEntry)
        .def("SetBehaviorProviderDefinition", &UBehaviorVolumeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBehaviorVolumeDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}