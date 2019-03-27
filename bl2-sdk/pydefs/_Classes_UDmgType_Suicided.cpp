#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Suicided(py::module &m)
{
    py::class_< UDmgType_Suicided,  UKillZDamageType   >(m, "UDmgType_Suicided")
		.def_static("StaticClass", &UDmgType_Suicided::StaticClass, py::return_value_policy::reference)
          ;
}