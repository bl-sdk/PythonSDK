#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponScopeGFxMovie(py::module &m)
{
    py::class_< UWeaponScopeGFxMovie,  UWillowGFxMovie3D   >(m, "UWeaponScopeGFxMovie")
        .def_readwrite("MyScopeDefinition", &UWeaponScopeGFxMovie::MyScopeDefinition)
        .def_readwrite("CrosshairWidget", &UWeaponScopeGFxMovie::CrosshairWidget)
        .def_readwrite("CachedFLN_Housing", &UWeaponScopeGFxMovie::CachedFLN_Housing)
        .def_readwrite("CachedFLN_Stock", &UWeaponScopeGFxMovie::CachedFLN_Stock)
        .def_readwrite("CachedFLN_Grip", &UWeaponScopeGFxMovie::CachedFLN_Grip)
        .def_readwrite("CachedFLN_Collateral", &UWeaponScopeGFxMovie::CachedFLN_Collateral)
        .def_readwrite("CachedFLN_Crosshairs", &UWeaponScopeGFxMovie::CachedFLN_Crosshairs)
        .def_readwrite("CachedSFN", &UWeaponScopeGFxMovie::CachedSFN)
        .def_readwrite("CachedElementalName", &UWeaponScopeGFxMovie::CachedElementalName)
        .def("StaticClass", &UWeaponScopeGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("InitializeAsTelescope", &UWeaponScopeGFxMovie::InitializeAsTelescope)
        .def("CloseScope", &UWeaponScopeGFxMovie::CloseScope)
        .def("InitCrosshair", &UWeaponScopeGFxMovie::InitCrosshair)
        .def("InitElemental", &UWeaponScopeGFxMovie::InitElemental)
        .def("GetElementalName", &UWeaponScopeGFxMovie::GetElementalName)
        .def("InitializeFromWeapon", &UWeaponScopeGFxMovie::InitializeFromWeapon)
        .def("ClearCached", &UWeaponScopeGFxMovie::ClearCached)
        .def("GetManufacturerDefinitionFromWeaponPart", &UWeaponScopeGFxMovie::GetManufacturerDefinitionFromWeaponPart, py::return_value_policy::reference)
        .def("GetWeaponTypeNameForLinkage", &UWeaponScopeGFxMovie::GetWeaponTypeNameForLinkage)
        .def("GetManufacturerNameForLinkage", &UWeaponScopeGFxMovie::GetManufacturerNameForLinkage)
        .def("GetLinkageName", &UWeaponScopeGFxMovie::GetLinkageName)
        .def("eventOnClose", &UWeaponScopeGFxMovie::eventOnClose)
        .def("eventStart", &UWeaponScopeGFxMovie::eventStart)
          ;
}