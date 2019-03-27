#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Bullet(py::module &m)
{
    py::class_< UWillowDmgSource_Bullet,  UWillowDamageSource   >(m, "UWillowDmgSource_Bullet")
		.def_static("StaticClass", &UWillowDmgSource_Bullet::StaticClass, py::return_value_policy::reference)
          ;
}