#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUBMGameOverGFxObject()
{
    class_< UUBMGameOverGFxObject, bases< UGFxObject >  , boost::noncopyable>("UUBMGameOverGFxObject", no_init)
        .def("StaticClass", &UUBMGameOverGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetPlayerInfo", &UUBMGameOverGFxObject::SetPlayerInfo)
        .staticmethod("StaticClass")
  ;
}