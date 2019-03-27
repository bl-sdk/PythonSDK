#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalWeaponMessage(py::module &m)
{
    py::class_< ULocalWeaponMessage,  UWillowLocalMessage   >(m, "ULocalWeaponMessage")
		.def_static("StaticClass", &ULocalWeaponMessage::StaticClass, py::return_value_policy::reference)
        .def("GetWeaponString", &ULocalWeaponMessage::GetWeaponString)
        .def("GetWeaponColor", &ULocalWeaponMessage::GetWeaponColor)
        .def("ClientWeaponReceive", &ULocalWeaponMessage::ClientWeaponReceive)
          ;
}