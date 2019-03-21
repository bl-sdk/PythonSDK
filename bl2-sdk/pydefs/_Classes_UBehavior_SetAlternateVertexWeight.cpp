#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetAlternateVertexWeight()
{
    class_< UBehavior_SetAlternateVertexWeight, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetAlternateVertexWeight", no_init)
        .def_readwrite("BoneName", &UBehavior_SetAlternateVertexWeight::BoneName)
        .def("StaticClass", &UBehavior_SetAlternateVertexWeight::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetAlternateVertexWeight::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}