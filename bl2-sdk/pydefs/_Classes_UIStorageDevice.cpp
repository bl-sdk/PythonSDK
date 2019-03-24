#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIStorageDevice(py::module &m)
{
    py::class_< UIStorageDevice,  UInterface   >(m, "UIStorageDevice")
		.def_static("StaticClass", &UIStorageDevice::StaticClass, py::return_value_policy::reference)
        .def("StorageDeviceChanged", &UIStorageDevice::StorageDeviceChanged)
          ;
}