#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleChoiceModuleGFxObject()
{
    py::class_< UVehicleChoiceModuleGFxObject,  UGFxObject   >("UVehicleChoiceModuleGFxObject")
        .def_readwrite("CachedVehicleState", &UVehicleChoiceModuleGFxObject::CachedVehicleState)
        .def_readwrite("SelectedVehicleUIDefinition", &UVehicleChoiceModuleGFxObject::SelectedVehicleUIDefinition)
        .def_readwrite("EquippedVehicleCustomizationDefinition", &UVehicleChoiceModuleGFxObject::EquippedVehicleCustomizationDefinition)
        .def_readwrite("PreviewVehicleCustomizationDefinition", &UVehicleChoiceModuleGFxObject::PreviewVehicleCustomizationDefinition)
        .def("StaticClass", &UVehicleChoiceModuleGFxObject::StaticClass, py::return_value_policy::reference)
        .def("DisableClip", &UVehicleChoiceModuleGFxObject::DisableClip)
        .def("ConfigureVehicleState", &UVehicleChoiceModuleGFxObject::ConfigureVehicleState)
        .def("ConfigureTeleportButton", &UVehicleChoiceModuleGFxObject::ConfigureTeleportButton)
        .def("ConfigureSpawnVehicleButton", &UVehicleChoiceModuleGFxObject::ConfigureSpawnVehicleButton)
        .def("ConfigureSkinTypeButton", &UVehicleChoiceModuleGFxObject::ConfigureSkinTypeButton)
        .def("ConfigureVehicleTypeButton", &UVehicleChoiceModuleGFxObject::ConfigureVehicleTypeButton)
        .staticmethod("StaticClass")
  ;
}