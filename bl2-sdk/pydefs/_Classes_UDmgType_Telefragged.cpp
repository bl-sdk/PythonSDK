#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDmgType_Telefragged()
{
    class_< UDmgType_Telefragged, bases< UDamageType >  , boost::noncopyable>("UDmgType_Telefragged", no_init)
        .def("StaticClass", &UDmgType_Telefragged::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}