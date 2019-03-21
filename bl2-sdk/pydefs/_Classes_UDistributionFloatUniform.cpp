#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloatUniform()
{
    class_< UDistributionFloatUniform, bases< UDistributionFloat >  , boost::noncopyable>("UDistributionFloatUniform", no_init)
        .def_readwrite("Min", &UDistributionFloatUniform::Min)
        .def_readwrite("Max", &UDistributionFloatUniform::Max)
        .def("StaticClass", &UDistributionFloatUniform::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}