#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameBalanceDefinition()
{
    py::class_< UGameBalanceDefinition,  UGBXDefinition   >("UGameBalanceDefinition")
        .def_readwrite("BalanceByRegion", &UGameBalanceDefinition::BalanceByRegion)
        .def("StaticClass", &UGameBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}