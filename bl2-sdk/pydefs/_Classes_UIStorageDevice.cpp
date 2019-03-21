#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIStorageDevice()
{
    class_< UIStorageDevice, bases< UInterface >  , boost::noncopyable>("UIStorageDevice", no_init)
        .def("StaticClass", &UIStorageDevice::StaticClass, return_value_policy< reference_existing_object >())
        .def("StorageDeviceChanged", &UIStorageDevice::StorageDeviceChanged)
        .staticmethod("StaticClass")
  ;
}