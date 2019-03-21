#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCharacterCustomizationInfoCardGFxObject()
{
    class_< UCharacterCustomizationInfoCardGFxObject, bases< UGFxObject >  , boost::noncopyable>("UCharacterCustomizationInfoCardGFxObject", no_init)
        .def("StaticClass", &UCharacterCustomizationInfoCardGFxObject::StaticClass, return_value_policy< reference_existing_object >())
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