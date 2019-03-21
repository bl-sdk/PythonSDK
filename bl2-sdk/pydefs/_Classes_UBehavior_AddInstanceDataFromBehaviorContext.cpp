#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AddInstanceDataFromBehaviorContext()
{
    class_< UBehavior_AddInstanceDataFromBehaviorContext, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AddInstanceDataFromBehaviorContext", no_init)
        .def_readwrite("DatumName", &UBehavior_AddInstanceDataFromBehaviorContext::DatumName)
        .def_readwrite("ObjectContext", &UBehavior_AddInstanceDataFromBehaviorContext::ObjectContext)
        .def("StaticClass", &UBehavior_AddInstanceDataFromBehaviorContext::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AddInstanceDataFromBehaviorContext::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}