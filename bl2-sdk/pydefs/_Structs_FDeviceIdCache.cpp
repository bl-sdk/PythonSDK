#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeviceIdCache()
{
    class_< FDeviceIdCache >("FDeviceIdCache", no_init)
        .def_readwrite("DeviceID", &FDeviceIdCache::DeviceID)
        .def_readwrite("DeviceSelectionMulticast", &FDeviceIdCache::DeviceSelectionMulticast)
        .def_readwrite("DeviceSelectionDelegates", &FDeviceIdCache::DeviceSelectionDelegates)
  ;
}