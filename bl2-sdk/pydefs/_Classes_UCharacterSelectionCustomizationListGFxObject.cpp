#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCharacterSelectionCustomizationListGFxObject()
{
    class_< UCharacterSelectionCustomizationListGFxObject, bases< UGFxObject >  , boost::noncopyable>("UCharacterSelectionCustomizationListGFxObject", no_init)
        .def("StaticClass", &UCharacterSelectionCustomizationListGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("ScrollDown", &UCharacterSelectionCustomizationListGFxObject::ScrollDown)
        .def("ScrollUp", &UCharacterSelectionCustomizationListGFxObject::ScrollUp)
        .def("PopulateScrollingList", &UCharacterSelectionCustomizationListGFxObject::PopulateScrollingList)
        .def("GetSelectedIndex", &UCharacterSelectionCustomizationListGFxObject::GetSelectedIndex)
        .staticmethod("StaticClass")
  ;
}