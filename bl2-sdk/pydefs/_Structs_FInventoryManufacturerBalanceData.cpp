#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventoryManufacturerBalanceData(py::module &m)
{
    py::class_< FInventoryManufacturerBalanceData >(m, "FInventoryManufacturerBalanceData")
        .def_readwrite("Manufacturer", &FInventoryManufacturerBalanceData::Manufacturer)
        .def_readwrite("Grades", &FInventoryManufacturerBalanceData::Grades)
  ;
}