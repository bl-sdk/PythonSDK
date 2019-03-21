#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShopTimerRateValueResolver()
{
    class_< UShopTimerRateValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UShopTimerRateValueResolver", no_init)
        .def("StaticClass", &UShopTimerRateValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}