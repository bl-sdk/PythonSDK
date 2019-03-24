#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIWeaponSummary(py::module &m)
{
    py::class_< UUIWeaponSummary,  UUIResourceDataProvider   >(m, "UUIWeaponSummary")
		.def_static("StaticClass", &UUIWeaponSummary::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ClassPathName", &UUIWeaponSummary::ClassPathName)
        .def_readwrite("FriendlyName", &UUIWeaponSummary::FriendlyName)
        .def_readwrite("WeaponDescription", &UUIWeaponSummary::WeaponDescription)
        .def("eventIsProviderDisabled", &UUIWeaponSummary::eventIsProviderDisabled)
          ;
}