#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleChoiceInfoCardGFxObject(py::module &m)
{
    py::class_< UVehicleChoiceInfoCardGFxObject,  UGFxObject   >(m, "UVehicleChoiceInfoCardGFxObject")
		.def_static("StaticClass", &UVehicleChoiceInfoCardGFxObject::StaticClass, py::return_value_policy::reference)
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
          ;
}