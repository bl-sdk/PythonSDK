#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexDestructibleDamageParameters()
{
    class_< UApexDestructibleDamageParameters, bases< UObject >  , boost::noncopyable>("UApexDestructibleDamageParameters", no_init)
        .def_readwrite("DamageMap", &UApexDestructibleDamageParameters::DamageMap)
        .def("StaticClass", &UApexDestructibleDamageParameters::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}