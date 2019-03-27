#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDWidget_Crosshairs(py::module &m)
{
    py::class_< UHUDWidget_Crosshairs,  UGFxObject   >(m, "UHUDWidget_Crosshairs")
		.def_static("StaticClass", &UHUDWidget_Crosshairs::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CrosshairSize", &UHUDWidget_Crosshairs::CrosshairSize)
        .def_readwrite("CrosshairFrame", &UHUDWidget_Crosshairs::CrosshairFrame)
        .def_readwrite("CrosshairVisibility", &UHUDWidget_Crosshairs::CrosshairVisibility)
        .def_readwrite("MyCrosshairColor", &UHUDWidget_Crosshairs::MyCrosshairColor)
        .def_readwrite("ChargeFrame", &UHUDWidget_Crosshairs::ChargeFrame)
        .def_readwrite("OuterClip", &UHUDWidget_Crosshairs::OuterClip)
        .def_readwrite("InnerClip", &UHUDWidget_Crosshairs::InnerClip)
        .def_readwrite("ChargeClip", &UHUDWidget_Crosshairs::ChargeClip)
        .def_readwrite("WWeap", &UHUDWidget_Crosshairs::WWeap)
        .def_readwrite("MyHUDMovie", &UHUDWidget_Base::MyHUDMovie)
        .def("AssociateWeapon", &UHUDWidget_Crosshairs::AssociateWeapon)
        .def("UpdateCrosshairColor", &UHUDWidget_Crosshairs::UpdateCrosshairColor)
        .def("UpdateCrosshairFrame", &UHUDWidget_Crosshairs::UpdateCrosshairFrame)
        .def("SetCrosshairVisibility", &UHUDWidget_Crosshairs::SetCrosshairVisibility)
        .def("Update", &UHUDWidget_Crosshairs::Update)
        .def("Deinit", &UHUDWidget_Crosshairs::Deinit)
        .def("Init", &UHUDWidget_Crosshairs::Init)
          ;
}