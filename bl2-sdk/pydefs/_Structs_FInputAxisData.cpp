#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputAxisData()
{
    class_< FInputAxisData >("FInputAxisData", no_init)
        .def_readwrite("AxisName", &FInputAxisData::AxisName)
        .def_readwrite("InputDeviceHandler", &FInputAxisData::InputDeviceHandler)
        .def_readwrite("ParameterPtr", &FInputAxisData::ParameterPtr)
        .def_readwrite("AccelState", &FInputAxisData::AccelState)
  ;
}