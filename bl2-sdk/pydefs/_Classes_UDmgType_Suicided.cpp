#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Suicided(py::object m)
{
    py::class_< UDmgType_Suicided,  UKillZDamageType   >(m, "UDmgType_Suicided")
        .def("StaticClass", &UDmgType_Suicided::StaticClass, py::return_value_policy::reference)
          ;
}