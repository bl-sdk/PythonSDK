#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetMaterialParameters()
{
    class_< UBehavior_SetMaterialParameters, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetMaterialParameters", no_init)
        .def_readwrite("AttributeContext", &UBehavior_SetMaterialParameters::AttributeContext)
        .def_readwrite("MeshSection", &UBehavior_SetMaterialParameters::MeshSection)
        .def_readwrite("ScalarParameterValues", &UBehavior_SetMaterialParameters::ScalarParameterValues)
        .def_readwrite("VectorParameterValues", &UBehavior_SetMaterialParameters::VectorParameterValues)
        .def_readwrite("TextureParameterValues", &UBehavior_SetMaterialParameters::TextureParameterValues)
        .def("StaticClass", &UBehavior_SetMaterialParameters::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetMaterialParameters::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}