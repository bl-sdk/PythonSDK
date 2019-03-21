#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDmgType_Suicided()
{
    class_< UDmgType_Suicided, bases< UKillZDamageType >  , boost::noncopyable>("UDmgType_Suicided", no_init)
        .def("StaticClass", &UDmgType_Suicided::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}