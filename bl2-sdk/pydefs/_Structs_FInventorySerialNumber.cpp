#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInventorySerialNumber()
{
    class_< FInventorySerialNumber >("FInventorySerialNumber", no_init)
        .def_readonly("Buffer", &FInventorySerialNumber::Buffer)
        .def_readwrite("State", &FInventorySerialNumber::State)
        .def_readwrite("RunningCounter", &FInventorySerialNumber::RunningCounter)
        .def_readwrite("EncryptedLength", &FInventorySerialNumber::EncryptedLength)
  ;
}