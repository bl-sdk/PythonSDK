#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterCustomizationInfoCardGFxObject()
{
    py::class_< UCharacterCustomizationInfoCardGFxObject,  UGFxObject   >("UCharacterCustomizationInfoCardGFxObject")
        .def("StaticClass", &UCharacterCustomizationInfoCardGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetAutoSizeTextOnFields", &UCharacterCustomizationInfoCardGFxObject::SetAutoSizeTextOnFields)
        .def("TryFocusList", &UCharacterCustomizationInfoCardGFxObject::TryFocusList)
        .def("PopulateScrollingList", &UCharacterCustomizationInfoCardGFxObject::PopulateScrollingList)
        .def("SetRespecInfo", &UCharacterCustomizationInfoCardGFxObject::SetRespecInfo)
        .def("SetNameInfo", &UCharacterCustomizationInfoCardGFxObject::SetNameInfo)
        .def("Hide", &UCharacterCustomizationInfoCardGFxObject::Hide)
        .def("DisplaySkinCard", &UCharacterCustomizationInfoCardGFxObject::DisplaySkinCard)
        .def("DisplayHeadCard", &UCharacterCustomizationInfoCardGFxObject::DisplayHeadCard)
        .def("DisplayRespecCard", &UCharacterCustomizationInfoCardGFxObject::DisplayRespecCard)
        .def("DisplayNameCard", &UCharacterCustomizationInfoCardGFxObject::DisplayNameCard)
        .staticmethod("StaticClass")
  ;
}