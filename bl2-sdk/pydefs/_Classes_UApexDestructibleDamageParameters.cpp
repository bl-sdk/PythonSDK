#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexDestructibleDamageParameters(py::module &m)
{
    py::class_< UApexDestructibleDamageParameters,  UObject   >(m, "UApexDestructibleDamageParameters")
		.def_static("StaticClass", &UApexDestructibleDamageParameters::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DamageMap", &UApexDestructibleDamageParameters::DamageMap)
          ;
}