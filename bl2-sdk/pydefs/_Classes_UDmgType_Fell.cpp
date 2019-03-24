#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Fell(py::module &m)
{
    py::class_< UDmgType_Fell,  UDamageType   >(m, "UDmgType_Fell")
		.def_static("StaticClass", &UDmgType_Fell::StaticClass, py::return_value_policy::reference)
          ;
}