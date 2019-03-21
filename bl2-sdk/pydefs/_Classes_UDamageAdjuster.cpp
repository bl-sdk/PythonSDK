#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDamageAdjuster()
{
    class_< UDamageAdjuster, bases< UObject >  , boost::noncopyable>("UDamageAdjuster", no_init)
        .def("StaticClass", &UDamageAdjuster::StaticClass, return_value_policy< reference_existing_object >())
        .def("AdjustDamage", &UDamageAdjuster::AdjustDamage)
        .staticmethod("StaticClass")
  ;
}