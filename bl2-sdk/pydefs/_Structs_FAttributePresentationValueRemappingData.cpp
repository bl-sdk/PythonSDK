#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributePresentationValueRemappingData()
{
    class_< FAttributePresentationValueRemappingData >("FAttributePresentationValueRemappingData", no_init)
        .def_readwrite("InputValueMn", &FAttributePresentationValueRemappingData::InputValueMn)
        .def_readwrite("InputValueMx", &FAttributePresentationValueRemappingData::InputValueMx)
        .def_readwrite("OutputValueMn", &FAttributePresentationValueRemappingData::OutputValueMn)
        .def_readwrite("OutputValueMx", &FAttributePresentationValueRemappingData::OutputValueMx)
  ;
}