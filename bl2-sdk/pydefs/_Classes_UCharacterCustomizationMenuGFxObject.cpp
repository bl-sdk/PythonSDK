#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterCustomizationMenuGFxObject(py::object m)
{
    py::class_< UCharacterCustomizationMenuGFxObject,  UGFxObject   >(m, "UCharacterCustomizationMenuGFxObject")
        .def("StaticClass", &UCharacterCustomizationMenuGFxObject::StaticClass, py::return_value_policy::reference)
        .def("GetEntryLabel", &UCharacterCustomizationMenuGFxObject::GetEntryLabel)
        .def("SetSelectedEntry", &UCharacterCustomizationMenuGFxObject::SetSelectedEntry)
        .def("GetSelectedEntry", &UCharacterCustomizationMenuGFxObject::GetSelectedEntry)
        .def("FocusPreviousEntry", &UCharacterCustomizationMenuGFxObject::FocusPreviousEntry)
        .def("FocusNextEntry", &UCharacterCustomizationMenuGFxObject::FocusNextEntry)
        .def("FocusBestEntry", &UCharacterCustomizationMenuGFxObject::FocusBestEntry)
        .def("ConfigureMenuEntry", &UCharacterCustomizationMenuGFxObject::ConfigureMenuEntry)
        .def("InitMenuEntry", &UCharacterCustomizationMenuGFxObject::InitMenuEntry)
          ;
}