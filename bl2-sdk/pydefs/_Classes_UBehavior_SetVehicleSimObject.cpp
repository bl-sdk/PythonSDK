#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetVehicleSimObject()
{
    class_< UBehavior_SetVehicleSimObject, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetVehicleSimObject", no_init)
        .def_readwrite("SimObjTemplate", &UBehavior_SetVehicleSimObject::SimObjTemplate)
        .def("StaticClass", &UBehavior_SetVehicleSimObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetVehicleSimObject::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}