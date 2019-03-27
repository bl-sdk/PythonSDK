#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlLeftHandGripWeapon(py::module &m)
{
    py::class_< USkelControlLeftHandGripWeapon,  USkelControlLimb   >(m, "USkelControlLeftHandGripWeapon")
		.def_static("StaticClass", &USkelControlLeftHandGripWeapon::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CachedBodyClass", &USkelControlLeftHandGripWeapon::CachedBodyClass)
          ;
}