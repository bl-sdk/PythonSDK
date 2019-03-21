#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventorySerialNumber()
{
    py::class_< FInventorySerialNumber >("FInventorySerialNumber")
        .def_readonly("Buffer", &FInventorySerialNumber::Buffer)
        .def_readwrite("State", &FInventorySerialNumber::State)
        .def_readwrite("RunningCounter", &FInventorySerialNumber::RunningCounter)
        .def_readwrite("EncryptedLength", &FInventorySerialNumber::EncryptedLength)
  ;
}