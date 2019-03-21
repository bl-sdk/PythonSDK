#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetVectorParam()
{
    class_< UBehavior_SetVectorParam, bases< UParameterBehaviorBase >  , boost::noncopyable>("UBehavior_SetVectorParam", no_init)
        .def_readwrite("RValue", &UBehavior_SetVectorParam::RValue)
        .def_readwrite("GValue", &UBehavior_SetVectorParam::GValue)
        .def_readwrite("bValue", &UBehavior_SetVectorParam::bValue)
        .def_readwrite("AValue", &UBehavior_SetVectorParam::AValue)
        .def("StaticClass", &UBehavior_SetVectorParam::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetVectorParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}