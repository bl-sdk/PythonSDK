#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDmgType_Fell()
{
    class_< UDmgType_Fell, bases< UDamageType >  , boost::noncopyable>("UDmgType_Fell", no_init)
        .def("StaticClass", &UDmgType_Fell::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}