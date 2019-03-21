#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInventoryManufacturerBalanceData()
{
    class_< FInventoryManufacturerBalanceData >("FInventoryManufacturerBalanceData", no_init)
        .def_readwrite("Manufacturer", &FInventoryManufacturerBalanceData::Manufacturer)
        .def_readwrite("Grades", &FInventoryManufacturerBalanceData::Grades)
  ;
}