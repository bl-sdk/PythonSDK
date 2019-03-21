#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetMaterialScalarFade()
{
    class_< UBehavior_SetMaterialScalarFade, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetMaterialScalarFade", no_init)
        .def_readwrite("ScalarName", &UBehavior_SetMaterialScalarFade::ScalarName)
        .def_readwrite("StartValue", &UBehavior_SetMaterialScalarFade::StartValue)
        .def_readwrite("EndValue", &UBehavior_SetMaterialScalarFade::EndValue)
        .def_readwrite("FadeTime", &UBehavior_SetMaterialScalarFade::FadeTime)
        .def("StaticClass", &UBehavior_SetMaterialScalarFade::StaticClass, return_value_policy< reference_existing_object >())
        .def("StartFade", &UBehavior_SetMaterialScalarFade::StartFade)
        .def("ApplyBehaviorToContext", &UBehavior_SetMaterialScalarFade::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}