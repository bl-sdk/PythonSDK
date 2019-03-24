#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameBalanceDefinition(py::module &m)
{
    py::class_< UGameBalanceDefinition,  UGBXDefinition   >(m, "UGameBalanceDefinition")
		.def_static("StaticClass", &UGameBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BalanceByRegion", &UGameBalanceDefinition::BalanceByRegion)
          ;
}