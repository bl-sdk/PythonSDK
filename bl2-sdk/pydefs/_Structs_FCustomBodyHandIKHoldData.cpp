#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomBodyHandIKHoldData()
{
    class_< FCustomBodyHandIKHoldData >("FCustomBodyHandIKHoldData", no_init)
        .def_readwrite("HoldName", &FCustomBodyHandIKHoldData::HoldName)
        .def_readwrite("IKData", &FCustomBodyHandIKHoldData::IKData)
  ;
}