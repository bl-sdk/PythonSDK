#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeviceIdCache(py::module &m)
{
    py::class_< FDeviceIdCache >(m, "FDeviceIdCache")
        .def_readwrite("DeviceID", &FDeviceIdCache::DeviceID)
        .def_readwrite("DeviceSelectionMulticast", &FDeviceIdCache::DeviceSelectionMulticast)
        .def_readwrite("DeviceSelectionDelegates", &FDeviceIdCache::DeviceSelectionDelegates)
  ;
}