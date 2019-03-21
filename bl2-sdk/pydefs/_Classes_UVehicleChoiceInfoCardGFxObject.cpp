#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleChoiceInfoCardGFxObject()
{
    class_< UVehicleChoiceInfoCardGFxObject, bases< UGFxObject >  , boost::noncopyable>("UVehicleChoiceInfoCardGFxObject", no_init)
        .def("StaticClass", &UVehicleChoiceInfoCardGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("TryScrollDown", &UVehicleChoiceInfoCardGFxObject::TryScrollDown)
        .def("TryScrollUp", &UVehicleChoiceInfoCardGFxObject::TryScrollUp)
        .def("TryScrollRight", &UVehicleChoiceInfoCardGFxObject::TryScrollRight)
        .def("TryScrollLeft", &UVehicleChoiceInfoCardGFxObject::TryScrollLeft)
        .def("ConfigureSelectedSkinTypeIndex", &UVehicleChoiceInfoCardGFxObject::ConfigureSelectedSkinTypeIndex)
        .def("ConfigureSelectedVehicleTypeIndex", &UVehicleChoiceInfoCardGFxObject::ConfigureSelectedVehicleTypeIndex)
        .def("ConfigureVehicleTypeCell", &UVehicleChoiceInfoCardGFxObject::ConfigureVehicleTypeCell)
        .def("ConfigureDisplayText", &UVehicleChoiceInfoCardGFxObject::ConfigureDisplayText)
        .def("ShowSkinChoices", &UVehicleChoiceInfoCardGFxObject::ShowSkinChoices)
        .def("ShowVehicleChoices", &UVehicleChoiceInfoCardGFxObject::ShowVehicleChoices)
        .def("Hide", &UVehicleChoiceInfoCardGFxObject::Hide)
        .def("PopulateSkinList", &UVehicleChoiceInfoCardGFxObject::PopulateSkinList)
        .def("EndAddVehicleCells", &UVehicleChoiceInfoCardGFxObject::EndAddVehicleCells)
        .def("AddVehicleTypeCell", &UVehicleChoiceInfoCardGFxObject::AddVehicleTypeCell)
        .def("BeginAddVehicleCells", &UVehicleChoiceInfoCardGFxObject::BeginAddVehicleCells)
        .staticmethod("StaticClass")
  ;
}