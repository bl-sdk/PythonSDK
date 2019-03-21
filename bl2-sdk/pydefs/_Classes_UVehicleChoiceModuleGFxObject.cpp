#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleChoiceModuleGFxObject()
{
    class_< UVehicleChoiceModuleGFxObject, bases< UGFxObject >  , boost::noncopyable>("UVehicleChoiceModuleGFxObject", no_init)
        .def_readwrite("CachedVehicleState", &UVehicleChoiceModuleGFxObject::CachedVehicleState)
        .def_readwrite("SelectedVehicleUIDefinition", &UVehicleChoiceModuleGFxObject::SelectedVehicleUIDefinition)
        .def_readwrite("EquippedVehicleCustomizationDefinition", &UVehicleChoiceModuleGFxObject::EquippedVehicleCustomizationDefinition)
        .def_readwrite("PreviewVehicleCustomizationDefinition", &UVehicleChoiceModuleGFxObject::PreviewVehicleCustomizationDefinition)
        .def("StaticClass", &UVehicleChoiceModuleGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("DisableClip", &UVehicleChoiceModuleGFxObject::DisableClip)
        .def("ConfigureVehicleState", &UVehicleChoiceModuleGFxObject::ConfigureVehicleState)
        .def("ConfigureTeleportButton", &UVehicleChoiceModuleGFxObject::ConfigureTeleportButton)
        .def("ConfigureSpawnVehicleButton", &UVehicleChoiceModuleGFxObject::ConfigureSpawnVehicleButton)
        .def("ConfigureSkinTypeButton", &UVehicleChoiceModuleGFxObject::ConfigureSkinTypeButton)
        .def("ConfigureVehicleTypeButton", &UVehicleChoiceModuleGFxObject::ConfigureVehicleTypeButton)
        .staticmethod("StaticClass")
  ;
}