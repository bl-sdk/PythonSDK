#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloatConstant()
{
    class_< UDistributionFloatConstant, bases< UDistributionFloat >  , boost::noncopyable>("UDistributionFloatConstant", no_init)
        .def_readwrite("Constant", &UDistributionFloatConstant::Constant)
        .def("StaticClass", &UDistributionFloatConstant::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}