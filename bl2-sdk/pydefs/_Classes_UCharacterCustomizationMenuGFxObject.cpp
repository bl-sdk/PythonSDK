#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCharacterCustomizationMenuGFxObject()
{
    class_< UCharacterCustomizationMenuGFxObject, bases< UGFxObject >  , boost::noncopyable>("UCharacterCustomizationMenuGFxObject", no_init)
        .def("StaticClass", &UCharacterCustomizationMenuGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetEntryLabel", &UCharacterCustomizationMenuGFxObject::GetEntryLabel)
        .def("SetSelectedEntry", &UCharacterCustomizationMenuGFxObject::SetSelectedEntry)
        .def("GetSelectedEntry", &UCharacterCustomizationMenuGFxObject::GetSelectedEntry)
        .def("FocusPreviousEntry", &UCharacterCustomizationMenuGFxObject::FocusPreviousEntry)
        .def("FocusNextEntry", &UCharacterCustomizationMenuGFxObject::FocusNextEntry)
        .def("FocusBestEntry", &UCharacterCustomizationMenuGFxObject::FocusBestEntry)
        .def("ConfigureMenuEntry", &UCharacterCustomizationMenuGFxObject::ConfigureMenuEntry)
        .def("InitMenuEntry", &UCharacterCustomizationMenuGFxObject::InitMenuEntry)
        .staticmethod("StaticClass")
  ;
}