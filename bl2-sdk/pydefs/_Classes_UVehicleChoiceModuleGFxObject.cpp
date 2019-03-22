#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleChoiceModuleGFxObject(py::module &m)
{
    py::class_< UVehicleChoiceModuleGFxObject,  UGFxObject   >(m, "UVehicleChoiceModuleGFxObject")
        .def_readwrite("CachedVehicleState", &UVehicleChoiceModuleGFxObject::CachedVehicleState)
        .def_readwrite("SelectedVehicleUIDefinition", &UVehicleChoiceModuleGFxObject::SelectedVehicleUIDefinition)
        .def_readwrite("EquippedVehicleCustomizationDefinition", &UVehicleChoiceModuleGFxObject::EquippedVehicleCustomizationDefinition)
        .def_readwrite("PreviewVehicleCustomizationDefinition", &UVehicleChoiceModuleGFxObject::PreviewVehicleCustomizationDefinition)
        .def("DisableClip", &UVehicleChoiceModuleGFxObject::DisableClip)
        .def("ConfigureVehicleState", &UVehicleChoiceModuleGFxObject::ConfigureVehicleState)
        .def("ConfigureTeleportButton", &UVehicleChoiceModuleGFxObject::ConfigureTeleportButton)
        .def("ConfigureSpawnVehicleButton", &UVehicleChoiceModuleGFxObject::ConfigureSpawnVehicleButton)
        .def("ConfigureSkinTypeButton", &UVehicleChoiceModuleGFxObject::ConfigureSkinTypeButton)
        .def("ConfigureVehicleTypeButton", &UVehicleChoiceModuleGFxObject::ConfigureVehicleTypeButton)
          ;
}