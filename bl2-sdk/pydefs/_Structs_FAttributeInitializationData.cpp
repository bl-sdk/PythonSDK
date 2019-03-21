#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeInitializationData()
{
    class_< FAttributeInitializationData >("FAttributeInitializationData", no_init)
        .def_readwrite("BaseValueConstant", &FAttributeInitializationData::BaseValueConstant)
        .def_readwrite("BaseValueAttribute", &FAttributeInitializationData::BaseValueAttribute)
        .def_readwrite("InitializationDefinition", &FAttributeInitializationData::InitializationDefinition)
        .def_readwrite("BaseValueScaleConstant", &FAttributeInitializationData::BaseValueScaleConstant)
  ;
}