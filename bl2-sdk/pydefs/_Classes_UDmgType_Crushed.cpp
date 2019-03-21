#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDmgType_Crushed()
{
    class_< UDmgType_Crushed, bases< UDamageType >  , boost::noncopyable>("UDmgType_Crushed", no_init)
        .def("StaticClass", &UDmgType_Crushed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}