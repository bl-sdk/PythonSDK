#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlLeftHandGripWeapon()
{
    py::class_< USkelControlLeftHandGripWeapon,  USkelControlLimb   >("USkelControlLeftHandGripWeapon")
        .def_readwrite("CachedBodyClass", &USkelControlLeftHandGripWeapon::CachedBodyClass)
        .def("StaticClass", &USkelControlLeftHandGripWeapon::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}