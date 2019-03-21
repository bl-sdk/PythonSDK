#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIWeaponSummary()
{
    py::class_< UUIWeaponSummary,  UUIResourceDataProvider   >("UUIWeaponSummary")
        .def_readwrite("ClassPathName", &UUIWeaponSummary::ClassPathName)
        .def_readwrite("FriendlyName", &UUIWeaponSummary::FriendlyName)
        .def_readwrite("WeaponDescription", &UUIWeaponSummary::WeaponDescription)
        .def("StaticClass", &UUIWeaponSummary::StaticClass, py::return_value_policy::reference)
        .def("eventIsProviderDisabled", &UUIWeaponSummary::eventIsProviderDisabled)
        .staticmethod("StaticClass")
  ;
}