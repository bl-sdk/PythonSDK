#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomizationSizeMapping()
{
    class_< FCustomizationSizeMapping >("FCustomizationSizeMapping", no_init)
        .def_readwrite("ProductID", &FCustomizationSizeMapping::ProductID)
        .def_readwrite("NumCustomizations", &FCustomizationSizeMapping::NumCustomizations)
  ;
}