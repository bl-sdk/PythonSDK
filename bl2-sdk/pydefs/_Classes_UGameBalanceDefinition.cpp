#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameBalanceDefinition(py::module &m)
{
    py::class_< UGameBalanceDefinition,  UGBXDefinition   >(m, "UGameBalanceDefinition")
        .def_readwrite("BalanceByRegion", &UGameBalanceDefinition::BalanceByRegion)
          ;
}