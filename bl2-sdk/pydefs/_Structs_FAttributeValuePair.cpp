#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeValuePair()
{
    class_< FAttributeValuePair >("FAttributeValuePair", no_init)
        .def_readwrite("Key", &FAttributeValuePair::Key)
        .def_readwrite("Value", &FAttributeValuePair::Value)
  ;
}