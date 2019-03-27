#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKillZDamageType(py::module &m)
{
    py::class_< UKillZDamageType,  UDamageType   >(m, "UKillZDamageType")
		.def_static("StaticClass", &UKillZDamageType::StaticClass, py::return_value_policy::reference)
          ;
}