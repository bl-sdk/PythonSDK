#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UKillZDamageType()
{
    class_< UKillZDamageType, bases< UDamageType >  , boost::noncopyable>("UKillZDamageType", no_init)
        .def("StaticClass", &UKillZDamageType::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}