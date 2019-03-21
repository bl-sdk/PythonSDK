#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxAction_GetVariable()
{
    class_< UGFxAction_GetVariable, bases< USequenceAction >  , boost::noncopyable>("UGFxAction_GetVariable", no_init)
        .def_readwrite("Movie", &UGFxAction_GetVariable::Movie)
        .def_readwrite("Variable", &UGFxAction_GetVariable::Variable)
        .def("StaticClass", &UGFxAction_GetVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsValidLevelSequenceObject", &UGFxAction_GetVariable::eventIsValidLevelSequenceObject)
        .staticmethod("StaticClass")
  ;
}