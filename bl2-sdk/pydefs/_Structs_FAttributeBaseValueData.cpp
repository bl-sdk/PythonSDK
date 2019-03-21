#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeBaseValueData()
{
    class_< FAttributeBaseValueData >("FAttributeBaseValueData", no_init)
        .def_readwrite("Attribute", &FAttributeBaseValueData::Attribute)
        .def_readwrite("BaseValue", &FAttributeBaseValueData::BaseValue)
  ;
}