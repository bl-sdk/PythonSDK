#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIStorageDevice()
{
    py::class_< UIStorageDevice,  UInterface   >("UIStorageDevice")
        .def("StaticClass", &UIStorageDevice::StaticClass, py::return_value_policy::reference)
        .def("StorageDeviceChanged", &UIStorageDevice::StorageDeviceChanged)
        .staticmethod("StaticClass")
  ;
}