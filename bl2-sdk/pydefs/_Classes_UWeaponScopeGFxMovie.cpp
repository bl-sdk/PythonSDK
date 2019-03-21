#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponScopeGFxMovie()
{
    class_< UWeaponScopeGFxMovie, bases< UWillowGFxMovie3D >  , boost::noncopyable>("UWeaponScopeGFxMovie", no_init)
        .def_readwrite("MyScopeDefinition", &UWeaponScopeGFxMovie::MyScopeDefinition)
        .def_readwrite("CrosshairWidget", &UWeaponScopeGFxMovie::CrosshairWidget)
        .def_readwrite("CachedFLN_Housing", &UWeaponScopeGFxMovie::CachedFLN_Housing)
        .def_readwrite("CachedFLN_Stock", &UWeaponScopeGFxMovie::CachedFLN_Stock)
        .def_readwrite("CachedFLN_Grip", &UWeaponScopeGFxMovie::CachedFLN_Grip)
        .def_readwrite("CachedFLN_Collateral", &UWeaponScopeGFxMovie::CachedFLN_Collateral)
        .def_readwrite("CachedFLN_Crosshairs", &UWeaponScopeGFxMovie::CachedFLN_Crosshairs)
        .def_readwrite("CachedSFN", &UWeaponScopeGFxMovie::CachedSFN)
        .def_readwrite("CachedElementalName", &UWeaponScopeGFxMovie::CachedElementalName)
        .def("StaticClass", &UWeaponScopeGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("InitializeAsTelescope", &UWeaponScopeGFxMovie::InitializeAsTelescope)
        .def("CloseScope", &UWeaponScopeGFxMovie::CloseScope)
        .def("InitCrosshair", &UWeaponScopeGFxMovie::InitCrosshair)
        .def("InitElemental", &UWeaponScopeGFxMovie::InitElemental)
        .def("GetElementalName", &UWeaponScopeGFxMovie::GetElementalName)
        .def("InitializeFromWeapon", &UWeaponScopeGFxMovie::InitializeFromWeapon)
        .def("ClearCached", &UWeaponScopeGFxMovie::ClearCached)
        .def("GetManufacturerDefinitionFromWeaponPart", &UWeaponScopeGFxMovie::GetManufacturerDefinitionFromWeaponPart, return_value_policy< reference_existing_object >())
        .def("GetWeaponTypeNameForLinkage", &UWeaponScopeGFxMovie::GetWeaponTypeNameForLinkage)
        .def("GetManufacturerNameForLinkage", &UWeaponScopeGFxMovie::GetManufacturerNameForLinkage)
        .def("GetLinkageName", &UWeaponScopeGFxMovie::GetLinkageName)
        .def("eventOnClose", &UWeaponScopeGFxMovie::eventOnClose)
        .def("eventStart", &UWeaponScopeGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}