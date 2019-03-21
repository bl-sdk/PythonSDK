#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_PawnMaterialParam()
{
    class_< UAnimNotify_PawnMaterialParam, bases< UAnimNotify_Scripted >  , boost::noncopyable>("UAnimNotify_PawnMaterialParam", no_init)
        .def_readwrite("ScalarParameterInterpArray", &UAnimNotify_PawnMaterialParam::ScalarParameterInterpArray)
        .def("StaticClass", &UAnimNotify_PawnMaterialParam::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotify", &UAnimNotify_PawnMaterialParam::eventNotify)
        .staticmethod("StaticClass")
  ;
}