#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeCategory()
{
    class_< FAttributeCategory >("FAttributeCategory", no_init)
        .def_readwrite("Category", &FAttributeCategory::Category)
        .def_readwrite("Attributes", &FAttributeCategory::Attributes)
  ;
}