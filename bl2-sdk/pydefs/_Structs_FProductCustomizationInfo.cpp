#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FProductCustomizationInfo()
{
    class_< FProductCustomizationInfo >("FProductCustomizationInfo", no_init)
        .def_readwrite("ProductID", &FProductCustomizationInfo::ProductID)
        .def_readwrite("NumUnlockableCustomizations", &FProductCustomizationInfo::NumUnlockableCustomizations)
        .def_readwrite("NumCustomizations", &FProductCustomizationInfo::NumCustomizations)
  ;
}