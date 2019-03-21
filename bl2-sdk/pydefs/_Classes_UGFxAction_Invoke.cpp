#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxAction_Invoke()
{
    class_< UGFxAction_Invoke, bases< USequenceAction >  , boost::noncopyable>("UGFxAction_Invoke", no_init)
        .def_readwrite("Movie", &UGFxAction_Invoke::Movie)
        .def_readwrite("MethodName", &UGFxAction_Invoke::MethodName)
        .def_readwrite("Arguments", &UGFxAction_Invoke::Arguments)
        .def("StaticClass", &UGFxAction_Invoke::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsValidLevelSequenceObject", &UGFxAction_Invoke::eventIsValidLevelSequenceObject)
        .staticmethod("StaticClass")
  ;
}