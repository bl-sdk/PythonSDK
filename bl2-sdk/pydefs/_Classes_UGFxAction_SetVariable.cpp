#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxAction_SetVariable()
{
    class_< UGFxAction_SetVariable, bases< USequenceAction >  , boost::noncopyable>("UGFxAction_SetVariable", no_init)
        .def_readwrite("Movie", &UGFxAction_SetVariable::Movie)
        .def_readwrite("Variable", &UGFxAction_SetVariable::Variable)
        .def("StaticClass", &UGFxAction_SetVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsValidLevelSequenceObject", &UGFxAction_SetVariable::eventIsValidLevelSequenceObject)
        .staticmethod("StaticClass")
  ;
}