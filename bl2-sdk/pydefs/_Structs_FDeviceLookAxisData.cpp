#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeviceLookAxisData()
{
    class_< FDeviceLookAxisData >("FDeviceLookAxisData", no_init)
        .def_readwrite("SourceDevice", &FDeviceLookAxisData::SourceDevice)
        .def_readwrite("LookXAxisName", &FDeviceLookAxisData::LookXAxisName)
        .def_readwrite("LookYAxisName", &FDeviceLookAxisData::LookYAxisName)
  ;
}