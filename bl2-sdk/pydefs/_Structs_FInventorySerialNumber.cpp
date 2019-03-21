#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventorySerialNumber(py::object m)
{
    py::class_< FInventorySerialNumber >(m, "FInventorySerialNumber")
        .def_readwrite("State", &FInventorySerialNumber::State)
        .def_readwrite("RunningCounter", &FInventorySerialNumber::RunningCounter)
        .def_readwrite("EncryptedLength", &FInventorySerialNumber::EncryptedLength)
  ;
}